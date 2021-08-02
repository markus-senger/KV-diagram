#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "truthtable.h"

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

private:
    Ui::MainWindow *ui;
    TruthTable *truthTableData;
};
#endif // MAINWINDOW_H
