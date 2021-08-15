#ifndef TASK1PAGE_H
#define TASK1PAGE_H

#include <QWidget>

namespace Ui {
class Task1Page;
}

class Task1Page : public QWidget
{
    Q_OBJECT

public:
    explicit Task1Page(QWidget *parent = nullptr);
    ~Task1Page();

    void reset();

private slots:
    void on_continueButtonTask1Page1_clicked();

    void on_backButtonTask1Page2_clicked();

    void on_solutionButtonTask1_1_clicked();

    void on_continueButtonTask1Page2_clicked();

    void on_backButtonTask1Page3_clicked();

    void on_checkKVDiagram_clicked();

    void on_continueButtonTask1Page3_clicked();

    void on_backButtonTask1Page4_clicked();

    void on_solutionButtonTask1_4_clicked();

private:
    Ui::Task1Page *ui;
};

#endif // TASK1PAGE_H
