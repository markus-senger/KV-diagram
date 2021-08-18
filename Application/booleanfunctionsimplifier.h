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

    void on_clearButton_clicked();

private:
    Ui::BooleanFunctionSimplifier *ui;
    TruthTableSimplifier *truthTableData;
    KVDiagramSimplifier *kvDiagram;
    std::map<std::vector<int>, std::vector<int>> primeImplicants;


    void addComboBox(int index);
    void resizeTruthTable();
    void resizeKVDiagram();
    void updateValues();
    std::map<std::vector<int>, std::vector<int>> findMinTerms(bool dontCare = true);
    std::vector<int> findTermsWithoutDontCare();
    void findPrimeImplicants();
    int summarizeTerms(std::vector<int>& term1, std::vector<int>& term2, std::vector<int>& newTerm);
    void coverFunction();
    bool columnDominance(std::map<int, int>& termsColumnFrequency);
    bool rowDominance();
    void printPrimeImplicants();
};

#endif // BOOLEANFUNCTIONSIMPLIFIER_H
