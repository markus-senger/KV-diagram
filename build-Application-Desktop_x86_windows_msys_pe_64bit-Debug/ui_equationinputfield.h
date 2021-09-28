/********************************************************************************
** Form generated from reading UI file 'equationinputfield.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EQUATIONINPUTFIELD_H
#define UI_EQUATIONINPUTFIELD_H

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

class Ui_EquationInputField
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QPushButton *CButton;
    QPushButton *leftBracketButton;
    QPushButton *rightBracketButton;
    QPushButton *clearButton;
    QPushButton *notAButton;
    QPushButton *ANDButton;
    QPushButton *AButton;
    QPushButton *BButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *deleteButton;
    QPushButton *ORButton;
    QPushButton *notCButton;
    QPushButton *notBButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *EquationInputField)
    {
        if (EquationInputField->objectName().isEmpty())
            EquationInputField->setObjectName(QString::fromUtf8("EquationInputField"));
        EquationInputField->resize(380, 300);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EquationInputField->sizePolicy().hasHeightForWidth());
        EquationInputField->setSizePolicy(sizePolicy);
        EquationInputField->setMinimumSize(QSize(380, 0));
        verticalLayout = new QVBoxLayout(EquationInputField);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(EquationInputField);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(0, 20));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: black;"));

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(EquationInputField);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy2);
        lineEdit->setMinimumSize(QSize(0, 30));
        lineEdit->setStyleSheet(QString::fromUtf8("color: black;\n"
"border: 2px solid black;"));
        lineEdit->setReadOnly(true);
        lineEdit->setClearButtonEnabled(false);

        verticalLayout->addWidget(lineEdit);

        verticalSpacer = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(12);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        CButton = new QPushButton(EquationInputField);
        CButton->setObjectName(QString::fromUtf8("CButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(CButton->sizePolicy().hasHeightForWidth());
        CButton->setSizePolicy(sizePolicy3);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(11);
        font1.setBold(true);
        CButton->setFont(font1);
        CButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        gridLayout->addWidget(CButton, 1, 3, 1, 1);

        leftBracketButton = new QPushButton(EquationInputField);
        leftBracketButton->setObjectName(QString::fromUtf8("leftBracketButton"));
        sizePolicy3.setHeightForWidth(leftBracketButton->sizePolicy().hasHeightForWidth());
        leftBracketButton->setSizePolicy(sizePolicy3);
        leftBracketButton->setFont(font1);
        leftBracketButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        gridLayout->addWidget(leftBracketButton, 1, 5, 1, 1);

        rightBracketButton = new QPushButton(EquationInputField);
        rightBracketButton->setObjectName(QString::fromUtf8("rightBracketButton"));
        sizePolicy3.setHeightForWidth(rightBracketButton->sizePolicy().hasHeightForWidth());
        rightBracketButton->setSizePolicy(sizePolicy3);
        rightBracketButton->setFont(font1);
        rightBracketButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        gridLayout->addWidget(rightBracketButton, 2, 5, 1, 1);

        clearButton = new QPushButton(EquationInputField);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setFont(font1);
        clearButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        gridLayout->addWidget(clearButton, 0, 1, 1, 1);

        notAButton = new QPushButton(EquationInputField);
        notAButton->setObjectName(QString::fromUtf8("notAButton"));
        sizePolicy3.setHeightForWidth(notAButton->sizePolicy().hasHeightForWidth());
        notAButton->setSizePolicy(sizePolicy3);
        notAButton->setFont(font1);
        notAButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        gridLayout->addWidget(notAButton, 2, 1, 1, 1);

        ANDButton = new QPushButton(EquationInputField);
        ANDButton->setObjectName(QString::fromUtf8("ANDButton"));
        sizePolicy3.setHeightForWidth(ANDButton->sizePolicy().hasHeightForWidth());
        ANDButton->setSizePolicy(sizePolicy3);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(10);
        font2.setBold(true);
        ANDButton->setFont(font2);
        ANDButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        gridLayout->addWidget(ANDButton, 1, 4, 1, 1);

        AButton = new QPushButton(EquationInputField);
        AButton->setObjectName(QString::fromUtf8("AButton"));
        sizePolicy3.setHeightForWidth(AButton->sizePolicy().hasHeightForWidth());
        AButton->setSizePolicy(sizePolicy3);
        AButton->setFont(font1);
        AButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        gridLayout->addWidget(AButton, 1, 1, 1, 1);

        BButton = new QPushButton(EquationInputField);
        BButton->setObjectName(QString::fromUtf8("BButton"));
        sizePolicy3.setHeightForWidth(BButton->sizePolicy().hasHeightForWidth());
        BButton->setSizePolicy(sizePolicy3);
        BButton->setFont(font1);
        BButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        gridLayout->addWidget(BButton, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 6, 1, 1);

        deleteButton = new QPushButton(EquationInputField);
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

        gridLayout->addWidget(deleteButton, 0, 5, 1, 1);

        ORButton = new QPushButton(EquationInputField);
        ORButton->setObjectName(QString::fromUtf8("ORButton"));
        sizePolicy3.setHeightForWidth(ORButton->sizePolicy().hasHeightForWidth());
        ORButton->setSizePolicy(sizePolicy3);
        ORButton->setFont(font2);
        ORButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        gridLayout->addWidget(ORButton, 2, 4, 1, 1);

        notCButton = new QPushButton(EquationInputField);
        notCButton->setObjectName(QString::fromUtf8("notCButton"));
        sizePolicy3.setHeightForWidth(notCButton->sizePolicy().hasHeightForWidth());
        notCButton->setSizePolicy(sizePolicy3);
        notCButton->setFont(font1);
        notCButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        gridLayout->addWidget(notCButton, 2, 3, 1, 1);

        notBButton = new QPushButton(EquationInputField);
        notBButton->setObjectName(QString::fromUtf8("notBButton"));
        sizePolicy3.setHeightForWidth(notBButton->sizePolicy().hasHeightForWidth());
        notBButton->setSizePolicy(sizePolicy3);
        notBButton->setFont(font1);
        notBButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        gridLayout->addWidget(notBButton, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(EquationInputField);

        QMetaObject::connectSlotsByName(EquationInputField);
    } // setupUi

    void retranslateUi(QWidget *EquationInputField)
    {
        EquationInputField->setWindowTitle(QCoreApplication::translate("EquationInputField", "Form", nullptr));
        label->setText(QCoreApplication::translate("EquationInputField", "Geben Sie die Funktionsgleichung an (in KDNF):", nullptr));
        lineEdit->setText(QString());
        CButton->setText(QCoreApplication::translate("EquationInputField", "C", nullptr));
        leftBracketButton->setText(QCoreApplication::translate("EquationInputField", "(", nullptr));
        rightBracketButton->setText(QCoreApplication::translate("EquationInputField", ")", nullptr));
        clearButton->setText(QCoreApplication::translate("EquationInputField", "CLR", nullptr));
        notAButton->setText(QCoreApplication::translate("EquationInputField", "\302\254A", nullptr));
        ANDButton->setText(QCoreApplication::translate("EquationInputField", "\342\210\247", nullptr));
        AButton->setText(QCoreApplication::translate("EquationInputField", "A", nullptr));
        BButton->setText(QCoreApplication::translate("EquationInputField", "B", nullptr));
        deleteButton->setText(QCoreApplication::translate("EquationInputField", "\360\237\240\224", nullptr));
        ORButton->setText(QCoreApplication::translate("EquationInputField", "\342\210\250", nullptr));
        notCButton->setText(QCoreApplication::translate("EquationInputField", "\302\254C", nullptr));
        notBButton->setText(QCoreApplication::translate("EquationInputField", "\302\254B", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EquationInputField: public Ui_EquationInputField {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUATIONINPUTFIELD_H
