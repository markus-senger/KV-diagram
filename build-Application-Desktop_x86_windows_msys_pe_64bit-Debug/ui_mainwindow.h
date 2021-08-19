/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "booleanfunctionsimplifier.h"
#include "task1page.h"
#include "tutorialpage.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *header;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacerLeft;
    QVBoxLayout *applicationNameLayout;
    QSpacerItem *verticalSpacerTop;
    QLabel *applicationNameShort;
    QLabel *applicationName;
    QSpacerItem *verticalSpacerBottom;
    QSpacerItem *horizontalSpacerMiddle;
    QLabel *fh_logo;
    QSpacerItem *horizontalSpacerRight;
    QStackedWidget *mainStackedWidget;
    QWidget *solver;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *solverLayout;
    QSpacerItem *horizontalSpacer_2;
    QFrame *solverFrame;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *learningButton;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_5;
    BooleanFunctionSimplifier *widgetSimplifier;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QWidget *learningOverview;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_14;
    QFrame *learningOverviewFrame;
    QVBoxLayout *verticalLayout_8;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *backToSolverButton;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_10;
    QGridLayout *gridLayout;
    QPushButton *openTask1Button;
    QPushButton *openTutorialButton;
    QPushButton *openTask2Button;
    QPushButton *openTask4Button;
    QPushButton *openTask3Button;
    QPushButton *openTask5Button;
    QPushButton *openTask6Button;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer_15;
    QWidget *tutorial;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_17;
    QFrame *tutorialFrame;
    QHBoxLayout *horizontalLayout_10;
    QFrame *horizontalFrame_5;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_11;
    QPushButton *backToSolverButton_2;
    QSpacerItem *verticalSpacer_9;
    QPushButton *backToLearningOverviewButton;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *horizontalSpacer_18;
    TutorialPage *widgetTutorial;
    QSpacerItem *horizontalSpacer_16;
    QWidget *task1;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_19;
    QFrame *task1Frame;
    QHBoxLayout *horizontalLayout_16;
    QFrame *horizontalFrame_6;
    QVBoxLayout *verticalLayout_17;
    QLabel *label_8;
    QSpacerItem *verticalSpacer_14;
    QPushButton *backToSolverButton_3;
    QSpacerItem *verticalSpacer_15;
    QPushButton *backToLearningOverviewButton_2;
    QSpacerItem *verticalSpacer_16;
    QSpacerItem *horizontalSpacer_21;
    Task1Page *widgetTask1;
    QSpacerItem *horizontalSpacer_20;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1054, 630);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(950, 530));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/fhooe_logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setIconSize(QSize(24, 15));
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        header = new QFrame(centralwidget);
        header->setObjectName(QString::fromUtf8("header"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(header->sizePolicy().hasHeightForWidth());
        header->setSizePolicy(sizePolicy1);
        header->setMinimumSize(QSize(0, 100));
        header->setBaseSize(QSize(0, 20));
        header->setStyleSheet(QString::fromUtf8("background-color: #A40018;"));
        header->setFrameShape(QFrame::StyledPanel);
        header->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(header);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacerLeft = new QSpacerItem(39, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacerLeft);

        applicationNameLayout = new QVBoxLayout();
        applicationNameLayout->setSpacing(0);
        applicationNameLayout->setObjectName(QString::fromUtf8("applicationNameLayout"));
        applicationNameLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalSpacerTop = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Maximum);

        applicationNameLayout->addItem(verticalSpacerTop);

        applicationNameShort = new QLabel(header);
        applicationNameShort->setObjectName(QString::fromUtf8("applicationNameShort"));
        sizePolicy1.setHeightForWidth(applicationNameShort->sizePolicy().hasHeightForWidth());
        applicationNameShort->setSizePolicy(sizePolicy1);
        applicationNameShort->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        applicationNameShort->setFont(font);
        applicationNameShort->setStyleSheet(QString::fromUtf8("color: white;"));

        applicationNameLayout->addWidget(applicationNameShort);

        applicationName = new QLabel(header);
        applicationName->setObjectName(QString::fromUtf8("applicationName"));
        sizePolicy1.setHeightForWidth(applicationName->sizePolicy().hasHeightForWidth());
        applicationName->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(11);
        applicationName->setFont(font1);
        applicationName->setStyleSheet(QString::fromUtf8("color: white;"));

        applicationNameLayout->addWidget(applicationName);

        verticalSpacerBottom = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Maximum);

        applicationNameLayout->addItem(verticalSpacerBottom);


        horizontalLayout->addLayout(applicationNameLayout);

        horizontalSpacerMiddle = new QSpacerItem(200, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacerMiddle);

        fh_logo = new QLabel(header);
        fh_logo->setObjectName(QString::fromUtf8("fh_logo"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(fh_logo->sizePolicy().hasHeightForWidth());
        fh_logo->setSizePolicy(sizePolicy2);
        fh_logo->setMaximumSize(QSize(100, 61));
        fh_logo->setBaseSize(QSize(0, 0));
        fh_logo->setPixmap(QPixmap(QString::fromUtf8(":/images/fhooe_logo.png")));
        fh_logo->setScaledContents(true);
        fh_logo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(fh_logo);

        horizontalSpacerRight = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacerRight);


        verticalLayout->addWidget(header);

        mainStackedWidget = new QStackedWidget(centralwidget);
        mainStackedWidget->setObjectName(QString::fromUtf8("mainStackedWidget"));
        solver = new QWidget();
        solver->setObjectName(QString::fromUtf8("solver"));
        verticalLayout_2 = new QVBoxLayout(solver);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        solverLayout = new QHBoxLayout();
        solverLayout->setSpacing(6);
        solverLayout->setObjectName(QString::fromUtf8("solverLayout"));
        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        solverLayout->addItem(horizontalSpacer_2);

        solverFrame = new QFrame(solver);
        solverFrame->setObjectName(QString::fromUtf8("solverFrame"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(solverFrame->sizePolicy().hasHeightForWidth());
        solverFrame->setSizePolicy(sizePolicy3);
        solverFrame->setMinimumSize(QSize(500, 0));
        solverFrame->setMaximumSize(QSize(100000, 16777215));
        solverFrame->setStyleSheet(QString::fromUtf8("background-color: #e6e6e6;"));
        solverFrame->setFrameShape(QFrame::StyledPanel);
        solverFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(solverFrame);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        learningButton = new QPushButton(solverFrame);
        learningButton->setObjectName(QString::fromUtf8("learningButton"));
        sizePolicy.setHeightForWidth(learningButton->sizePolicy().hasHeightForWidth());
        learningButton->setSizePolicy(sizePolicy);
        learningButton->setMinimumSize(QSize(0, 0));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(13);
        font2.setBold(true);
        learningButton->setFont(font2);
        learningButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	width: 205px;\n"
"	height: 50px;\n"
"   	border-image: url(:/images/buttons/button.png)\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/images/buttons/button_hover.png)\n"
"}"));

        horizontalLayout_2->addWidget(learningButton);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer_5 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_3->addItem(verticalSpacer_5);

        widgetSimplifier = new BooleanFunctionSimplifier(solverFrame);
        widgetSimplifier->setObjectName(QString::fromUtf8("widgetSimplifier"));

        verticalLayout_3->addWidget(widgetSimplifier);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        solverLayout->addWidget(solverFrame);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        solverLayout->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(solverLayout);

        mainStackedWidget->addWidget(solver);
        learningOverview = new QWidget();
        learningOverview->setObjectName(QString::fromUtf8("learningOverview"));
        verticalLayout_4 = new QVBoxLayout(learningOverview);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_14 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_14);

        learningOverviewFrame = new QFrame(learningOverview);
        learningOverviewFrame->setObjectName(QString::fromUtf8("learningOverviewFrame"));
        sizePolicy3.setHeightForWidth(learningOverviewFrame->sizePolicy().hasHeightForWidth());
        learningOverviewFrame->setSizePolicy(sizePolicy3);
        learningOverviewFrame->setMinimumSize(QSize(500, 0));
        learningOverviewFrame->setStyleSheet(QString::fromUtf8("background-color: #e6e6e6;"));
        learningOverviewFrame->setFrameShape(QFrame::StyledPanel);
        learningOverviewFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_8 = new QVBoxLayout(learningOverviewFrame);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalSpacer_8 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_8->addItem(verticalSpacer_8);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_9);

        backToSolverButton = new QPushButton(learningOverviewFrame);
        backToSolverButton->setObjectName(QString::fromUtf8("backToSolverButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(backToSolverButton->sizePolicy().hasHeightForWidth());
        backToSolverButton->setSizePolicy(sizePolicy4);
        backToSolverButton->setFont(font2);
        backToSolverButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	width: 205px;\n"
"	height: 50px;\n"
"   	border-image: url(:/images/buttons/button.png)\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/images/buttons/button_hover.png)\n"
"}"));

        horizontalLayout_8->addWidget(backToSolverButton);

        horizontalSpacer_8 = new QSpacerItem(40, 50, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);


        verticalLayout_8->addLayout(horizontalLayout_8);

        verticalSpacer_6 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_8->addItem(verticalSpacer_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(100);
        gridLayout->setVerticalSpacing(70);
        gridLayout->setContentsMargins(0, -1, -1, -1);
        openTask1Button = new QPushButton(learningOverviewFrame);
        openTask1Button->setObjectName(QString::fromUtf8("openTask1Button"));
        openTask1Button->setFont(font2);
        openTask1Button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	width: 205px;\n"
"	height: 50px;\n"
"   	border-image: url(:/images/buttons/button.png)\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/images/buttons/button_hover.png)\n"
"}"));

        gridLayout->addWidget(openTask1Button, 1, 0, 1, 1);

        openTutorialButton = new QPushButton(learningOverviewFrame);
        openTutorialButton->setObjectName(QString::fromUtf8("openTutorialButton"));
        openTutorialButton->setFont(font2);
        openTutorialButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	width: 205px;\n"
"	height: 50px;\n"
"   	border-image: url(:/images/buttons/button.png)\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/images/buttons/button_hover.png)\n"
"}"));

        gridLayout->addWidget(openTutorialButton, 0, 1, 1, 1);

        openTask2Button = new QPushButton(learningOverviewFrame);
        openTask2Button->setObjectName(QString::fromUtf8("openTask2Button"));
        openTask2Button->setFont(font2);
        openTask2Button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	width: 205px;\n"
"	height: 50px;\n"
"   	border-image: url(:/images/buttons/button_hover.png)\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/images/buttons/button_hover.png)\n"
"}"));

        gridLayout->addWidget(openTask2Button, 1, 1, 1, 1);

        openTask4Button = new QPushButton(learningOverviewFrame);
        openTask4Button->setObjectName(QString::fromUtf8("openTask4Button"));
        openTask4Button->setFont(font2);
        openTask4Button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	width: 205px;\n"
"	height: 50px;\n"
"   	border-image: url(:/images/buttons/button_hover.png)\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/images/buttons/button_hover.png)\n"
"}"));

        gridLayout->addWidget(openTask4Button, 2, 0, 1, 1);

        openTask3Button = new QPushButton(learningOverviewFrame);
        openTask3Button->setObjectName(QString::fromUtf8("openTask3Button"));
        openTask3Button->setFont(font2);
        openTask3Button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	width: 205px;\n"
"	height: 50px;\n"
"   	border-image: url(:/images/buttons/button_hover.png)\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/images/buttons/button_hover.png)\n"
"}"));

        gridLayout->addWidget(openTask3Button, 1, 2, 1, 1);

        openTask5Button = new QPushButton(learningOverviewFrame);
        openTask5Button->setObjectName(QString::fromUtf8("openTask5Button"));
        openTask5Button->setFont(font2);
        openTask5Button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	width: 205px;\n"
"	height: 50px;\n"
"   	border-image: url(:/images/buttons/button_hover.png)\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/images/buttons/button_hover.png)\n"
"}"));

        gridLayout->addWidget(openTask5Button, 2, 1, 1, 1);

        openTask6Button = new QPushButton(learningOverviewFrame);
        openTask6Button->setObjectName(QString::fromUtf8("openTask6Button"));
        openTask6Button->setFont(font2);
        openTask6Button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	width: 205px;\n"
"	height: 50px;\n"
"   	border-image: url(:/images/buttons/button_hover.png)\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/images/buttons/button_hover.png)\n"
"}"));

        gridLayout->addWidget(openTask6Button, 2, 2, 1, 1);


        horizontalLayout_4->addLayout(gridLayout);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_11);


        verticalLayout_8->addLayout(horizontalLayout_4);

        verticalSpacer_7 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_7);


        horizontalLayout_9->addWidget(learningOverviewFrame);

        horizontalSpacer_15 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_15);


        verticalLayout_4->addLayout(horizontalLayout_9);

        mainStackedWidget->addWidget(learningOverview);
        tutorial = new QWidget();
        tutorial->setObjectName(QString::fromUtf8("tutorial"));
        verticalLayout_7 = new QVBoxLayout(tutorial);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_17 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_17);

        tutorialFrame = new QFrame(tutorial);
        tutorialFrame->setObjectName(QString::fromUtf8("tutorialFrame"));
        sizePolicy3.setHeightForWidth(tutorialFrame->sizePolicy().hasHeightForWidth());
        tutorialFrame->setSizePolicy(sizePolicy3);
        tutorialFrame->setMinimumSize(QSize(500, 0));
        tutorialFrame->setStyleSheet(QString::fromUtf8("background-color: #e6e6e6;"));
        tutorialFrame->setFrameShape(QFrame::StyledPanel);
        tutorialFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_10 = new QHBoxLayout(tutorialFrame);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalFrame_5 = new QFrame(tutorialFrame);
        horizontalFrame_5->setObjectName(QString::fromUtf8("horizontalFrame_5"));
        horizontalFrame_5->setStyleSheet(QString::fromUtf8("background: #c2c2c2;\n"
"border: 1px solid black;"));
        verticalLayout_10 = new QVBoxLayout(horizontalFrame_5);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_3 = new QLabel(horizontalFrame_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(16);
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("color: #a40018;\n"
"background-color: white ;\n"
"border-bottom: 3px solid black;\n"
"padding-bottom: 10px;\n"
"padding-top: 10px;"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_3);

        verticalSpacer_11 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_10->addItem(verticalSpacer_11);

        backToSolverButton_2 = new QPushButton(horizontalFrame_5);
        backToSolverButton_2->setObjectName(QString::fromUtf8("backToSolverButton_2"));
        sizePolicy4.setHeightForWidth(backToSolverButton_2->sizePolicy().hasHeightForWidth());
        backToSolverButton_2->setSizePolicy(sizePolicy4);
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        font4.setPointSize(10);
        font4.setBold(true);
        backToSolverButton_2->setFont(font4);
        backToSolverButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	width: 155px;\n"
"	height: 40px;\n"
"   	border-image: url(:/images/buttons/button.png)\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/images/buttons/button_hover.png)\n"
"}"));

        verticalLayout_10->addWidget(backToSolverButton_2);

        verticalSpacer_9 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_10->addItem(verticalSpacer_9);

        backToLearningOverviewButton = new QPushButton(horizontalFrame_5);
        backToLearningOverviewButton->setObjectName(QString::fromUtf8("backToLearningOverviewButton"));
        sizePolicy4.setHeightForWidth(backToLearningOverviewButton->sizePolicy().hasHeightForWidth());
        backToLearningOverviewButton->setSizePolicy(sizePolicy4);
        backToLearningOverviewButton->setFont(font4);
        backToLearningOverviewButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	width: 155px;\n"
"	height: 40px;\n"
"   	border-image: url(:/images/buttons/button.png)\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/images/buttons/button_hover.png)\n"
"}"));

        verticalLayout_10->addWidget(backToLearningOverviewButton);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_10);

        horizontalSpacer_18 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        verticalLayout_10->addItem(horizontalSpacer_18);


        horizontalLayout_10->addWidget(horizontalFrame_5);

        widgetTutorial = new TutorialPage(tutorialFrame);
        widgetTutorial->setObjectName(QString::fromUtf8("widgetTutorial"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(widgetTutorial->sizePolicy().hasHeightForWidth());
        widgetTutorial->setSizePolicy(sizePolicy5);

        horizontalLayout_10->addWidget(widgetTutorial);


        horizontalLayout_3->addWidget(tutorialFrame);

        horizontalSpacer_16 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_16);


        verticalLayout_7->addLayout(horizontalLayout_3);

        mainStackedWidget->addWidget(tutorial);
        task1 = new QWidget();
        task1->setObjectName(QString::fromUtf8("task1"));
        verticalLayout_13 = new QVBoxLayout(task1);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer_19 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_19);

        task1Frame = new QFrame(task1);
        task1Frame->setObjectName(QString::fromUtf8("task1Frame"));
        sizePolicy3.setHeightForWidth(task1Frame->sizePolicy().hasHeightForWidth());
        task1Frame->setSizePolicy(sizePolicy3);
        task1Frame->setMinimumSize(QSize(500, 0));
        task1Frame->setStyleSheet(QString::fromUtf8("background-color: #e6e6e6;"));
        task1Frame->setFrameShape(QFrame::StyledPanel);
        task1Frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_16 = new QHBoxLayout(task1Frame);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalFrame_6 = new QFrame(task1Frame);
        horizontalFrame_6->setObjectName(QString::fromUtf8("horizontalFrame_6"));
        sizePolicy.setHeightForWidth(horizontalFrame_6->sizePolicy().hasHeightForWidth());
        horizontalFrame_6->setSizePolicy(sizePolicy);
        horizontalFrame_6->setStyleSheet(QString::fromUtf8("background: #c2c2c2;\n"
"border: 1px solid black;"));
        verticalLayout_17 = new QVBoxLayout(horizontalFrame_6);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        label_8 = new QLabel(horizontalFrame_6);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font3);
        label_8->setStyleSheet(QString::fromUtf8("color: #a40018;\n"
"background-color: white ;\n"
"border-bottom: 3px solid black;\n"
"padding-bottom: 10px;\n"
"padding-top: 10px;"));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_17->addWidget(label_8);

        verticalSpacer_14 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_17->addItem(verticalSpacer_14);

        backToSolverButton_3 = new QPushButton(horizontalFrame_6);
        backToSolverButton_3->setObjectName(QString::fromUtf8("backToSolverButton_3"));
        sizePolicy4.setHeightForWidth(backToSolverButton_3->sizePolicy().hasHeightForWidth());
        backToSolverButton_3->setSizePolicy(sizePolicy4);
        backToSolverButton_3->setFont(font4);
        backToSolverButton_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	width: 155px;\n"
"	height: 40px;\n"
"   	border-image: url(:/images/buttons/button.png)\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/images/buttons/button_hover.png)\n"
"}"));

        verticalLayout_17->addWidget(backToSolverButton_3);

        verticalSpacer_15 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_17->addItem(verticalSpacer_15);

        backToLearningOverviewButton_2 = new QPushButton(horizontalFrame_6);
        backToLearningOverviewButton_2->setObjectName(QString::fromUtf8("backToLearningOverviewButton_2"));
        sizePolicy4.setHeightForWidth(backToLearningOverviewButton_2->sizePolicy().hasHeightForWidth());
        backToLearningOverviewButton_2->setSizePolicy(sizePolicy4);
        backToLearningOverviewButton_2->setFont(font4);
        backToLearningOverviewButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: white;\n"
"	width: 155px;\n"
"	height: 40px;\n"
"   	border-image: url(:/images/buttons/button.png)\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	border-image: url(:/images/buttons/button_hover.png)\n"
"}"));

        verticalLayout_17->addWidget(backToLearningOverviewButton_2);

        verticalSpacer_16 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_17->addItem(verticalSpacer_16);

        horizontalSpacer_21 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        verticalLayout_17->addItem(horizontalSpacer_21);


        horizontalLayout_16->addWidget(horizontalFrame_6);

        widgetTask1 = new Task1Page(task1Frame);
        widgetTask1->setObjectName(QString::fromUtf8("widgetTask1"));

        horizontalLayout_16->addWidget(widgetTask1);


        horizontalLayout_11->addWidget(task1Frame);

        horizontalSpacer_20 = new QSpacerItem(10, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_20);


        verticalLayout_13->addLayout(horizontalLayout_11);

        mainStackedWidget->addWidget(task1);

        verticalLayout->addWidget(mainStackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        mainStackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "SBF", nullptr));
        applicationNameShort->setText(QCoreApplication::translate("MainWindow", "SBF", nullptr));
        applicationName->setText(QCoreApplication::translate("MainWindow", "Simplifier of Boolean Functions", nullptr));
#if QT_CONFIG(whatsthis)
        fh_logo->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/images/fhooe_logo.png\"/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        fh_logo->setText(QString());
        learningButton->setText(QCoreApplication::translate("MainWindow", "zur Lernapp", nullptr));
        backToSolverButton->setText(QCoreApplication::translate("MainWindow", "Lernapp verlassen", nullptr));
        openTask1Button->setText(QCoreApplication::translate("MainWindow", "\303\234bung 1", nullptr));
        openTutorialButton->setText(QCoreApplication::translate("MainWindow", "Tutorial", nullptr));
        openTask2Button->setText(QCoreApplication::translate("MainWindow", "\303\234bung 2", nullptr));
        openTask4Button->setText(QCoreApplication::translate("MainWindow", "\303\234bung 4", nullptr));
        openTask3Button->setText(QCoreApplication::translate("MainWindow", "\303\234bung 3", nullptr));
        openTask5Button->setText(QCoreApplication::translate("MainWindow", "\303\234bung 5", nullptr));
        openTask6Button->setText(QCoreApplication::translate("MainWindow", "\303\234bung 6", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Tutorial", nullptr));
        backToSolverButton_2->setText(QCoreApplication::translate("MainWindow", "Lernapp verlassen", nullptr));
        backToLearningOverviewButton->setText(QCoreApplication::translate("MainWindow", "zur\303\274ck zur \303\234bersicht", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\303\234bung 1", nullptr));
        backToSolverButton_3->setText(QCoreApplication::translate("MainWindow", "Lernapp verlassen", nullptr));
        backToLearningOverviewButton_2->setText(QCoreApplication::translate("MainWindow", "zur\303\274ck zur \303\234bersicht", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
