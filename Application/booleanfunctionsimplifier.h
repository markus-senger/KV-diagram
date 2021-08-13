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

    void addComboBox(int index);
    void resizeTruthTable();
    void resizeKVDiagram();
    void updateValueKVDiagram();
};

#endif // BOOLEANFUNCTIONSIMPLIFIER_H
