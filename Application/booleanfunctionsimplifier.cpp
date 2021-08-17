#include "booleanfunctionsimplifier.h"
#include "ui_booleanfunctionsimplifier.h"
#include "types.h"
#include <QComboBox>
#include <QLineEdit>

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
    findPrimeImplicants();
    printPrimeImplicants();
}

std::map<std::vector<int>, std::pair<std::vector<int>, bool>> BooleanFunctionSimplifier::findMinTerms()
{
    std::map<std::vector<int>, std::pair<std::vector<int>, bool>> minTerms;
    int i = 0;
    for(auto& entry : truthTableData->getResults()) {
        if (entry == 1 || entry == OPTION_DONT_CARE) {
            std::vector<int> tmp;
            tmp.push_back(i);
            minTerms[tmp].first = truthTableData->getDataAtIdx(i);
            if(entry == OPTION_DONT_CARE) minTerms[tmp].second = true;
            else minTerms[tmp].second = false;
        }
        i++;
    }
    return minTerms;
}

void BooleanFunctionSimplifier::findPrimeImplicants()
{
    primeImplicants.clear();
    std::map<std::vector<int>, std::pair<std::vector<int>, bool>> quinesTable1 = findMinTerms();
    std::map<std::vector<int>, std::vector<int>> termsAlreadySummarized;
    while(!quinesTable1.empty()) {
        std::map<std::vector<int>, std::pair<std::vector<int>, bool>> quinesTableTmp;

        for(auto entry1 = quinesTable1.begin(); entry1 != quinesTable1.end(); ++entry1) {
            bool insertedEntry = false;
            for(auto entry2 = entry1; entry2 != quinesTable1.end(); ++entry2) {
                std::vector<int> summarizedTerm;
                int diff = summarizeTerms(entry1->second.first, entry2->second.first, summarizedTerm);
                if(diff == 1) {
                    termsAlreadySummarized[entry2->second.first] = entry1->second.first;
                    insertedEntry = true;
                    std::vector<int> tmpIdx = entry1->first;
                    tmpIdx.insert(tmpIdx.end(), entry2->first.begin(), entry2->first.end());
                    quinesTableTmp[tmpIdx].first = summarizedTerm;
                    if(entry1->second.second == true && entry2->second.second == true) quinesTableTmp[tmpIdx].second = true;
                    else quinesTableTmp[tmpIdx].second = false;
                }
                else if(termsAlreadySummarized.find(entry1->second.first) != termsAlreadySummarized.end()) {
                    insertedEntry = true;
                }
            }
            if (!insertedEntry) {
                primeImplicants[entry1->second.first].first = entry1->first;
                primeImplicants[entry1->second.first].second = entry1->second.second;
            }
        }
        quinesTable1 = quinesTableTmp;
    }
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

void BooleanFunctionSimplifier::printPrimeImplicants()
{
    QString result = "";
    char letter = 'A';
    int i = 0;
    int primeImplicantsSize = primeImplicants.size();
    for(auto& entry : primeImplicants) {
        result += "( ";
        int entrySize = count_if(entry.first.begin(), entry.first.end(), [](int i) {
                                     return i != OPTION_DONT_CARE;
                                 });
        int j = 0;
        if(entry.second.second != true) {
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
        }
        letter = 'A';
        result += " )";
        if(primeImplicantsSize - 1 > i) result += " + ";
        i++;
    }
    if(result == "") ui->resultLabel->setText("( )");
    else ui->resultLabel->setText(result);
}

