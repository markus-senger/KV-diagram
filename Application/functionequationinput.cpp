#include "functionequationinput.h"
#include "ui_functionequationinput.h"

functionEquationInput::functionEquationInput(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::functionEquationInput)
{
    ui->setupUi(this);
}

functionEquationInput::~functionEquationInput()
{
    delete ui;
}

void functionEquationInput::on_A_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + " A");
}


void functionEquationInput::on_B_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + " B");
}


void functionEquationInput::on_C_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + " C");
}


void functionEquationInput::on_notA_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + " ¬A");
}


void functionEquationInput::on_notB_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + " ¬B");
}


void functionEquationInput::on_notC_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + " ¬C");
}


void functionEquationInput::on_AND_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + " ▪");
}


void functionEquationInput::on_OR_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + " +");
}


void functionEquationInput::on_leftBracket_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + " (");
}


void functionEquationInput::on_rightBracket_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + " )");
}


void functionEquationInput::on_deleteButton_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text().remove(ui->lineEdit->text().size()-2, 2));
}

