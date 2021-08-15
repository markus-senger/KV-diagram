#ifndef EDITABLEKVDIAGRAM3VAR_H
#define EDITABLEKVDIAGRAM3VAR_H

#include <QWidget>
#include <kvdiagramsimplifier.h>
#include <QPushButton>

namespace Ui {
class EditableKVDiagram3Var;
}

class EditableKVDiagram3Var : public QWidget
{
    Q_OBJECT

public:
    explicit EditableKVDiagram3Var(QWidget *parent = nullptr);
    ~EditableKVDiagram3Var();

    bool checkData(std::map<std::pair<int, int>, int>& data);
    void reset();

private slots:
    void valueChanged(int row, int col, QPushButton* button);

private:
    Ui::EditableKVDiagram3Var *ui;
    KVDiagramSimplifier *kvDiagram;
    std::map<std::pair<int, int>, int> mdata;

    void addButton(int row, int col);
};

#endif // EDITABLEKVDIAGRAM3VAR_H
