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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

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
    QStackedWidget *stackedWidget;
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
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_12;
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
    QPushButton *learningOverviewBackButton;
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
    QWidget *page;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1066, 630);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1000, 630));
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

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        solver = new QWidget();
        solver->setObjectName(QString::fromUtf8("solver"));
        verticalLayout_2 = new QVBoxLayout(solver);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        solverLayout = new QHBoxLayout();
        solverLayout->setSpacing(6);
        solverLayout->setObjectName(QString::fromUtf8("solverLayout"));
        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        solverLayout->addItem(horizontalSpacer_2);

        solverFrame = new QFrame(solver);
        solverFrame->setObjectName(QString::fromUtf8("solverFrame"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(solverFrame->sizePolicy().hasHeightForWidth());
        solverFrame->setSizePolicy(sizePolicy3);
        solverFrame->setMinimumSize(QSize(1000, 0));
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

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer = new QSpacerItem(50, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        truthTableFrame = new QFrame(solverFrame);
        truthTableFrame->setObjectName(QString::fromUtf8("truthTableFrame"));
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
        QFont font3;
        font3.setBold(false);
        truthTable->setFont(font3);
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
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy4);
        frame->setMinimumSize(QSize(30, 0));
        frame->setMaximumSize(QSize(50, 1000));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, -1, 0, -1);
        addColButton = new QPushButton(frame);
        addColButton->setObjectName(QString::fromUtf8("addColButton"));
        sizePolicy2.setHeightForWidth(addColButton->sizePolicy().hasHeightForWidth());
        addColButton->setSizePolicy(sizePolicy2);
        addColButton->setMaximumSize(QSize(40, 16777215));
        QFont font4;
        font4.setPointSize(11);
        font4.setBold(true);
        addColButton->setFont(font4);
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
        removeColButton->setFont(font4);
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

        kvDiagram = new QTableView(solverFrame);
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

        horizontalLayout_6->addWidget(kvDiagram);

        horizontalSpacer_4 = new QSpacerItem(50, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_6);

        verticalSpacer_4 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_13);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label = new QLabel(solverFrame);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy5);
        QFont font5;
        font5.setPointSize(9);
        font5.setBold(true);
        label->setFont(font5);
        label->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: #a40018 ;\n"
"margin-right: 30px;"));
        label->setAlignment(Qt::AlignCenter);
        label->setMargin(6);

        verticalLayout_6->addWidget(label);

        label_2 = new QLabel(solverFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font6;
        font6.setPointSize(10);
        font6.setBold(false);
        label_2->setFont(font6);
        label_2->setStyleSheet(QString::fromUtf8("border: 2px solid black;\n"
"color: black;"));
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setMargin(3);

        verticalLayout_6->addWidget(label_2);


        horizontalLayout_7->addLayout(verticalLayout_6);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_12);


        verticalLayout_3->addLayout(horizontalLayout_7);

        verticalSpacer_2 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        solverLayout->addWidget(solverFrame);

        horizontalSpacer_3 = new QSpacerItem(100, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        solverLayout->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(solverLayout);

        stackedWidget->addWidget(solver);
        learningOverview = new QWidget();
        learningOverview->setObjectName(QString::fromUtf8("learningOverview"));
        verticalLayout_4 = new QVBoxLayout(learningOverview);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_14 = new QSpacerItem(100, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_14);

        learningOverviewFrame = new QFrame(learningOverview);
        learningOverviewFrame->setObjectName(QString::fromUtf8("learningOverviewFrame"));
        sizePolicy3.setHeightForWidth(learningOverviewFrame->sizePolicy().hasHeightForWidth());
        learningOverviewFrame->setSizePolicy(sizePolicy3);
        learningOverviewFrame->setMinimumSize(QSize(1000, 0));
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

        learningOverviewBackButton = new QPushButton(learningOverviewFrame);
        learningOverviewBackButton->setObjectName(QString::fromUtf8("learningOverviewBackButton"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(learningOverviewBackButton->sizePolicy().hasHeightForWidth());
        learningOverviewBackButton->setSizePolicy(sizePolicy6);
        learningOverviewBackButton->setFont(font2);
        learningOverviewBackButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        horizontalLayout_8->addWidget(learningOverviewBackButton);

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
"   	border-image: url(:/images/buttons/button.png)\n"
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
"   	border-image: url(:/images/buttons/button.png)\n"
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
"   	border-image: url(:/images/buttons/button.png)\n"
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
"   	border-image: url(:/images/buttons/button.png)\n"
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
"   	border-image: url(:/images/buttons/button.png)\n"
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

        horizontalSpacer_15 = new QSpacerItem(100, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_15);


        verticalLayout_4->addLayout(horizontalLayout_9);

        stackedWidget->addWidget(learningOverview);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "SBF", nullptr));
        applicationNameShort->setText(QCoreApplication::translate("MainWindow", "SBF", nullptr));
        applicationName->setText(QCoreApplication::translate("MainWindow", "Simplifier of Boolean functions", nullptr));
#if QT_CONFIG(whatsthis)
        fh_logo->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/images/fhooe_logo.png\"/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        fh_logo->setText(QString());
        learningButton->setText(QCoreApplication::translate("MainWindow", "zur Lernapp", nullptr));
        addColButton->setText(QString());
        removeColButton->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "optimierte Funktion", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "A + B", nullptr));
        learningOverviewBackButton->setText(QCoreApplication::translate("MainWindow", "Lernapp verlassen", nullptr));
        openTask1Button->setText(QCoreApplication::translate("MainWindow", "\303\234bung 1", nullptr));
        openTutorialButton->setText(QCoreApplication::translate("MainWindow", "Tutorial", nullptr));
        openTask2Button->setText(QCoreApplication::translate("MainWindow", "\303\234bung 2", nullptr));
        openTask4Button->setText(QCoreApplication::translate("MainWindow", "\303\234bung 4", nullptr));
        openTask3Button->setText(QCoreApplication::translate("MainWindow", "\303\234bung 3", nullptr));
        openTask5Button->setText(QCoreApplication::translate("MainWindow", "\303\234bung 5", nullptr));
        openTask6Button->setText(QCoreApplication::translate("MainWindow", "\303\234bung 6", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
