#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "truthtable.h"
#include "types.h"
#include <QComboBox>
#include <QLineEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    truthTableData = new TruthTable(this);

    ui->truthTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->truthTable->setModel(truthTableData);

    for(int i = 0; i < TRUTH_TABLE_INIT_ROW_NUM; i++) {
        addComboBox(i);
    }
    valueChanged();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_addColButton_clicked()
{
    int oldRowNum = truthTableData->getCurRowNum();
    if(truthTableData->addVariable())
        ui->truthTableFrame->setMaximumSize(ui->truthTableFrame->maximumSize().width()*TRUTH_TABLE_WIDTH_SCALE, ui->truthTableFrame->maximumSize().height()*TRUTH_TABLE_HEIGHT_SCALE);

    for(int i = oldRowNum; i < truthTableData->getCurRowNum(); i++) {
        addComboBox(i);
    }
    valueChanged();
}


void MainWindow::on_removeColButton_clicked()
{
    if(truthTableData->removeVariable())
        ui->truthTableFrame->setMaximumSize(ui->truthTableFrame->maximumSize().width()/TRUTH_TABLE_WIDTH_SCALE, ui->truthTableFrame->maximumSize().height()/TRUTH_TABLE_HEIGHT_SCALE);
}

void MainWindow::valueChanged()
{
    truthTableData->clearResults();
    for(int i = 0; i < truthTableData->getCurRowNum(); i++) {
        QComboBox* tmp = (QComboBox*) ui->truthTable->indexWidget(truthTableData->index(i, truthTableData->getCurColNum()-1));
        truthTableData->addResult(tmp->currentIndex());
    }
}

void MainWindow::addComboBox(int index) {
    QComboBox* kvOptions = new QComboBox(this);
    kvOptions->setStyleSheet("QComboBox { background-color: #E0E0E0; border: none; }");
    kvOptions->setEditable(true);
    kvOptions->lineEdit()->setReadOnly(true);
    kvOptions->lineEdit()->setAlignment(Qt::AlignCenter);
    for(auto& option : KV_DIAGRAM_OPTIONS) {
        kvOptions->addItem(option);
    }
    ui->truthTable->setIndexWidget(truthTableData->index(index, truthTableData->getCurColNum()-1), kvOptions);
    connect(kvOptions, SIGNAL(activated(int)), this, SLOT(valueChanged()));
}

