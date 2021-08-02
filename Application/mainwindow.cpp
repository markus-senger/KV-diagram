#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "truthtable.h"
#include "types.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    truthTableData = new TruthTable(this);
    ui->truthTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->truthTable->setModel(truthTableData);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_addColButton_clicked()
{
    if(truthTableData->addVariable())
        ui->truthTableFrame->setMaximumSize(ui->truthTableFrame->maximumSize().width()*TRUTH_TABLE_WIDTH_SCALE, ui->truthTableFrame->maximumSize().height()*TRUTH_TABLE_HEIGHT_SCALE);
}


void MainWindow::on_removeColButton_clicked()
{
    if(truthTableData->removeVariable())
        ui->truthTableFrame->setMaximumSize(ui->truthTableFrame->maximumSize().width()/TRUTH_TABLE_WIDTH_SCALE, ui->truthTableFrame->maximumSize().height()/TRUTH_TABLE_HEIGHT_SCALE);
}

