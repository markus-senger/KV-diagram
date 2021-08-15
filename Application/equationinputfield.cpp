#include "equationinputfield.h"
#include "ui_equationinputfield.h"

EquationInputField::EquationInputField(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EquationInputField)
{
    ui->setupUi(this);
}

EquationInputField::~EquationInputField()
{
    delete ui;
}

void EquationInputField::reset()
{
    on_clearButton_clicked();
}

void EquationInputField::on_AButton_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + " A");
}


void EquationInputField::on_BButton_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + " B");
}


void EquationInputField::on_CButton_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + " C");
}


void EquationInputField::on_notAButton_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + " ¬A");
}


void EquationInputField::on_notBButton_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + " ¬B");
}


void EquationInputField::on_notCButton_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + " ¬C");
}


void EquationInputField::on_ANDButton_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + " ▪");
}


void EquationInputField::on_ORButton_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + " +");
}


void EquationInputField::on_leftBracketButton_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + " (");
}


void EquationInputField::on_rightBracketButton_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + " )");
}


void EquationInputField::on_deleteButton_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text().remove(ui->lineEdit->text().size()-2, 2));
}


void EquationInputField::on_clearButton_clicked()
{
    ui->lineEdit->setText("");
}
