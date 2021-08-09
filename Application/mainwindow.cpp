#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "types.h"
#include <QComboBox>
#include <QLineEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(PAGE_INDEX_SOLVER);

    addShadows();

    truthTableData = new TruthTable(this);
    kvDiagram = new KVDiagram(this);

    ui->truthTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->truthTable->setModel(truthTableData);

    ui->kvDiagram->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->kvDiagram->setModel(kvDiagram);
    ui->kvDiagram->setMaximumSize(KV_DIAGRAM_3VAR_WIDTH, KV_DIAGRAM_3VAR_HEIGHT);

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
    if(truthTableData->addVariable()) {
        resizeTruthTable();
        for(int i = 0; i < truthTableData->getCurRowNum(); i++) {
            addComboBox(i);
        }
        kvDiagram->addVariable();
        resizeKVDiagram();
        valueChanged();
    }
}

void MainWindow::on_removeColButton_clicked()
{
    if(truthTableData->removeVariable()) {
        resizeTruthTable();
        for(int i = 0; i < truthTableData->getCurRowNum(); i++) {
            addComboBox(i);
        }
        kvDiagram->removeVariable();
        resizeKVDiagram();
        valueChanged();
    }
}

void MainWindow::valueChanged()
{
    truthTableData->clearResults();
    for(int i = 0; i < truthTableData->getCurRowNum(); i++) {
        QComboBox* tmp = (QComboBox*) ui->truthTable->indexWidget(truthTableData->index(i, truthTableData->getCurColNum()-1));
        truthTableData->addResult(tmp->currentIndex());
    }
    updateValueKVDiagram();
}

void MainWindow::addShadows()
{
    ui->solverFrame->setGraphicsEffect(createShadow());
    ui->learningOverviewFrame->setGraphicsEffect(createShadow());
    ui->tutorial001Frame->setGraphicsEffect(createShadow());
}

void MainWindow::addComboBox(int index)
{
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

void MainWindow::resizeTruthTable()
{
    if(truthTableData->getCurVariableNum() == TRUTH_TABLE_2VAR) {
        ui->truthTableFrame->setMaximumSize(TRUTH_TABLE_2VAR_WIDTH, TRUTH_TABLE_2VAR_HEIGHT);
    }
    else if(truthTableData->getCurVariableNum() == TRUTH_TABLE_3VAR) {
        ui->truthTableFrame->setMaximumSize(TRUTH_TABLE_3VAR_WIDTH, TRUTH_TABLE_3VAR_HEIGHT);
    }
    else if(truthTableData->getCurVariableNum() == TRUTH_TABLE_4VAR) {
        ui->truthTableFrame->setMaximumSize(TRUTH_TABLE_4VAR_WIDTH, TRUTH_TABLE_4VAR_HEIGHT);
    }
}

void MainWindow::resizeKVDiagram()
{
    if(truthTableData->getCurVariableNum() == TRUTH_TABLE_2VAR) {
        ui->kvDiagram->setMaximumSize(KV_DIAGRAM_2VAR_WIDTH, KV_DIAGRAM_2VAR_HEIGHT);
    }
    else if(truthTableData->getCurVariableNum() == TRUTH_TABLE_3VAR) {
        ui->kvDiagram->setMaximumSize(KV_DIAGRAM_3VAR_WIDTH, KV_DIAGRAM_3VAR_HEIGHT);
    }
    else if(truthTableData->getCurVariableNum() == TRUTH_TABLE_4VAR) {
        ui->kvDiagram->setMaximumSize(KV_DIAGRAM_4VAR_WIDTH, KV_DIAGRAM_4VAR_HEIGHT);
    }
}

void MainWindow::updateValueKVDiagram()
{
    kvDiagram->updateValues(truthTableData->getResults());
}

QGraphicsDropShadowEffect* MainWindow::createShadow()
{
    QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect(this);
    effect->setBlurRadius(5);
    effect->setXOffset(5);
    effect->setYOffset(5);
    effect->setColor(SHADOW_COLOR);

    return effect;
}

void MainWindow::on_learningButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(PAGE_INDEX_LEARNING_OVERVIEW);
}

void MainWindow::on_backToSolverButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(PAGE_INDEX_SOLVER);
}

void MainWindow::on_openTutorialButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(PAGE_INDEX_LEARNING_TUTORIAL_001);
}

void MainWindow::on_backToSolverButton_2_clicked()
{
    on_backToSolverButton_clicked();
}

void MainWindow::on_backToLearningOverviewButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(PAGE_INDEX_LEARNING_OVERVIEW);
}

