#ifndef EQUATIONINPUTFIELD_H
#define EQUATIONINPUTFIELD_H

#include <QWidget>

namespace Ui {
class EquationInputField;
}

class EquationInputField : public QWidget
{
    Q_OBJECT

public:
    explicit EquationInputField(QWidget *parent = nullptr);
    ~EquationInputField();

    void reset();

private slots:
    void on_AButton_clicked();

    void on_BButton_clicked();

    void on_CButton_clicked();

    void on_notAButton_clicked();

    void on_notBButton_clicked();

    void on_notCButton_clicked();

    void on_ANDButton_clicked();

    void on_ORButton_clicked();

    void on_leftBracketButton_clicked();

    void on_rightBracketButton_clicked();

    void on_deleteButton_clicked();

    void on_clearButton_clicked();

private:
    Ui::EquationInputField *ui;
};

#endif // EQUATIONINPUTFIELD_H
