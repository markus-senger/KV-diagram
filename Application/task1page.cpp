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

void Task1Page::reset()
{
    ui->task1StackedWidget->setCurrentIndex(0);
    ui->editableKVDiagram1->reset();
    ui->resultKVDiagram1Label->setText("");
    ui->resultKVDiagram1Label->setStyleSheet("");
}

void Task1Page::on_continueButtonTask1Page1_clicked()
{
    ui->task1StackedWidget->setCurrentIndex(1);
    ui->InputField_1->reset();
    if(ui->solutionLabelTask1_1->text() != "") {
        on_solutionButtonTask1_1_clicked();
    }
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
        ui->solutionLabelTask1_1->setStyleSheet("color: black; border: 2px solid #ffcc80");
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

void Task1Page::on_continueButtonTask1Page2_clicked()
{
    ui->task1StackedWidget->setCurrentIndex(2);
}


void Task1Page::on_backButtonTask1Page3_clicked()
{
    ui->task1StackedWidget->setCurrentIndex(1);
    ui->editableKVDiagram1->reset();
    ui->resultKVDiagram1Label->setText("");
    ui->resultKVDiagram1Label->setStyleSheet("");
}


void Task1Page::on_checkKVDiagram_clicked()
{
    std::map<std::pair<int, int>, int> data;
    data[std::pair(1,1)] = 1;
    data[std::pair(1,2)] = 0;
    data[std::pair(1,3)] = 0;
    data[std::pair(1,4)] = 1;
    data[std::pair(2,1)] = 0;
    data[std::pair(2,2)] = 1;
    data[std::pair(2,3)] = 1;
    data[std::pair(2,4)] = 0;

    if(ui->editableKVDiagram1->checkData(data)) {
        ui->resultKVDiagram1Label->setText("richtig");
        ui->resultKVDiagram1Label->setStyleSheet("color: white; background-color: green;");
    }
    else {
        ui->resultKVDiagram1Label->setText("falsch");
        ui->resultKVDiagram1Label->setStyleSheet("color: white; background-color: red;");
    }
}


void Task1Page::on_continueButtonTask1Page3_clicked()
{
    ui->task1StackedWidget->setCurrentIndex(3);
    ui->editableKVDiagram1->reset();
    ui->resultKVDiagram1Label->setText("");
    ui->resultKVDiagram1Label->setStyleSheet("");
}


void Task1Page::on_backButtonTask1Page4_clicked()
{
    ui->task1StackedWidget->setCurrentIndex(2);
    ui->InputField_2->reset();
    if(ui->solutionLabelTask1_4->text() != "") {
        on_solutionButtonTask1_4_clicked();
    }
}


void Task1Page::on_solutionButtonTask1_4_clicked()
{
    static bool show = false;
    if(!show) {
        ui->solutionLabelTask1_4->setText("(A ▪ C) + (¬A ▪ ¬C)");
        ui->solutionLabelTask1_4->setStyleSheet("color: black; border: 2px solid #ffcc80");
        show = true;
        show = true;
        ui->solutionButtonTask1_4->setText("Lösung ausblenden");
        ui->kvDiagramTask1_4->setStyleSheet("image: url(:/images/task1_kvdiagram1_solution.png)");
    }
    else {
        ui->solutionLabelTask1_4->setText("");
        ui->solutionLabelTask1_4->setStyleSheet("border: 0px solid black");
        show = false;
        ui->solutionButtonTask1_4->setText("Lösung anzeigen");
        ui->kvDiagramTask1_4->setStyleSheet("image: url(:/images/task1_kvdiagram1.png)");
    }
}


void Task1Page::on_continueButtonTask1Page4_clicked()
{
    ui->task1StackedWidget->setCurrentIndex(4);
    ui->InputField_2->reset();
    if(ui->solutionLabelTask1_4->text() != "") {
        on_solutionButtonTask1_4_clicked();
    }
}


void Task1Page::on_backButtonTask1Page5_clicked()
{
    ui->task1StackedWidget->setCurrentIndex(3);
}

