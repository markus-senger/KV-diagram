#include "booleanfunctionsimplifier.h"
#include "ui_booleanfunctionsimplifier.h"
#include "types.h"
#include <QComboBox>
#include <QLineEdit>
#include "painterforkvdiagram.h"
#include <algorithm>

BooleanFunctionSimplifier::BooleanFunctionSimplifier(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BooleanFunctionSimplifier)
{
    ui->setupUi(this);

    truthTableData = new TruthTableSimplifier(this);
    kvDiagram = new KVDiagramSimplifier(this);

    ui->truthTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->truthTable->setModel(truthTableData);

    ui->kvDiagram->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->kvDiagram->setModel(kvDiagram);
    ui->kvDiagram->setMaximumSize(KV_DIAGRAM_3VAR_WIDTH, KV_DIAGRAM_3VAR_HEIGHT);

    for(int i = 0; i < TRUTH_TABLE_INIT_ROW_NUM; i++) {
        addComboBox(i);
    }
    valueChanged();
}

BooleanFunctionSimplifier::~BooleanFunctionSimplifier()
{
    delete ui;
}

void BooleanFunctionSimplifier::on_addColButton_clicked()
{
    if(truthTableData->addVariable()) {
        resizeTruthTable();
        for(int i = 0; i < truthTableData->getCurRowNum(); i++) {
            addComboBox(i);
        }
        kvDiagram->addVariable();
        resizeKVDiagram();
        valueChanged();
    }
}

void BooleanFunctionSimplifier::on_removeColButton_clicked()
{
    if(truthTableData->removeVariable()) {
        resizeTruthTable();
        for(int i = 0; i < truthTableData->getCurRowNum(); i++) {
            addComboBox(i);
        }
        kvDiagram->removeVariable();
        resizeKVDiagram();
        valueChanged();
    }
}

void BooleanFunctionSimplifier::on_clearButton_clicked()
{
    for(int i = 0; i < truthTableData->getCurRowNum(); i++) {
        addComboBox(i);
    }
    valueChanged();
}

void BooleanFunctionSimplifier::valueChanged()
{
    truthTableData->clearResults();
    for(int i = 0; i < truthTableData->getCurRowNum(); i++) {
        QComboBox* tmp = (QComboBox*) ui->truthTable->indexWidget(truthTableData->index(i, truthTableData->getCurColNum()-1));
        truthTableData->addResult(tmp->currentIndex());
    }
    updateValues();
}

void BooleanFunctionSimplifier::addComboBox(int index)
{
    QComboBox* kvOptions = new QComboBox(this);
    kvOptions->setStyleSheet("QComboBox { background-color: #E0E0E0; border: none; }");
    kvOptions->setEditable(true);
    kvOptions->lineEdit()->setReadOnly(true);
    kvOptions->lineEdit()->setAlignment(Qt::AlignCenter);
    for(auto& option : KV_DIAGRAM_OPTIONS) {
        kvOptions->addItem(option);
    }
    ui->truthTable->setIndexWidget(truthTableData->index(index, truthTableData->getCurColNum()-1), kvOptions);
    connect(kvOptions, SIGNAL(activated(int)), this, SLOT(valueChanged()));
}

void BooleanFunctionSimplifier::resizeTruthTable()
{
    if(truthTableData->getCurVariableNum() == TRUTH_TABLE_2VAR) {
        ui->truthTableFrame->setMaximumSize(TRUTH_TABLE_2VAR_WIDTH, TRUTH_TABLE_2VAR_HEIGHT);
    }
    else if(truthTableData->getCurVariableNum() == TRUTH_TABLE_3VAR) {
        ui->truthTableFrame->setMaximumSize(TRUTH_TABLE_3VAR_WIDTH, TRUTH_TABLE_3VAR_HEIGHT);
    }
    else if(truthTableData->getCurVariableNum() == TRUTH_TABLE_4VAR) {
        ui->truthTableFrame->setMaximumSize(TRUTH_TABLE_4VAR_WIDTH, TRUTH_TABLE_4VAR_HEIGHT);
    }
}

void BooleanFunctionSimplifier::resizeKVDiagram()
{
    if(truthTableData->getCurVariableNum() == TRUTH_TABLE_2VAR) {
        ui->kvDiagram->setMaximumSize(KV_DIAGRAM_2VAR_WIDTH, KV_DIAGRAM_2VAR_HEIGHT);
    }
    else if(truthTableData->getCurVariableNum() == TRUTH_TABLE_3VAR) {
        ui->kvDiagram->setMaximumSize(KV_DIAGRAM_3VAR_WIDTH, KV_DIAGRAM_3VAR_HEIGHT);
    }
    else if(truthTableData->getCurVariableNum() == TRUTH_TABLE_4VAR) {
        ui->kvDiagram->setMaximumSize(KV_DIAGRAM_4VAR_WIDTH, KV_DIAGRAM_4VAR_HEIGHT);
    }
}

void BooleanFunctionSimplifier::updateValues()
{
    kvDiagram->updateValues(truthTableData->getResults());
    findEssentialPrimeImplicants();
    printEssentialPrimeImplicants();
}

std::map<std::vector<int>, std::vector<int>> BooleanFunctionSimplifier::findMinTerms(bool dontCare)
{
    std::map<std::vector<int>, std::vector<int>> minTerms;
    int i = 0;
    for(auto& entry : truthTableData->getResults()) {
        if (entry == 1 || (dontCare && entry == OPTION_DONT_CARE)) {
            std::vector<int> tmp;
            tmp.push_back(i);
            minTerms[tmp] = truthTableData->getDataAtIdx(i);
        }
        i++;
    }
    return minTerms;
}

std::vector<int> BooleanFunctionSimplifier::findTermsWithoutDontCare()
{
    std::vector<int> terms;
    int i = 0;
    for(auto& entry : truthTableData->getResults()) {
        if (entry == 1) {
            terms.push_back(i);
        }
        i++;
    }
    return terms;
}

void BooleanFunctionSimplifier::findEssentialPrimeImplicants()
{
    primeImplicants.clear();
    std::map<std::vector<int>, std::vector<int>> quinesTable1 = findMinTerms();

    while(!quinesTable1.empty()) {
        std::map<std::vector<int>, std::vector<int>> quinesTableTmp;
        std::set<std::vector<int>> termsAlreadySummarized;

        for(auto entry1 = quinesTable1.begin(); entry1 != quinesTable1.end(); ++entry1) {
            bool entry1Summarized = false;

            for(auto entry2 = entry1; entry2 != quinesTable1.end(); ++entry2) {

                std::vector<int> summarizedTerm;
                int diff = summarizeTerms(entry1->second, entry2->second, summarizedTerm);
                if(diff == 1) {
                    termsAlreadySummarized.insert(entry2->second);
                    entry1Summarized = true;
                    std::vector<int> tmpIdx = entry1->first;
                    tmpIdx.insert(tmpIdx.end(), entry2->first.begin(), entry2->first.end());
                    quinesTableTmp[tmpIdx] = summarizedTerm;
                }
                else if(termsAlreadySummarized.find(entry1->second) != termsAlreadySummarized.end()) {
                    entry1Summarized = true;
                }
            }
            if (!entry1Summarized) {
                primeImplicants[entry1->second] = entry1->first;
            }
        }
        quinesTable1 = quinesTableTmp;
    }

    coverFunction();
    ui->kvDiagram->setItemDelegate(new PainterForKVDiagram(this, primeImplicants, truthTableData->getCurVariableNum()));
}

int BooleanFunctionSimplifier::summarizeTerms(std::vector<int>& term1, std::vector<int>& term2, std::vector<int>& newTerm)
{
    int differenceCount = 0;
    int i = 0;
    for(int entry1 : term1) {
        if(entry1 != term2.at(i)) {
            differenceCount++;
            newTerm.push_back(OPTION_DONT_CARE);
        }
        else {
            newTerm.push_back(entry1);
        }
        i++;
    }

    return differenceCount;
}

void BooleanFunctionSimplifier::coverFunction()
{
    std::map<int, std::set<int>> coverageTable = createCoverageTable();
    std::map<int, std::set<int>> function = computeBracketExpressions(coverageTable);

    minimizeFunction(function);
    primeImplicants = findBestSolution(function);
}

std::map<int, std::set<int>> BooleanFunctionSimplifier::createCoverageTable()
{
    std::map<int, std::set<int>> coverageTable;
    int i = 0;
    for(auto& tmp : primeImplicants) {
        for(auto& tmp2 : tmp.second) {
            coverageTable[tmp2].insert(i);
        }
        i++;
    }
    return coverageTable;
}

std::map<int, std::set<int>> BooleanFunctionSimplifier::computeBracketExpressions(std::map<int, std::set<int>>& coverageTable)
{
    std::map<int, std::set<int>> function;
    size_t size = 0;
    for(auto& tmp : coverageTable) {
        if(size != 0 && tmp.second.size() > 0) {
            int a = function.size() * 2 - 1;
            for(auto& tmp11 : function) {
                function[a] = tmp11.second;
                a--;
            }
            size = function.size() / tmp.second.size();
        }
        else if(size == 0) {
            size = 1;
        }

        int j = 0;
        size_t i;
        for(i = 0; i < size; i++) {
            for(auto& tmp2 : tmp.second) {
                function[j].insert(tmp2);
                j++;
            }
        }
    }
    return function;
}

void BooleanFunctionSimplifier::minimizeFunction(std::map<int, std::set<int>>& function)
{
    std::map<int, std::set<int>> deleteFunc;
    for(auto tmp = function.begin(); tmp != function.end(); ++tmp) {
        for(auto tmp2 = function.begin(); tmp2 != function.end(); ++tmp2) {
            if(tmp2->second.size() < tmp->second.size()) {
                bool e = true;
                for(auto& tmp3 : tmp2->second) {
                    if(tmp->second.find(tmp3) == tmp->second.end()) {
                        e = false;
                        break;
                    }
                }
                if(e) {
                    deleteFunc[tmp->first] = tmp->second;
                }
            }
        }
    }

    for(auto& tmp : deleteFunc) {
        function.erase(tmp.first);
    }
}

std::map<std::vector<int>, std::vector<int>> BooleanFunctionSimplifier::findBestSolution(std::map<int, std::set<int>>& function)
{
    int i = -1;
    size_t min = std::numeric_limits<int>::max();
    for(auto& tmp : function) {
        if(tmp.second.size() < min) {
            min = tmp.second.size();
            i = tmp.first;
        }
    }

    std::map<std::vector<int>, std::vector<int>> p;
    int j = 0;
    if(i != -1) {
        for(auto& tmp2 : function.at(i)) {
            for(auto& tmp : primeImplicants) {
                if(j == tmp2) {
                    p[tmp.first] = tmp.second;
                    break;
                }
                j++;
            }
            j = 0;
        }
    }
    return p;
}

void BooleanFunctionSimplifier::coverFunction2()
{
    std::map<std::vector<int>, std::vector<int>> primeImplicantsClone;
    std::map<std::vector<int>, std::vector<int>> primeImplicants2;
    primeImplicants2.insert(primeImplicants.begin(), primeImplicants.end());
    std::vector<int> termsWithoutDontCare = findTermsWithoutDontCare();
    for(auto& entry : primeImplicants) {
        entry.second.erase(remove_if(entry.second.begin(), entry.second.end(), [&termsWithoutDontCare](int i) {
            return (std::find(termsWithoutDontCare.begin(), termsWithoutDontCare.end(), i) == termsWithoutDontCare.end());
        }), entry.second.end());
    }

    std::map<int, int> termsColumnFrequency;
    for(auto& entry1 : termsWithoutDontCare) {
        int cnt = 0;
        for(auto& entry2 : primeImplicants) {
            if(std::find(entry2.second.begin(), entry2.second.end(), entry1) != entry2.second.end()) {
                cnt++;
            }
        }
        termsColumnFrequency[entry1] = cnt;
    }

    bool test=true;
    std::set<int> r;
    std::vector<int> groups;
    std::set<int> gh;
    primeImplicantsClone.clear();
    int i = 0;
    int j = 0;
    int a = 1;
    bool flag = false;
    bool aFlag = false;
    while (test) {
        if(flag) {
            test = true;
            flag = false;
        }
        else {
            test = false;
        }
        for(auto& tmp : primeImplicants) {
            if(std::find(groups.begin(), groups.end(), std::count(tmp.first.begin(), tmp.first.end(), 1)) == groups.end()) {
                int min = INT32_MAX;
                for(auto& tmp2 : tmp.second) {
                    if(std::find(r.begin(), r.end(), tmp2) == r.end()) {
                        i++;
                        gh.insert(tmp2);
                        if(termsColumnFrequency[tmp2] < min) {
                            min = termsColumnFrequency[tmp2];
                        }
                    }
                }
                qInfo() << i << tmp.second.size() << j << tmp.second << min << a;
                if(i >= (int)tmp.second.size() - j && i >= 1 && min <= a) {
                    groups.push_back(std::count(tmp.first.begin(), tmp.first.end(), 1));
                    primeImplicantsClone[tmp.first] = tmp.second;
                    std::copy(tmp.second.begin(), tmp.second.end(), std::inserter(r, r.begin()));
                    test = true;
                    aFlag = true;
                }
                else if (i >= (int)tmp.second.size() - j && i >= 1) {
                    flag = true;
                }
                i = 0;
            }
            else {
                test = true;
                flag = true;
            }
        }
        if(!flag) {
            j++;
        }
        if(!aFlag) {
            a++;
        }
        aFlag = false;
        if(gh.size() > r.size()) {
            test = true;
        }
        groups.clear();
    }

    primeImplicants.clear();
    primeImplicants.insert(primeImplicantsClone.begin(), primeImplicantsClone.end());
}

bool BooleanFunctionSimplifier::columnDominance(std::map<int, int>& termsColumnFrequency, std::map<std::vector<int>, std::vector<int>>& primeImplicantsClone)
{
    bool erased = false;
    unsigned int cnt = 0;
    int max = 1;
    int maxNumber = -1;

    for(auto& entry1 : primeImplicantsClone) {
        if(!erased) {
            cnt = 0;
            max = 1;
            maxNumber = -1;
            for(auto& entry2 : entry1.second) {
                if(termsColumnFrequency[entry2] >= max) {
                    if(termsColumnFrequency[entry2] > max) cnt = 0;
                    max = termsColumnFrequency[entry2];
                    maxNumber = entry2;
                    cnt++;
                }
            }
        }

        if(maxNumber != -1 && cnt < entry1.second.size()) {
            for(auto& entry1 : primeImplicantsClone) {
                entry1.second.erase(remove_if(entry1.second.begin(), entry1.second.end(), [&maxNumber](int i) {
                    return (maxNumber == i);
                }), entry1.second.end());
            }
            erased = true;
            break;
        }
    }

    return erased;
}

bool BooleanFunctionSimplifier::rowDominance(std::map<std::vector<int>, std::vector<int>>& primeImplicantsClone)
{
    bool erased = false;
    for(auto& entry1 : primeImplicantsClone) {
        for(auto& entry2 : primeImplicantsClone) {
            if(entry1 != entry2 && entry1.second.size() > entry2.second.size()) {
                if(std::all_of(entry1.second.begin(), entry1.second.end(), [&entry2] (int i) {
                    return std::find(entry2.second.begin(), entry2.second.end(), i) != entry2.second.end();
                })) {
                    primeImplicantsClone.erase(entry1.first);
                    erased = true;
                    break;
                }
            }
        }
        if(erased == true) break;
    }

    return erased;
}

void BooleanFunctionSimplifier::printEssentialPrimeImplicants()
{
    QString result = "";
    char letter = 'A';
    int i = 0;
    int primeImplicantsSize = primeImplicants.size();
    for(auto& entry : primeImplicants) {
        result += " ( ";
        int entrySize = count_if(entry.first.begin(), entry.first.end(), [](int i) {
                                     return i != OPTION_DONT_CARE;
                                 });
        int j = 0;
        for(int variable : entry.first) {
            if(variable != 2) {
                if(variable == 1) {
                    result += QString(letter);
                }
                else if(variable == 0) {
                    result += "¬" + QString(letter);
                }
                if(entrySize - 1 > j) result += " ▪ ";
                j++;
            }
            letter++;
        }
        letter = 'A';
        result += " ) ";
        if(primeImplicantsSize - 1 > i) result += " + ";
        i++;
    }
    if(result == "") ui->resultLabel->setText(" ( ) ");
    else ui->resultLabel->setText(result);
}

