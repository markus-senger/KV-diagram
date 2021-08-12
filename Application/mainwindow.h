#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsDropShadowEffect>

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
    void on_learningButton_clicked();

    void on_backToSolverButton_clicked();

    void on_openTutorialButton_clicked();

    void on_backToSolverButton_2_clicked();

    void on_backToLearningOverviewButton_clicked();

    void on_openTask1Button_clicked();

    void on_backToSolverButton_3_clicked();

    void on_backToLearningOverviewButton_2_clicked();

private:
    Ui::MainWindow *ui;

    void addShadows();
    QGraphicsDropShadowEffect* createShadow();

};
#endif // MAINWINDOW_H
