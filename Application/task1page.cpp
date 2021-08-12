#include "task1page.h"
#include "ui_task1page.h"

Task1Page::Task1Page(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Task1Page)
{
    ui->setupUi(this);
    ui->task1StackedWidget->setCurrentIndex(0);
}

Task1Page::~Task1Page()
{
    delete ui;
}

void Task1Page::on_continueButtonTask1Page1_clicked()
{
    ui->task1StackedWidget->setCurrentIndex(1);
}

void Task1Page::on_backButtonTask1Page2_clicked()
{
    ui->task1StackedWidget->setCurrentIndex(0);
}

void Task1Page::on_solutionButtonTask1_1_clicked()
{
    static bool show = false;
    if(!show) {
        ui->solutionLabelTask1_1->setText("(¬A ▪ ¬B ▪ ¬C) + (¬A ▪ B ▪ ¬C) + (A ▪ ¬B ▪ C) + (A ▪ B ▪ C)");
        ui->solutionLabelTask1_1->setStyleSheet("color: black; border: 2px solid #A40018");
        show = true;
        show = true;
        ui->solutionButtonTask1_1->setText("Lösung ausblenden");
    }
    else {
        ui->solutionLabelTask1_1->setText("");
        ui->solutionLabelTask1_1->setStyleSheet("border: 0px solid black");
        show = false;
        ui->solutionButtonTask1_1->setText("Lösung anzeigen");
    }
}
