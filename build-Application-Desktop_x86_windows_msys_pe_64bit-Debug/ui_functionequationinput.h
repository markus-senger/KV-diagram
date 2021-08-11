/********************************************************************************
** Form generated from reading UI file 'functionequationinput.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCTIONEQUATIONINPUT_H
#define UI_FUNCTIONEQUATIONINPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_functionEquationInput
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QPushButton *notB;
    QPushButton *AND;
    QPushButton *OR;
    QPushButton *A;
    QPushButton *notA;
    QPushButton *notC;
    QPushButton *C;
    QPushButton *rightBracket;
    QPushButton *leftBracket;
    QPushButton *B;
    QPushButton *deleteButton;

    void setupUi(QWidget *functionEquationInput)
    {
        if (functionEquationInput->objectName().isEmpty())
            functionEquationInput->setObjectName(QString::fromUtf8("functionEquationInput"));
        functionEquationInput->resize(400, 300);
        verticalLayout = new QVBoxLayout(functionEquationInput);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(functionEquationInput);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 20));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: black;"));

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(functionEquationInput);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 30));
        lineEdit->setStyleSheet(QString::fromUtf8("color: black;\n"
"border: 2px solid black;"));

        verticalLayout->addWidget(lineEdit);

        verticalSpacer = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(12);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        notB = new QPushButton(functionEquationInput);
        notB->setObjectName(QString::fromUtf8("notB"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(notB->sizePolicy().hasHeightForWidth());
        notB->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(11);
        font1.setBold(true);
        notB->setFont(font1);
        notB->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	width: 40px;\n"
"	height: 35px;\n"
"   	border-image: url(:/images/buttons/input_help_button.png)\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/images/buttons/input_help_button_hover.png)\n"
"}"));

        gridLayout->addWidget(notB, 2, 1, 1, 1);

        AND = new QPushButton(functionEquationInput);
        AND->setObjectName(QString::fromUtf8("AND"));
        sizePolicy1.setHeightForWidth(AND->sizePolicy().hasHeightForWidth());
        AND->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(10);
        font2.setBold(true);
        AND->setFont(font2);
        AND->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	width: 40px;\n"
"	height: 35px;\n"
"   	border-image: url(:/images/buttons/input_help_button.png)\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/images/buttons/input_help_button_hover.png)\n"
"}"));

        gridLayout->addWidget(AND, 1, 3, 1, 1);

        OR = new QPushButton(functionEquationInput);
        OR->setObjectName(QString::fromUtf8("OR"));
        sizePolicy1.setHeightForWidth(OR->sizePolicy().hasHeightForWidth());
        OR->setSizePolicy(sizePolicy1);
        OR->setFont(font2);
        OR->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	width: 40px;\n"
"	height: 35px;\n"
"   	border-image: url(:/images/buttons/input_help_button.png)\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/images/buttons/input_help_button_hover.png)\n"
"}"));

        gridLayout->addWidget(OR, 2, 3, 1, 1);

        A = new QPushButton(functionEquationInput);
        A->setObjectName(QString::fromUtf8("A"));
        sizePolicy1.setHeightForWidth(A->sizePolicy().hasHeightForWidth());
        A->setSizePolicy(sizePolicy1);
        A->setFont(font1);
        A->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	width: 40px;\n"
"	height: 35px;\n"
"   	border-image: url(:/images/buttons/input_help_button.png)\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/images/buttons/input_help_button_hover.png)\n"
"}"));

        gridLayout->addWidget(A, 1, 0, 1, 1);

        notA = new QPushButton(functionEquationInput);
        notA->setObjectName(QString::fromUtf8("notA"));
        sizePolicy1.setHeightForWidth(notA->sizePolicy().hasHeightForWidth());
        notA->setSizePolicy(sizePolicy1);
        notA->setFont(font1);
        notA->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	width: 40px;\n"
"	height: 35px;\n"
"   	border-image: url(:/images/buttons/input_help_button.png)\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/images/buttons/input_help_button_hover.png)\n"
"}"));

        gridLayout->addWidget(notA, 2, 0, 1, 1);

        notC = new QPushButton(functionEquationInput);
        notC->setObjectName(QString::fromUtf8("notC"));
        sizePolicy1.setHeightForWidth(notC->sizePolicy().hasHeightForWidth());
        notC->setSizePolicy(sizePolicy1);
        notC->setFont(font1);
        notC->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	width: 40px;\n"
"	height: 35px;\n"
"   	border-image: url(:/images/buttons/input_help_button.png)\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/images/buttons/input_help_button_hover.png)\n"
"}"));

        gridLayout->addWidget(notC, 2, 2, 1, 1);

        C = new QPushButton(functionEquationInput);
        C->setObjectName(QString::fromUtf8("C"));
        sizePolicy1.setHeightForWidth(C->sizePolicy().hasHeightForWidth());
        C->setSizePolicy(sizePolicy1);
        C->setFont(font1);
        C->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	width: 40px;\n"
"	height: 35px;\n"
"   	border-image: url(:/images/buttons/input_help_button.png)\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/images/buttons/input_help_button_hover.png)\n"
"}"));

        gridLayout->addWidget(C, 1, 2, 1, 1);

        rightBracket = new QPushButton(functionEquationInput);
        rightBracket->setObjectName(QString::fromUtf8("rightBracket"));
        sizePolicy1.setHeightForWidth(rightBracket->sizePolicy().hasHeightForWidth());
        rightBracket->setSizePolicy(sizePolicy1);
        rightBracket->setFont(font1);
        rightBracket->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	width: 40px;\n"
"	height: 35px;\n"
"   	border-image: url(:/images/buttons/input_help_button.png)\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/images/buttons/input_help_button_hover.png)\n"
"}"));

        gridLayout->addWidget(rightBracket, 2, 4, 1, 1);

        leftBracket = new QPushButton(functionEquationInput);
        leftBracket->setObjectName(QString::fromUtf8("leftBracket"));
        sizePolicy1.setHeightForWidth(leftBracket->sizePolicy().hasHeightForWidth());
        leftBracket->setSizePolicy(sizePolicy1);
        leftBracket->setFont(font1);
        leftBracket->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	width: 40px;\n"
"	height: 35px;\n"
"   	border-image: url(:/images/buttons/input_help_button.png)\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/images/buttons/input_help_button_hover.png)\n"
"}"));

        gridLayout->addWidget(leftBracket, 1, 4, 1, 1);

        B = new QPushButton(functionEquationInput);
        B->setObjectName(QString::fromUtf8("B"));
        sizePolicy1.setHeightForWidth(B->sizePolicy().hasHeightForWidth());
        B->setSizePolicy(sizePolicy1);
        B->setFont(font1);
        B->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	width: 40px;\n"
"	height: 35px;\n"
"   	border-image: url(:/images/buttons/input_help_button.png)\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/images/buttons/input_help_button_hover.png)\n"
"}"));

        gridLayout->addWidget(B, 1, 1, 1, 1);

        deleteButton = new QPushButton(functionEquationInput);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setFont(font1);
        deleteButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	width: 40px;\n"
"	height: 35px;\n"
"   	border-image: url(:/images/buttons/input_help_button.png)\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/images/buttons/input_help_button_hover.png)\n"
"}"));

        gridLayout->addWidget(deleteButton, 0, 4, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(functionEquationInput);

        QMetaObject::connectSlotsByName(functionEquationInput);
    } // setupUi

    void retranslateUi(QWidget *functionEquationInput)
    {
        functionEquationInput->setWindowTitle(QCoreApplication::translate("functionEquationInput", "Form", nullptr));
        label->setText(QCoreApplication::translate("functionEquationInput", "Geben Sie die Funktionsgleichung an (in DNF):", nullptr));
        lineEdit->setText(QString());
        notB->setText(QCoreApplication::translate("functionEquationInput", "\302\254B", nullptr));
        AND->setText(QCoreApplication::translate("functionEquationInput", "\342\210\247", nullptr));
        OR->setText(QCoreApplication::translate("functionEquationInput", "\342\210\250", nullptr));
        A->setText(QCoreApplication::translate("functionEquationInput", "A", nullptr));
        notA->setText(QCoreApplication::translate("functionEquationInput", "\302\254A", nullptr));
        notC->setText(QCoreApplication::translate("functionEquationInput", "\302\254C", nullptr));
        C->setText(QCoreApplication::translate("functionEquationInput", "C", nullptr));
        rightBracket->setText(QCoreApplication::translate("functionEquationInput", ")", nullptr));
        leftBracket->setText(QCoreApplication::translate("functionEquationInput", "(", nullptr));
        B->setText(QCoreApplication::translate("functionEquationInput", "B", nullptr));
        deleteButton->setText(QCoreApplication::translate("functionEquationInput", "\360\237\240\224", nullptr));
    } // retranslateUi

};

namespace Ui {
    class functionEquationInput: public Ui_functionEquationInput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCTIONEQUATIONINPUT_H
