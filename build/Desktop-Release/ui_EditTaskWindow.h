/********************************************************************************
** Form generated from reading UI file 'EditTaskWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITTASKWINDOW_H
#define UI_EDITTASKWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
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
    QTimeEdit *timeEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnCancel;
    QPushButton *btnSave;
    QCalendarWidget *calendarWidget;
    QLineEdit *lineEdit;

    void setupUi(QDialog *EditTaskWindow)
    {
        if (EditTaskWindow->objectName().isEmpty())
            EditTaskWindow->setObjectName("EditTaskWindow");
        EditTaskWindow->resize(600, 450);
        gridLayout = new QGridLayout(EditTaskWindow);
        gridLayout->setObjectName("gridLayout");
        timeEdit = new QTimeEdit(EditTaskWindow);
        timeEdit->setObjectName("timeEdit");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(timeEdit->sizePolicy().hasHeightForWidth());
        timeEdit->setSizePolicy(sizePolicy);
        timeEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);
        timeEdit->setReadOnly(false);
        timeEdit->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        timeEdit->setAccelerated(false);
        timeEdit->setProperty("showGroupSeparator", QVariant(false));

        gridLayout->addWidget(timeEdit, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btnCancel = new QPushButton(EditTaskWindow);
        btnCancel->setObjectName("btnCancel");
        sizePolicy.setHeightForWidth(btnCancel->sizePolicy().hasHeightForWidth());
        btnCancel->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(btnCancel);

        btnSave = new QPushButton(EditTaskWindow);
        btnSave->setObjectName("btnSave");
        sizePolicy.setHeightForWidth(btnSave->sizePolicy().hasHeightForWidth());
        btnSave->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(btnSave);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);

        calendarWidget = new QCalendarWidget(EditTaskWindow);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGridVisible(true);
        calendarWidget->setSelectionMode(QCalendarWidget::SelectionMode::SingleSelection);
        calendarWidget->setHorizontalHeaderFormat(QCalendarWidget::HorizontalHeaderFormat::ShortDayNames);
        calendarWidget->setVerticalHeaderFormat(QCalendarWidget::VerticalHeaderFormat::NoVerticalHeader);
        calendarWidget->setNavigationBarVisible(true);
        calendarWidget->setDateEditEnabled(true);

        gridLayout->addWidget(calendarWidget, 0, 0, 1, 1);

        lineEdit = new QLineEdit(EditTaskWindow);
        lineEdit->setObjectName("lineEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(lineEdit, 2, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);

        retranslateUi(EditTaskWindow);

        QMetaObject::connectSlotsByName(EditTaskWindow);
    } // setupUi

    void retranslateUi(QDialog *EditTaskWindow)
    {
        EditTaskWindow->setWindowTitle(QCoreApplication::translate("EditTaskWindow", "Dialog", nullptr));
        timeEdit->setSpecialValueText(QCoreApplication::translate("EditTaskWindow", "00:00", nullptr));
        btnCancel->setText(QCoreApplication::translate("EditTaskWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        btnSave->setText(QCoreApplication::translate("EditTaskWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditTaskWindow: public Ui_EditTaskWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTASKWINDOW_H
