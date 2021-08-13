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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditableKVDiagram3Var
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *EditableKVDiagram3Var)
    {
        if (EditableKVDiagram3Var->objectName().isEmpty())
            EditableKVDiagram3Var->setObjectName(QString::fromUtf8("EditableKVDiagram3Var"));
        EditableKVDiagram3Var->resize(400, 300);
        pushButton = new QPushButton(EditableKVDiagram3Var);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 120, 80, 22));

        retranslateUi(EditableKVDiagram3Var);

        QMetaObject::connectSlotsByName(EditableKVDiagram3Var);
    } // setupUi

    void retranslateUi(QWidget *EditableKVDiagram3Var)
    {
        EditableKVDiagram3Var->setWindowTitle(QCoreApplication::translate("EditableKVDiagram3Var", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("EditableKVDiagram3Var", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditableKVDiagram3Var: public Ui_EditableKVDiagram3Var {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITABLEKVDIAGRAM3VAR_H
