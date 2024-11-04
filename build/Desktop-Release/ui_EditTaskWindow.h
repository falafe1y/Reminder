/********************************************************************************
** Form generated from reading UI file 'EditTaskWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITTASKWINDOW_H
#define UI_EDITTASKWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_EditTaskWindow
{
public:
    QGridLayout *gridLayout;
    QDateEdit *taskDate;
    QTimeEdit *taskTime;
    QLineEdit *taskText;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnSave;
    QPushButton *btnCancel;

    void setupUi(QDialog *EditTaskWindow)
    {
        if (EditTaskWindow->objectName().isEmpty())
            EditTaskWindow->setObjectName("EditTaskWindow");
        EditTaskWindow->resize(658, 495);
        gridLayout = new QGridLayout(EditTaskWindow);
        gridLayout->setObjectName("gridLayout");
        taskDate = new QDateEdit(EditTaskWindow);
        taskDate->setObjectName("taskDate");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(taskDate->sizePolicy().hasHeightForWidth());
        taskDate->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(18);
        taskDate->setFont(font);
        taskDate->setWrapping(false);
        taskDate->setFrame(false);
        taskDate->setAlignment(Qt::AlignmentFlag::AlignCenter);
        taskDate->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        taskDate->setKeyboardTracking(true);
        taskDate->setMinimumDateTime(QDateTime(QDate(2024, 10, 31), QTime(18, 0, 0)));
        taskDate->setCalendarPopup(true);
        taskDate->setDate(QDate(2024, 11, 1));

        gridLayout->addWidget(taskDate, 0, 0, 1, 1);

        taskTime = new QTimeEdit(EditTaskWindow);
        taskTime->setObjectName("taskTime");
        sizePolicy.setHeightForWidth(taskTime->sizePolicy().hasHeightForWidth());
        taskTime->setSizePolicy(sizePolicy);
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

        taskText = new QLineEdit(EditTaskWindow);
        taskText->setObjectName("taskText");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(taskText->sizePolicy().hasHeightForWidth());
        taskText->setSizePolicy(sizePolicy1);
        taskText->setFont(font);
        taskText->setMaxLength(16);
        taskText->setFrame(false);
        taskText->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(taskText, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btnSave = new QPushButton(EditTaskWindow);
        btnSave->setObjectName("btnSave");
        sizePolicy.setHeightForWidth(btnSave->sizePolicy().hasHeightForWidth());
        btnSave->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(btnSave);

        btnCancel = new QPushButton(EditTaskWindow);
        btnCancel->setObjectName("btnCancel");
        sizePolicy.setHeightForWidth(btnCancel->sizePolicy().hasHeightForWidth());
        btnCancel->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(btnCancel);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 1);
        gridLayout->setRowStretch(2, 1);
        gridLayout->setRowStretch(3, 1);
        gridLayout->setRowStretch(4, 1);

        retranslateUi(EditTaskWindow);

        QMetaObject::connectSlotsByName(EditTaskWindow);
    } // setupUi

    void retranslateUi(QDialog *EditTaskWindow)
    {
        EditTaskWindow->setWindowTitle(QCoreApplication::translate("EditTaskWindow", "Dialog", nullptr));
        taskDate->setSpecialValueText(QString());
        taskTime->setDisplayFormat(QCoreApplication::translate("EditTaskWindow", "HH:mm", nullptr));
        btnSave->setText(QCoreApplication::translate("EditTaskWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        btnCancel->setText(QCoreApplication::translate("EditTaskWindow", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditTaskWindow: public Ui_EditTaskWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTASKWINDOW_H
