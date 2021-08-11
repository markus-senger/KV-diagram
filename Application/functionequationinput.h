#ifndef FUNCTIONEQUATIONINPUT_H
#define FUNCTIONEQUATIONINPUT_H

#include <QWidget>

namespace Ui {
class functionEquationInput;
}

class functionEquationInput : public QWidget
{
    Q_OBJECT

public:
    explicit functionEquationInput(QWidget *parent = nullptr);
    ~functionEquationInput();

private slots:
    void on_A_clicked();

    void on_B_clicked();

    void on_C_clicked();

    void on_notA_clicked();

    void on_notB_clicked();

    void on_notC_clicked();

    void on_AND_clicked();

    void on_OR_clicked();

    void on_leftBracket_clicked();

    void on_rightBracket_clicked();

    void on_deleteButton_clicked();

private:
    Ui::functionEquationInput *ui;
};

#endif // FUNCTIONEQUATIONINPUT_H
