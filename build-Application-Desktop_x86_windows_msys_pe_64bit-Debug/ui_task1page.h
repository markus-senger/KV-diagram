/********************************************************************************
** Form generated from reading UI file 'task1page.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK1PAGE_H
#define UI_TASK1PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "editablekvdiagram3var.h"
#include "equationinputfield.h"

QT_BEGIN_NAMESPACE

class Ui_Task1Page
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *task1StackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_18;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_15;
    QFrame *gridFrame_2;
    QVBoxLayout *verticalLayout_16;
    QSpacerItem *verticalSpacer_13;
    QHBoxLayout *horizontalLayout_14;
    QTextBrowser *textBrowser_3;
    QSpacerItem *verticalSpacer_22;
    QHBoxLayout *horizontalLayout_19;
    QSpacerItem *horizontalSpacer_27;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_26;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout_22;
    EquationInputField *widget;
    QFrame *horizontalFrame_4;
    QHBoxLayout *horizontalLayout_20;
    QPushButton *solutionButtonTask1_1;
    QSpacerItem *horizontalSpacer_28;
    QSpacerItem *verticalSpacer_19;
    QHBoxLayout *horizontalLayout_21;
    QLabel *solutionLabelTask1_1;
    QSpacerItem *verticalSpacer_21;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_22;
    QPushButton *continueButtonTask1Page1;
    QSpacerItem *horizontalSpacer_25;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_21;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_19;
    QFrame *gridFrame_3;
    QVBoxLayout *verticalLayout_20;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBrowser_4;
    QSpacerItem *verticalSpacer_17;
    QLabel *label_7;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout_17;
    QSpacerItem *verticalSpacer_18;
    QHBoxLayout *horizontalLayout_18;
    QSpacerItem *horizontalSpacer_23;
    QPushButton *backButtonTask1Page2;
    QPushButton *continueButtonTask1Page2;
    QSpacerItem *horizontalSpacer_24;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_4;
    QVBoxLayout *verticalLayout_23;
    QFrame *gridFrame_4;
    QVBoxLayout *verticalLayout_24;
    QHBoxLayout *horizontalLayout_3;
    QTextBrowser *textBrowser_5;
    QSpacerItem *verticalSpacer_20;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_3;
    EditableKVDiagram3Var *editableKVDiagram1;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *checkKVDiagram;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *resultKVDiagram1Label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_22;
    QSpacerItem *verticalSpacer_23;
    QHBoxLayout *horizontalLayout_23;
    QSpacerItem *horizontalSpacer_29;
    QPushButton *backButtonTask1Page3;
    QPushButton *continueButtonTask1Page3;
    QSpacerItem *horizontalSpacer_30;

    void setupUi(QWidget *Task1Page)
    {
        if (Task1Page->objectName().isEmpty())
            Task1Page->setObjectName(QString::fromUtf8("Task1Page"));
        Task1Page->resize(874, 492);
        verticalLayout = new QVBoxLayout(Task1Page);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        task1StackedWidget = new QStackedWidget(Task1Page);
        task1StackedWidget->setObjectName(QString::fromUtf8("task1StackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(task1StackedWidget->sizePolicy().hasHeightForWidth());
        task1StackedWidget->setSizePolicy(sizePolicy);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_18 = new QVBoxLayout(page);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        scrollArea_2 = new QScrollArea(page);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollArea_2->sizePolicy().hasHeightForWidth());
        scrollArea_2->setSizePolicy(sizePolicy1);
        scrollArea_2->setMinimumSize(QSize(0, 0));
        scrollArea_2->setStyleSheet(QString::fromUtf8("background-color:white;"));
        scrollArea_2->setWidgetResizable(true);
        scrollArea_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 836, 454));
        verticalLayout_15 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        gridFrame_2 = new QFrame(scrollAreaWidgetContents_2);
        gridFrame_2->setObjectName(QString::fromUtf8("gridFrame_2"));
        gridFrame_2->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_16 = new QVBoxLayout(gridFrame_2);
        verticalLayout_16->setSpacing(5);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_16->addItem(verticalSpacer_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setSizeConstraint(QLayout::SetNoConstraint);
        textBrowser_3 = new QTextBrowser(gridFrame_2);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textBrowser_3->sizePolicy().hasHeightForWidth());
        textBrowser_3->setSizePolicy(sizePolicy2);
        textBrowser_3->setMinimumSize(QSize(616, 46));
        textBrowser_3->setMaximumSize(QSize(16777215, 46));
        QFont font;
        font.setPointSize(13);
        textBrowser_3->setFont(font);
        textBrowser_3->setStyleSheet(QString::fromUtf8("color:black; alignment:center;"));
        textBrowser_3->setFrameShape(QFrame::NoFrame);
        textBrowser_3->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        textBrowser_3->setLineWrapMode(QTextEdit::WidgetWidth);

        horizontalLayout_14->addWidget(textBrowser_3);


        verticalLayout_16->addLayout(horizontalLayout_14);

        verticalSpacer_22 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_16->addItem(verticalSpacer_22);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalSpacer_27 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_27);

        label_9 = new QLabel(gridFrame_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(340, 262));
        label_9->setStyleSheet(QString::fromUtf8("image: url(:/images/task1_truthtable1.png)"));
        label_9->setScaledContents(false);

        horizontalLayout_19->addWidget(label_9);

        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_26);

        verticalFrame = new QFrame(gridFrame_2);
        verticalFrame->setObjectName(QString::fromUtf8("verticalFrame"));
        verticalFrame->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_22 = new QVBoxLayout(verticalFrame);
        verticalLayout_22->setSpacing(6);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        widget = new EquationInputField(verticalFrame);
        widget->setObjectName(QString::fromUtf8("widget"));

        verticalLayout_22->addWidget(widget);

        horizontalFrame_4 = new QFrame(verticalFrame);
        horizontalFrame_4->setObjectName(QString::fromUtf8("horizontalFrame_4"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(horizontalFrame_4->sizePolicy().hasHeightForWidth());
        horizontalFrame_4->setSizePolicy(sizePolicy3);
        horizontalLayout_20 = new QHBoxLayout(horizontalFrame_4);
        horizontalLayout_20->setSpacing(1);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        solutionButtonTask1_1 = new QPushButton(horizontalFrame_4);
        solutionButtonTask1_1->setObjectName(QString::fromUtf8("solutionButtonTask1_1"));
        sizePolicy2.setHeightForWidth(solutionButtonTask1_1->sizePolicy().hasHeightForWidth());
        solutionButtonTask1_1->setSizePolicy(sizePolicy2);
        solutionButtonTask1_1->setMinimumSize(QSize(20, 5));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(10);
        font1.setBold(false);
        solutionButtonTask1_1->setFont(font1);
        solutionButtonTask1_1->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	width: 150px;\n"
"	height: 30px;\n"
"   	border-image: url(:/images/buttons/button.png)\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/images/buttons/button_hover.png)\n"
"}"));

        horizontalLayout_20->addWidget(solutionButtonTask1_1);


        verticalLayout_22->addWidget(horizontalFrame_4);


        horizontalLayout_19->addWidget(verticalFrame);

        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_28);


        verticalLayout_16->addLayout(horizontalLayout_19);

        verticalSpacer_19 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_16->addItem(verticalSpacer_19);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        solutionLabelTask1_1 = new QLabel(gridFrame_2);
        solutionLabelTask1_1->setObjectName(QString::fromUtf8("solutionLabelTask1_1"));
        sizePolicy2.setHeightForWidth(solutionLabelTask1_1->sizePolicy().hasHeightForWidth());
        solutionLabelTask1_1->setSizePolicy(sizePolicy2);
        solutionLabelTask1_1->setMinimumSize(QSize(440, 30));
        solutionLabelTask1_1->setBaseSize(QSize(0, 0));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(13);
        font2.setBold(true);
        solutionLabelTask1_1->setFont(font2);
        solutionLabelTask1_1->setStyleSheet(QString::fromUtf8("color: black;"));

        horizontalLayout_21->addWidget(solutionLabelTask1_1);


        verticalLayout_16->addLayout(horizontalLayout_21);

        verticalSpacer_21 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_16->addItem(verticalSpacer_21);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalSpacer_22 = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_22);

        continueButtonTask1Page1 = new QPushButton(gridFrame_2);
        continueButtonTask1Page1->setObjectName(QString::fromUtf8("continueButtonTask1Page1"));
        continueButtonTask1Page1->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	width: 40px;\n"
"	height: 30px;\n"
"   	border-image: url(:/images/buttons/continue_button.png)\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/images/buttons/continue_button_hover.png)\n"
"}"));

        horizontalLayout_15->addWidget(continueButtonTask1Page1);

        horizontalSpacer_25 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_25);


        verticalLayout_16->addLayout(horizontalLayout_15);


        verticalLayout_15->addWidget(gridFrame_2);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_18->addWidget(scrollArea_2);

        task1StackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_21 = new QVBoxLayout(page_2);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        scrollArea_3 = new QScrollArea(page_2);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(scrollArea_3->sizePolicy().hasHeightForWidth());
        scrollArea_3->setSizePolicy(sizePolicy4);
        scrollArea_3->setMinimumSize(QSize(0, 0));
        scrollArea_3->setStyleSheet(QString::fromUtf8("background-color:white;"));
        scrollArea_3->setWidgetResizable(true);
        scrollArea_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 836, 454));
        verticalLayout_19 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        gridFrame_3 = new QFrame(scrollAreaWidgetContents_3);
        gridFrame_3->setObjectName(QString::fromUtf8("gridFrame_3"));
        gridFrame_3->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_20 = new QVBoxLayout(gridFrame_3);
        verticalLayout_20->setSpacing(5);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textBrowser_4 = new QTextBrowser(gridFrame_3);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        sizePolicy2.setHeightForWidth(textBrowser_4->sizePolicy().hasHeightForWidth());
        textBrowser_4->setSizePolicy(sizePolicy2);
        textBrowser_4->setMinimumSize(QSize(580, 47));
        textBrowser_4->setMaximumSize(QSize(16777215, 16777215));
        textBrowser_4->setStyleSheet(QString::fromUtf8("color:black;"));
        textBrowser_4->setFrameShape(QFrame::NoFrame);
        textBrowser_4->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        textBrowser_4->setLineWrapMode(QTextEdit::WidgetWidth);

        horizontalLayout->addWidget(textBrowser_4);


        verticalLayout_20->addLayout(horizontalLayout);

        verticalSpacer_17 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_20->addItem(verticalSpacer_17);

        label_7 = new QLabel(gridFrame_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy3.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy3);
        label_7->setMinimumSize(QSize(100, 226));
        label_7->setMaximumSize(QSize(16777215, 16777215));
        label_7->setStyleSheet(QString::fromUtf8("image: url(:/images/task1_circuit1.png)"));

        verticalLayout_20->addWidget(label_7);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_20->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        textBrowser = new QTextBrowser(gridFrame_3);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        sizePolicy2.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy2);
        textBrowser->setMinimumSize(QSize(580, 65));
        textBrowser->setStyleSheet(QString::fromUtf8("color:black;"));
        textBrowser->setFrameShape(QFrame::NoFrame);

        horizontalLayout_2->addWidget(textBrowser);


        verticalLayout_20->addLayout(horizontalLayout_2);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_17->setSizeConstraint(QLayout::SetNoConstraint);

        verticalLayout_20->addLayout(horizontalLayout_17);

        verticalSpacer_18 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_20->addItem(verticalSpacer_18);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalSpacer_23 = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_23);

        backButtonTask1Page2 = new QPushButton(gridFrame_3);
        backButtonTask1Page2->setObjectName(QString::fromUtf8("backButtonTask1Page2"));
        backButtonTask1Page2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	width: 40px;\n"
"	height: 30px;\n"
"   	border-image: url(:/images/buttons/back_button.png)\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/images/buttons/back_button_hover.png)\n"
"}"));

        horizontalLayout_18->addWidget(backButtonTask1Page2);

        continueButtonTask1Page2 = new QPushButton(gridFrame_3);
        continueButtonTask1Page2->setObjectName(QString::fromUtf8("continueButtonTask1Page2"));
        continueButtonTask1Page2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	width: 40px;\n"
"	height: 30px;\n"
"   	border-image: url(:/images/buttons/continue_button.png)\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/images/buttons/continue_button_hover.png)\n"
"}"));

        horizontalLayout_18->addWidget(continueButtonTask1Page2);

        horizontalSpacer_24 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_24);


        verticalLayout_20->addLayout(horizontalLayout_18);


        verticalLayout_19->addWidget(gridFrame_3);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_21->addWidget(scrollArea_3);

        task1StackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        verticalLayout_2 = new QVBoxLayout(page_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        scrollArea_4 = new QScrollArea(page_3);
        scrollArea_4->setObjectName(QString::fromUtf8("scrollArea_4"));
        sizePolicy4.setHeightForWidth(scrollArea_4->sizePolicy().hasHeightForWidth());
        scrollArea_4->setSizePolicy(sizePolicy4);
        scrollArea_4->setMinimumSize(QSize(0, 0));
        scrollArea_4->setStyleSheet(QString::fromUtf8("background-color:white;"));
        scrollArea_4->setWidgetResizable(true);
        scrollArea_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 836, 454));
        verticalLayout_23 = new QVBoxLayout(scrollAreaWidgetContents_4);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        gridFrame_4 = new QFrame(scrollAreaWidgetContents_4);
        gridFrame_4->setObjectName(QString::fromUtf8("gridFrame_4"));
        gridFrame_4->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_24 = new QVBoxLayout(gridFrame_4);
        verticalLayout_24->setSpacing(5);
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        verticalLayout_24->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        textBrowser_5 = new QTextBrowser(gridFrame_4);
        textBrowser_5->setObjectName(QString::fromUtf8("textBrowser_5"));
        sizePolicy2.setHeightForWidth(textBrowser_5->sizePolicy().hasHeightForWidth());
        textBrowser_5->setSizePolicy(sizePolicy2);
        textBrowser_5->setMinimumSize(QSize(580, 65));
        textBrowser_5->setMaximumSize(QSize(16777215, 16777215));
        textBrowser_5->setStyleSheet(QString::fromUtf8("color:black;"));
        textBrowser_5->setFrameShape(QFrame::NoFrame);
        textBrowser_5->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        textBrowser_5->setLineWrapMode(QTextEdit::WidgetWidth);

        horizontalLayout_3->addWidget(textBrowser_5);


        verticalLayout_24->addLayout(horizontalLayout_3);

        verticalSpacer_20 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_24->addItem(verticalSpacer_20);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        label_8 = new QLabel(gridFrame_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setMinimumSize(QSize(340, 262));
        label_8->setMaximumSize(QSize(16777215, 16777215));
        label_8->setStyleSheet(QString::fromUtf8("image: url(:/images/task1_truthtable1.png)"));

        horizontalLayout_4->addWidget(label_8);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        editableKVDiagram1 = new EditableKVDiagram3Var(gridFrame_4);
        editableKVDiagram1->setObjectName(QString::fromUtf8("editableKVDiagram1"));

        verticalLayout_3->addWidget(editableKVDiagram1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        checkKVDiagram = new QPushButton(gridFrame_4);
        checkKVDiagram->setObjectName(QString::fromUtf8("checkKVDiagram"));
        sizePolicy2.setHeightForWidth(checkKVDiagram->sizePolicy().hasHeightForWidth());
        checkKVDiagram->setSizePolicy(sizePolicy2);
        checkKVDiagram->setFont(font1);
        checkKVDiagram->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	width: 150px;\n"
"	height: 30px;\n"
"   	border-image: url(:/images/buttons/button.png)\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/images/buttons/button_hover.png)\n"
"}"));

        horizontalLayout_5->addWidget(checkKVDiagram);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        resultKVDiagram1Label = new QLabel(gridFrame_4);
        resultKVDiagram1Label->setObjectName(QString::fromUtf8("resultKVDiagram1Label"));
        sizePolicy2.setHeightForWidth(resultKVDiagram1Label->sizePolicy().hasHeightForWidth());
        resultKVDiagram1Label->setSizePolicy(sizePolicy2);
        resultKVDiagram1Label->setMinimumSize(QSize(200, 30));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(11);
        font3.setBold(true);
        resultKVDiagram1Label->setFont(font3);
        resultKVDiagram1Label->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(resultKVDiagram1Label);


        verticalLayout_3->addLayout(horizontalLayout_6);


        horizontalLayout_4->addLayout(verticalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_24->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_24->addItem(verticalSpacer_2);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        horizontalLayout_22->setSizeConstraint(QLayout::SetNoConstraint);

        verticalLayout_24->addLayout(horizontalLayout_22);

        verticalSpacer_23 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_24->addItem(verticalSpacer_23);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        horizontalSpacer_29 = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_29);

        backButtonTask1Page3 = new QPushButton(gridFrame_4);
        backButtonTask1Page3->setObjectName(QString::fromUtf8("backButtonTask1Page3"));
        backButtonTask1Page3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	width: 40px;\n"
"	height: 30px;\n"
"   	border-image: url(:/images/buttons/back_button.png)\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/images/buttons/back_button_hover.png)\n"
"}"));

        horizontalLayout_23->addWidget(backButtonTask1Page3);

        continueButtonTask1Page3 = new QPushButton(gridFrame_4);
        continueButtonTask1Page3->setObjectName(QString::fromUtf8("continueButtonTask1Page3"));
        continueButtonTask1Page3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	width: 40px;\n"
"	height: 30px;\n"
"   	border-image: url(:/images/buttons/continue_button.png)\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/images/buttons/continue_button_hover.png)\n"
"}"));

        horizontalLayout_23->addWidget(continueButtonTask1Page3);

        horizontalSpacer_30 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_30);


        verticalLayout_24->addLayout(horizontalLayout_23);


        verticalLayout_23->addWidget(gridFrame_4);

        scrollArea_4->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_2->addWidget(scrollArea_4);

        task1StackedWidget->addWidget(page_3);

        verticalLayout->addWidget(task1StackedWidget);


        retranslateUi(Task1Page);

        task1StackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Task1Page);
    } // setupUi

    void retranslateUi(QWidget *Task1Page)
    {
        Task1Page->setWindowTitle(QCoreApplication::translate("Task1Page", "Form", nullptr));
        textBrowser_3->setHtml(QCoreApplication::translate("Task1Page", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">Sie sehen unten eine Wahrheitstabelle, bilden Sie daraus die Funktionsgleichung in DNF. Eine Optimierung mittels KV-Diagramm ist hier noch nicht erforderlich.</span></p></body></html>", nullptr));
        label_9->setText(QString());
        solutionButtonTask1_1->setText(QCoreApplication::translate("Task1Page", "L\303\266sung anzeigen", nullptr));
        solutionLabelTask1_1->setText(QString());
        continueButtonTask1Page1->setText(QString());
        textBrowser_4->setHtml(QCoreApplication::translate("Task1Page", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">Die auf der vorherigen Seite erstellte Funktionsgleichung w\303\274rde die folgende Schaltung liefern:</span></p></body></html>", nullptr));
        label_7->setText(QString());
        textBrowser->setHtml(QCoreApplication::translate("Task1Page", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">Diese Schaltung ist ziemlich gro\303\237 f\303\274r ihren Funktionsumfang. W\303\274rde man solche Schaltungen nicht noch weiter vereinfachen, w\303\274rde man niemals in der Lage </span><a name=\"decorator-corrected-entity-id-4\"></a><span style=\" font-size:11pt;\">s</span><span style=\" font-size:11pt;\">ein, elektrische Ger\303\244te so </span><a name=\"decorator-corrected-entity-id-7\"></a><span style=\" font-size:11pt;\">k</span><span style=\" font-size:11pt;\">lein, wie wir sie heute </span><a name=\""
                        "decorator-corrected-entity-id-9\"></a><span style=\" font-size:11pt;\">k</span><span style=\" font-size:11pt;\">ennen, produzieren zu k\303\266nnen.</span></p></body></html>", nullptr));
        backButtonTask1Page2->setText(QString());
        continueButtonTask1Page2->setText(QString());
        textBrowser_5->setHtml(QCoreApplication::translate("Task1Page", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">Um diese Schaltung nun zu vereinfachen, bietet sich hier, dass KV-Diagramm an. Tragen Sie zun\303\244chst die Werte aus der Wahrheitstabelle richtig in das nebenstehende KV-Diagramm ein.</span></p></body></html>", nullptr));
        label_8->setText(QString());
        checkKVDiagram->setText(QCoreApplication::translate("Task1Page", "L\303\266sung \303\274berpr\303\274fen", nullptr));
        resultKVDiagram1Label->setText(QString());
        backButtonTask1Page3->setText(QString());
        continueButtonTask1Page3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Task1Page: public Ui_Task1Page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK1PAGE_H
