#include "editablekvdiagram3var.h"
#include "ui_editablekvdiagram3var.h"

EditableKVDiagram3Var::EditableKVDiagram3Var(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EditableKVDiagram3Var)
{
    ui->setupUi(this);
}

EditableKVDiagram3Var::~EditableKVDiagram3Var()
{
    delete ui;
}
