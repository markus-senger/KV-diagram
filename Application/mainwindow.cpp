#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "truthtable.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    truthTableData = new TruthTable(this);
    ui->truthTable->resizeColumnsToContents();
    ui->truthTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->truthTable->setModel(truthTableData);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_addColButton_clicked()
{
    truthTableData->addVariable();
}

