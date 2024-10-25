/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QScrollArea *scrollTasks;
    QWidget *scrollAreaWidgetContents_2;
    QWidget *sideBar;
    QVBoxLayout *btnSpacerLayout;
    QVBoxLayout *btnLayout;
    QPushButton *btnAdd;
    QPushButton *btnSounds;
    QPushButton *btnImprtnt;
    QPushButton *btnWatchAll;
    QSpacerItem *verticalSpacer;
    QPushButton *btnDelAll;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(700, 650);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        scrollTasks = new QScrollArea(centralwidget);
        scrollTasks->setObjectName("scrollTasks");
        scrollTasks->setFrameShape(QFrame::Shape::NoFrame);
        scrollTasks->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 448, 599));
        scrollTasks->setWidget(scrollAreaWidgetContents_2);

        gridLayout->addWidget(scrollTasks, 0, 1, 1, 1);

        sideBar = new QWidget(centralwidget);
        sideBar->setObjectName("sideBar");
        btnSpacerLayout = new QVBoxLayout(sideBar);
        btnSpacerLayout->setObjectName("btnSpacerLayout");
        btnLayout = new QVBoxLayout();
        btnLayout->setSpacing(3);
        btnLayout->setObjectName("btnLayout");
        btnLayout->setContentsMargins(5, 10, 5, 10);
        btnAdd = new QPushButton(sideBar);
        btnAdd->setObjectName("btnAdd");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnAdd->sizePolicy().hasHeightForWidth());
        btnAdd->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        btnAdd->setFont(font);
        btnAdd->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

        btnLayout->addWidget(btnAdd);

        btnSounds = new QPushButton(sideBar);
        btnSounds->setObjectName("btnSounds");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnSounds->sizePolicy().hasHeightForWidth());
        btnSounds->setSizePolicy(sizePolicy2);
        btnSounds->setFont(font);

        btnLayout->addWidget(btnSounds);

        btnImprtnt = new QPushButton(sideBar);
        btnImprtnt->setObjectName("btnImprtnt");
        sizePolicy2.setHeightForWidth(btnImprtnt->sizePolicy().hasHeightForWidth());
        btnImprtnt->setSizePolicy(sizePolicy2);
        btnImprtnt->setFont(font);

        btnLayout->addWidget(btnImprtnt);

        btnWatchAll = new QPushButton(sideBar);
        btnWatchAll->setObjectName("btnWatchAll");
        sizePolicy2.setHeightForWidth(btnWatchAll->sizePolicy().hasHeightForWidth());
        btnWatchAll->setSizePolicy(sizePolicy2);
        btnWatchAll->setFont(font);

        btnLayout->addWidget(btnWatchAll);


        btnSpacerLayout->addLayout(btnLayout);

        verticalSpacer = new QSpacerItem(20, 378, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        btnSpacerLayout->addItem(verticalSpacer);

        btnDelAll = new QPushButton(sideBar);
        btnDelAll->setObjectName("btnDelAll");
        sizePolicy2.setHeightForWidth(btnDelAll->sizePolicy().hasHeightForWidth());
        btnDelAll->setSizePolicy(sizePolicy2);
        btnDelAll->setFont(font);

        btnSpacerLayout->addWidget(btnDelAll);

        btnSpacerLayout->setStretch(0, 20);
        btnSpacerLayout->setStretch(1, 40);
        btnSpacerLayout->setStretch(2, 5);

        gridLayout->addWidget(sideBar, 0, 0, 1, 1);

        gridLayout->setColumnStretch(0, 2);
        gridLayout->setColumnStretch(1, 10);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 700, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "DFR Reminder", nullptr));
        btnAdd->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        btnSounds->setText(QCoreApplication::translate("MainWindow", "\320\227\320\262\321\203\320\272\320\270", nullptr));
        btnImprtnt->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\261\321\200\320\260\320\275\320\275\320\276\320\265", nullptr));
        btnWatchAll->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \320\267\320\260\320\264\320\260\321\207\320\270", nullptr));
        btnDelAll->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\201\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
