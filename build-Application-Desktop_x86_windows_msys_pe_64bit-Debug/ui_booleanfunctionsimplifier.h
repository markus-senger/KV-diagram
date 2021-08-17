/********************************************************************************
** Form generated from reading UI file 'booleanfunctionsimplifier.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOLEANFUNCTIONSIMPLIFIER_H
#define UI_BOOLEANFUNCTIONSIMPLIFIER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BooleanFunctionSimplifier
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QFrame *truthTableFrame;
    QHBoxLayout *horizontalLayout_5;
    QTableView *truthTable;
    QFrame *frame;
    QVBoxLayout *verticalLayout_5;
    QPushButton *addColButton;
    QPushButton *removeColButton;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_5;
    QTableView *kvDiagram;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_13;
    QVBoxLayout *verticalLayout_6;
    QLabel *label;
    QLabel *resultLabel;
    QSpacerItem *horizontalSpacer_12;

    void setupUi(QWidget *BooleanFunctionSimplifier)
    {
        if (BooleanFunctionSimplifier->objectName().isEmpty())
            BooleanFunctionSimplifier->setObjectName(QString::fromUtf8("BooleanFunctionSimplifier"));
        BooleanFunctionSimplifier->resize(426, 300);
        verticalLayout = new QVBoxLayout(BooleanFunctionSimplifier);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer = new QSpacerItem(50, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        truthTableFrame = new QFrame(BooleanFunctionSimplifier);
        truthTableFrame->setObjectName(QString::fromUtf8("truthTableFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(truthTableFrame->sizePolicy().hasHeightForWidth());
        truthTableFrame->setSizePolicy(sizePolicy);
        truthTableFrame->setMaximumSize(QSize(520, 294));
        truthTableFrame->setFrameShape(QFrame::StyledPanel);
        truthTableFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(truthTableFrame);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        truthTable = new QTableView(truthTableFrame);
        truthTable->setObjectName(QString::fromUtf8("truthTable"));
        sizePolicy.setHeightForWidth(truthTable->sizePolicy().hasHeightForWidth());
        truthTable->setSizePolicy(sizePolicy);
        truthTable->setMinimumSize(QSize(0, 150));
        truthTable->setMaximumSize(QSize(10000, 10000));
        truthTable->setSizeIncrement(QSize(0, 0));
        truthTable->setBaseSize(QSize(0, 400));
        QFont font;
        font.setBold(false);
        truthTable->setFont(font);
        truthTable->setStyleSheet(QString::fromUtf8("QHeaderView::section {\n"
" 	background-color: #A40018 ;\n"
"	color: white;\n"
"}\n"
"\n"
"QTableCornerButton::section { \n"
"	background-color: #A40018;\n"
"}\n"
"\n"
"QTableView {\n"
"	selection-background-color: #A40018;\n"
"	selection-color: white;\n"
"	background-color: white;\n"
"}"));
        truthTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        truthTable->setSelectionMode(QAbstractItemView::NoSelection);
        truthTable->verticalHeader()->setDefaultSectionSize(31);

        horizontalLayout_5->addWidget(truthTable);

        frame = new QFrame(truthTableFrame);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setMinimumSize(QSize(30, 0));
        frame->setMaximumSize(QSize(50, 1000));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, -1, 0, -1);
        addColButton = new QPushButton(frame);
        addColButton->setObjectName(QString::fromUtf8("addColButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(addColButton->sizePolicy().hasHeightForWidth());
        addColButton->setSizePolicy(sizePolicy2);
        addColButton->setMaximumSize(QSize(40, 16777215));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        addColButton->setFont(font1);
        addColButton->setLayoutDirection(Qt::LeftToRight);
        addColButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	width: 50px;\n"
"	height: 40px;\n"
"   	border-image: url(:/images/buttons/add_button.png)\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/images/buttons/add_button_hover.png)\n"
"}"));

        verticalLayout_5->addWidget(addColButton);

        removeColButton = new QPushButton(frame);
        removeColButton->setObjectName(QString::fromUtf8("removeColButton"));
        sizePolicy2.setHeightForWidth(removeColButton->sizePolicy().hasHeightForWidth());
        removeColButton->setSizePolicy(sizePolicy2);
        removeColButton->setMinimumSize(QSize(0, 0));
        removeColButton->setMaximumSize(QSize(40, 16777215));
        removeColButton->setFont(font1);
        removeColButton->setLayoutDirection(Qt::LeftToRight);
        removeColButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	width: 50px;\n"
"	height: 40px;\n"
"   	border-image: url(:/images/buttons/remove_button.png)\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/images/buttons/remove_button_hover.png)\n"
"}"));

        verticalLayout_5->addWidget(removeColButton);

        verticalSpacer = new QSpacerItem(20, 1000, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


        horizontalLayout_5->addWidget(frame);


        horizontalLayout_6->addWidget(truthTableFrame);

        horizontalSpacer_5 = new QSpacerItem(50, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        kvDiagram = new QTableView(BooleanFunctionSimplifier);
        kvDiagram->setObjectName(QString::fromUtf8("kvDiagram"));
        sizePolicy2.setHeightForWidth(kvDiagram->sizePolicy().hasHeightForWidth());
        kvDiagram->setSizePolicy(sizePolicy2);
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

        horizontalLayout_6->addWidget(kvDiagram);

        horizontalSpacer_4 = new QSpacerItem(50, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer_4 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_13);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label = new QLabel(BooleanFunctionSimplifier);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: #a40018 ;\n"
"margin-right: 30px;"));
        label->setAlignment(Qt::AlignCenter);
        label->setMargin(6);

        verticalLayout_6->addWidget(label);

        resultLabel = new QLabel(BooleanFunctionSimplifier);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(13);
        font3.setBold(true);
        resultLabel->setFont(font3);
        resultLabel->setStyleSheet(QString::fromUtf8("border: 2px solid black;\n"
"color: black;"));
        resultLabel->setAlignment(Qt::AlignCenter);
        resultLabel->setMargin(3);

        verticalLayout_6->addWidget(resultLabel);


        horizontalLayout_7->addLayout(verticalLayout_6);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_12);


        verticalLayout->addLayout(horizontalLayout_7);


        retranslateUi(BooleanFunctionSimplifier);

        QMetaObject::connectSlotsByName(BooleanFunctionSimplifier);
    } // setupUi

    void retranslateUi(QWidget *BooleanFunctionSimplifier)
    {
        BooleanFunctionSimplifier->setWindowTitle(QCoreApplication::translate("BooleanFunctionSimplifier", "Form", nullptr));
        addColButton->setText(QString());
        removeColButton->setText(QString());
        label->setText(QCoreApplication::translate("BooleanFunctionSimplifier", "minimale Funktion", nullptr));
        resultLabel->setText(QCoreApplication::translate("BooleanFunctionSimplifier", "( )", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BooleanFunctionSimplifier: public Ui_BooleanFunctionSimplifier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOLEANFUNCTIONSIMPLIFIER_H
