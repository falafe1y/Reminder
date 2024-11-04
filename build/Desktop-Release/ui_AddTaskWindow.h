/********************************************************************************
** Form generated from reading UI file 'AddTaskWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTASKWINDOW_H
#define UI_ADDTASKWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_AddTaskWindow
{
public:
    QGridLayout *gridLayout;
    QLineEdit *taskText;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnSave;
    QPushButton *btnCancel;
    QDateEdit *taskDate;
    QTimeEdit *taskTime;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *AddTaskWindow)
    {
        if (AddTaskWindow->objectName().isEmpty())
            AddTaskWindow->setObjectName("AddTaskWindow");
        AddTaskWindow->resize(747, 486);
        gridLayout = new QGridLayout(AddTaskWindow);
        gridLayout->setObjectName("gridLayout");
        taskText = new QLineEdit(AddTaskWindow);
        taskText->setObjectName("taskText");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(taskText->sizePolicy().hasHeightForWidth());
        taskText->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(18);
        taskText->setFont(font);
        taskText->setMaxLength(16);
        taskText->setFrame(false);
        taskText->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(taskText, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btnSave = new QPushButton(AddTaskWindow);
        btnSave->setObjectName("btnSave");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnSave->sizePolicy().hasHeightForWidth());
        btnSave->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(btnSave);

        btnCancel = new QPushButton(AddTaskWindow);
        btnCancel->setObjectName("btnCancel");
        sizePolicy1.setHeightForWidth(btnCancel->sizePolicy().hasHeightForWidth());
        btnCancel->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(btnCancel);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);

        taskDate = new QDateEdit(AddTaskWindow);
        taskDate->setObjectName("taskDate");
        sizePolicy1.setHeightForWidth(taskDate->sizePolicy().hasHeightForWidth());
        taskDate->setSizePolicy(sizePolicy1);
        taskDate->setFont(font);
        taskDate->setWrapping(false);
        taskDate->setFrame(false);
        taskDate->setAlignment(Qt::AlignmentFlag::AlignCenter);
        taskDate->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        taskDate->setKeyboardTracking(true);
        taskDate->setMinimumDateTime(QDateTime(QDate(2024, 10, 31), QTime(15, 0, 0)));
        taskDate->setCalendarPopup(true);
        taskDate->setDate(QDate(2024, 11, 1));

        gridLayout->addWidget(taskDate, 0, 0, 1, 1);

        taskTime = new QTimeEdit(AddTaskWindow);
        taskTime->setObjectName("taskTime");
        sizePolicy1.setHeightForWidth(taskTime->sizePolicy().hasHeightForWidth());
        taskTime->setSizePolicy(sizePolicy1);
        taskTime->setFont(font);
        taskTime->setWrapping(false);
        taskTime->setFrame(false);
        taskTime->setAlignment(Qt::AlignmentFlag::AlignCenter);
        taskTime->setReadOnly(false);
        taskTime->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        taskTime->setSpecialValueText(QString::fromUtf8("00:00"));
        taskTime->setAccelerated(false);
        taskTime->setProperty("showGroupSeparator", QVariant(false));
        taskTime->setCalendarPopup(true);

        gridLayout->addWidget(taskTime, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 1);
        gridLayout->setRowStretch(2, 1);
        gridLayout->setRowStretch(3, 1);
        gridLayout->setRowStretch(4, 1);

        retranslateUi(AddTaskWindow);

        QMetaObject::connectSlotsByName(AddTaskWindow);
    } // setupUi

    void retranslateUi(QDialog *AddTaskWindow)
    {
        AddTaskWindow->setWindowTitle(QCoreApplication::translate("AddTaskWindow", "Dialog", nullptr));
        btnSave->setText(QCoreApplication::translate("AddTaskWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        btnCancel->setText(QCoreApplication::translate("AddTaskWindow", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        taskDate->setSpecialValueText(QString());
        taskTime->setDisplayFormat(QCoreApplication::translate("AddTaskWindow", "HH:mm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddTaskWindow: public Ui_AddTaskWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTASKWINDOW_H
