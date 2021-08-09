#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsDropShadowEffect>
#include "truthtable.h"
#include "kvdiagram.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addColButton_clicked();
    void on_removeColButton_clicked();
    void valueChanged();
    void on_learningButton_clicked();

    void on_backToSolverButton_clicked();

    void on_openTutorialButton_clicked();

    void on_backToSolverButton_2_clicked();

    void on_backToLearningOverviewButton_clicked();

private:
    Ui::MainWindow *ui;
    TruthTable *truthTableData;
    KVDiagram *kvDiagram;

    void addShadows();
    void addComboBox(int index);
    void resizeTruthTable();
    void resizeKVDiagram();
    void updateValueKVDiagram();
    QGraphicsDropShadowEffect* createShadow();

};
#endif // MAINWINDOW_H
