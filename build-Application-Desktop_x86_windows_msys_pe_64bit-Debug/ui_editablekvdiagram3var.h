/********************************************************************************
** Form generated from reading UI file 'editablekvdiagram3var.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITABLEKVDIAGRAM3VAR_H
#define UI_EDITABLEKVDIAGRAM3VAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditableKVDiagram3Var
{
public:
    QHBoxLayout *horizontalLayout;
    QTableView *kvDiagram;

    void setupUi(QWidget *EditableKVDiagram3Var)
    {
        if (EditableKVDiagram3Var->objectName().isEmpty())
            EditableKVDiagram3Var->setObjectName(QString::fromUtf8("EditableKVDiagram3Var"));
        EditableKVDiagram3Var->resize(402, 261);
        horizontalLayout = new QHBoxLayout(EditableKVDiagram3Var);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        kvDiagram = new QTableView(EditableKVDiagram3Var);
        kvDiagram->setObjectName(QString::fromUtf8("kvDiagram"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(kvDiagram->sizePolicy().hasHeightForWidth());
        kvDiagram->setSizePolicy(sizePolicy);
        kvDiagram->setMinimumSize(QSize(0, 0));
        kvDiagram->setMaximumSize(QSize(300, 122));
        kvDiagram->setBaseSize(QSize(300, 122));
        kvDiagram->setStyleSheet(QString::fromUtf8("QTableView {\n"
"	background-color: white;\n"
"}"));
        kvDiagram->setEditTriggers(QAbstractItemView::NoEditTriggers);
        kvDiagram->setSelectionMode(QAbstractItemView::NoSelection);
        kvDiagram->horizontalHeader()->setVisible(false);
        kvDiagram->verticalHeader()->setVisible(false);
        kvDiagram->verticalHeader()->setDefaultSectionSize(40);

        horizontalLayout->addWidget(kvDiagram);


        retranslateUi(EditableKVDiagram3Var);

        QMetaObject::connectSlotsByName(EditableKVDiagram3Var);
    } // setupUi

    void retranslateUi(QWidget *EditableKVDiagram3Var)
    {
        EditableKVDiagram3Var->setWindowTitle(QCoreApplication::translate("EditableKVDiagram3Var", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditableKVDiagram3Var: public Ui_EditableKVDiagram3Var {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITABLEKVDIAGRAM3VAR_H
