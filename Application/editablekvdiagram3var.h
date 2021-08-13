#ifndef EDITABLEKVDIAGRAM3VAR_H
#define EDITABLEKVDIAGRAM3VAR_H

#include <QWidget>

namespace Ui {
class EditableKVDiagram3Var;
}

class EditableKVDiagram3Var : public QWidget
{
    Q_OBJECT

public:
    explicit EditableKVDiagram3Var(QWidget *parent = nullptr);
    ~EditableKVDiagram3Var();

private:
    Ui::EditableKVDiagram3Var *ui;
};

#endif // EDITABLEKVDIAGRAM3VAR_H
