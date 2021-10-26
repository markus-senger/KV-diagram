#include "editablekvdiagram3var.h"
#include "ui_editablekvdiagram3var.h"
#include "types.h"
#include <QSignalMapper>

EditableKVDiagram3Var::EditableKVDiagram3Var(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EditableKVDiagram3Var)
{
    ui->setupUi(this);

    kvDiagram = new KVDiagramSimplifier(this);

    ui->kvDiagram->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->kvDiagram->setModel(kvDiagram);
    ui->kvDiagram->setMaximumSize(KV_DIAGRAM_3VAR_WIDTH, KV_DIAGRAM_3VAR_HEIGHT);

    QPushButton* button = new QPushButton(this);
    button->setText("CLR");
    button->setStyleSheet("background-color: #ffcc80; color: black; font-weight: bold;");
    ui->kvDiagram->setIndexWidget(kvDiagram->index(0, 0), button);
    connect(button, &QPushButton::clicked, [this]{
        reset();
    });

    reset();
}

EditableKVDiagram3Var::~EditableKVDiagram3Var()
{
    delete ui;
}

bool EditableKVDiagram3Var::checkData(std::map<std::pair<int, int>, int>& data)
{
    for(auto& mentry : mdata) {
        if(mentry.second != data[mentry.first]) {
            ui->kvDiagram->indexWidget(kvDiagram->index(mentry.first.first, mentry.first.second))->setStyleSheet("font-weight: bold; background-color: #ff8c8c;");
        }
        else {
            ui->kvDiagram->indexWidget(kvDiagram->index(mentry.first.first, mentry.first.second))->setStyleSheet("font-weight: bold; background-color: #8cff96;");
        }
    }
    return mdata.size() == data.size() && std::equal(mdata.begin(), mdata.end(), data.begin());
}

void EditableKVDiagram3Var::reset()
{
    for(int row = 1; row < KV_DIAGRAM_3VAR_ROW_NUM-1; row++) {
        for(int col = 1; col < KV_DIAGRAM_3VAR_COL_NUM; col++) {
            mdata[std::pair(row, col)] = 0;
            addButton(row, col);
        }
    }
}

void EditableKVDiagram3Var::valueChanged(int row, int col, QPushButton* button)
{
    if(button->text() == "0") {
        mdata[std::pair(row, col)] = 1;
        button->setText("1");
    }
    else if(button->text() == "1") {
        mdata[std::pair(row, col)] = -1;
        button->setText("X");
    }
    else if(button->text() == "X") {
        mdata[std::pair(row, col)] = 0;
        button->setText("0");
    }
}

void EditableKVDiagram3Var::addButton(int row, int col)
{
    QPushButton* button = new QPushButton(this);
    button->setText("0");
    button->setStyleSheet("font-weight: bold;");
    ui->kvDiagram->setIndexWidget(kvDiagram->index(row, col), button);

    connect(button, &QPushButton::clicked, [this, row, col, button]{
        valueChanged(row, col, button);
    });
}


