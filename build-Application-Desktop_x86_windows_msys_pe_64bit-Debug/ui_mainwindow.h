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
    QHBoxLayout *truthTableKVDiagramLayout;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QFrame *truthTableFrame;
    QHBoxLayout *horizontalLayout_5;
    QTableView *truthTable;
    QFrame *frame;
    QVBoxLayout *verticalLayout_5;
    QPushButton *addColButton;
    QPushButton *removeColButton;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QTableView *kvDiagram;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_3;
    QWidget *learning;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1066, 504);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1000, 0));
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
        truthTableKVDiagramLayout = new QHBoxLayout();
        truthTableKVDiagramLayout->setSpacing(6);
        truthTableKVDiagramLayout->setObjectName(QString::fromUtf8("truthTableKVDiagramLayout"));
        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        truthTableKVDiagramLayout->addItem(horizontalSpacer_2);

        frame_2 = new QFrame(solver);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setMinimumSize(QSize(1000, 0));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(50, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        truthTableFrame = new QFrame(frame_2);
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
"}"));
        truthTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        truthTable->setSelectionMode(QAbstractItemView::NoSelection);
        truthTable->verticalHeader()->setDefaultSectionSize(31);

        horizontalLayout_5->addWidget(truthTable);

        frame = new QFrame(truthTableFrame);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy3);
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
        addColButton->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_5->addWidget(addColButton);

        removeColButton = new QPushButton(frame);
        removeColButton->setObjectName(QString::fromUtf8("removeColButton"));
        sizePolicy2.setHeightForWidth(removeColButton->sizePolicy().hasHeightForWidth());
        removeColButton->setSizePolicy(sizePolicy2);
        removeColButton->setMinimumSize(QSize(0, 0));
        removeColButton->setMaximumSize(QSize(40, 16777215));
        removeColButton->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_5->addWidget(removeColButton);

        verticalSpacer = new QSpacerItem(20, 1000, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


        horizontalLayout_5->addWidget(frame);


        horizontalLayout_2->addWidget(truthTableFrame);

        horizontalSpacer = new QSpacerItem(50, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        kvDiagram = new QTableView(frame_2);
        kvDiagram->setObjectName(QString::fromUtf8("kvDiagram"));
        sizePolicy2.setHeightForWidth(kvDiagram->sizePolicy().hasHeightForWidth());
        kvDiagram->setSizePolicy(sizePolicy2);
        kvDiagram->setMaximumSize(QSize(300, 122));
        kvDiagram->setBaseSize(QSize(300, 122));
        kvDiagram->horizontalHeader()->setVisible(false);
        kvDiagram->verticalHeader()->setVisible(false);

        horizontalLayout_2->addWidget(kvDiagram);

        horizontalSpacer_5 = new QSpacerItem(50, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        truthTableKVDiagramLayout->addWidget(frame_2);

        horizontalSpacer_3 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        truthTableKVDiagramLayout->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(truthTableKVDiagramLayout);

        stackedWidget->addWidget(solver);
        learning = new QWidget();
        learning->setObjectName(QString::fromUtf8("learning"));
        stackedWidget->addWidget(learning);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

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
        addColButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        removeColButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
