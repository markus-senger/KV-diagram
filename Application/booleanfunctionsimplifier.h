#ifndef BOOLEANFUNCTIONSIMPLIFIER_H
#define BOOLEANFUNCTIONSIMPLIFIER_H

#include <QWidget>
#include "truthtablesimplifier.h"
#include "kvdiagramsimplifier.h"

namespace Ui {
class BooleanFunctionSimplifier;
}

class BooleanFunctionSimplifier : public QWidget
{
    Q_OBJECT

public:
    explicit BooleanFunctionSimplifier(QWidget *parent = nullptr);
    ~BooleanFunctionSimplifier();

private slots:
    void on_addColButton_clicked();
    void on_removeColButton_clicked();
    void valueChanged();

private:
    Ui::BooleanFunctionSimplifier *ui;
    TruthTableSimplifier *truthTableData;
    KVDiagramSimplifier *kvDiagram;
    std::map<std::vector<int>, std::pair<std::vector<int>, bool>> primeImplicants;


    void addComboBox(int index);
    void resizeTruthTable();
    void resizeKVDiagram();
    void updateValues();
    std::map<std::vector<int>, std::pair<std::vector<int>, bool>> findMinTerms();
    void findPrimeImplicants();
    int summarizeTerms(std::vector<int>& term1, std::vector<int>& term2, std::vector<int>& newTerm);
    void printPrimeImplicants();
};

#endif // BOOLEANFUNCTIONSIMPLIFIER_H
