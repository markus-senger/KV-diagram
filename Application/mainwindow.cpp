#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "types.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->mainStackedWidget->setCurrentIndex(PAGE_INDEX_SOLVER);

    addShadows();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addShadows()
{
    ui->solverFrame->setGraphicsEffect(createShadow());
    ui->learningOverviewFrame->setGraphicsEffect(createShadow());
    ui->tutorialFrame->setGraphicsEffect(createShadow());
    ui->task1Frame->setGraphicsEffect(createShadow());
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
    ui->mainStackedWidget->setCurrentIndex(PAGE_INDEX_LEARNING_OVERVIEW);
}

void MainWindow::on_backToSolverButton_clicked()
{
    ui->mainStackedWidget->setCurrentIndex(PAGE_INDEX_SOLVER);
}

void MainWindow::on_openTutorialButton_clicked()
{
    ui->mainStackedWidget->setCurrentIndex(PAGE_INDEX_LEARNING_TUTORIAL);
}

void MainWindow::on_backToSolverButton_2_clicked()
{
    on_backToSolverButton_clicked();
}

void MainWindow::on_backToLearningOverviewButton_clicked()
{
    ui->mainStackedWidget->setCurrentIndex(PAGE_INDEX_LEARNING_OVERVIEW);
}


void MainWindow::on_openTask1Button_clicked()
{
    ui->mainStackedWidget->setCurrentIndex(PAGE_INDEX_LEARNING_TASK1);
    ui->widgetTask1->reset();
}


void MainWindow::on_backToSolverButton_3_clicked()
{
     on_backToSolverButton_clicked();
}


void MainWindow::on_backToLearningOverviewButton_2_clicked()
{
    on_backToLearningOverviewButton_clicked();
}

