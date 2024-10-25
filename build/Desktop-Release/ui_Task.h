/********************************************************************************
** Form generated from reading UI file 'Task.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK_H
#define UI_TASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Task
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QLabel *taskDescription;
    QFrame *line;
    QHBoxLayout *layoutBtnsAndDateTime;
    QPushButton *btnFavorite;
    QVBoxLayout *layoutDateTime;
    QLineEdit *lineDate;
    QLineEdit *lineTime;
    QHBoxLayout *layoutBtns;
    QPushButton *btnEdit;
    QPushButton *btnClose;

    void setupUi(QWidget *Task)
    {
        if (Task->objectName().isEmpty())
            Task->setObjectName("Task");
        Task->resize(725, 466);
        Task->setAutoFillBackground(false);
        gridLayout_2 = new QGridLayout(Task);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(Task);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::Box);
        frame->setFrameShadow(QFrame::Shadow::Plain);
        frame->setLineWidth(2);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_2 = new QSpacerItem(20, 80, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        gridLayout->addItem(verticalSpacer_2, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        taskDescription = new QLabel(frame);
        taskDescription->setObjectName("taskDescription");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(taskDescription->sizePolicy().hasHeightForWidth());
        taskDescription->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        taskDescription->setFont(font);
        taskDescription->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(taskDescription, 3, 0, 1, 1);

        line = new QFrame(frame);
        line->setObjectName("line");
        line->setFrameShadow(QFrame::Shadow::Plain);
        line->setLineWidth(2);
        line->setFrameShape(QFrame::Shape::HLine);

        gridLayout->addWidget(line, 1, 0, 1, 1);

        layoutBtnsAndDateTime = new QHBoxLayout();
        layoutBtnsAndDateTime->setObjectName("layoutBtnsAndDateTime");
        btnFavorite = new QPushButton(frame);
        btnFavorite->setObjectName("btnFavorite");

        layoutBtnsAndDateTime->addWidget(btnFavorite);

        layoutDateTime = new QVBoxLayout();
        layoutDateTime->setObjectName("layoutDateTime");
        lineDate = new QLineEdit(frame);
        lineDate->setObjectName("lineDate");
        sizePolicy.setHeightForWidth(lineDate->sizePolicy().hasHeightForWidth());
        lineDate->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setKerning(true);
        lineDate->setFont(font1);
        lineDate->setFrame(false);
        lineDate->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineDate->setReadOnly(true);

        layoutDateTime->addWidget(lineDate);

        lineTime = new QLineEdit(frame);
        lineTime->setObjectName("lineTime");
        sizePolicy.setHeightForWidth(lineTime->sizePolicy().hasHeightForWidth());
        lineTime->setSizePolicy(sizePolicy);
        lineTime->setFont(font1);
        lineTime->setFrame(false);
        lineTime->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineTime->setReadOnly(true);

        layoutDateTime->addWidget(lineTime);


        layoutBtnsAndDateTime->addLayout(layoutDateTime);

        layoutBtns = new QHBoxLayout();
        layoutBtns->setSpacing(0);
        layoutBtns->setObjectName("layoutBtns");
        layoutBtns->setContentsMargins(-1, 10, -1, 10);
        btnEdit = new QPushButton(frame);
        btnEdit->setObjectName("btnEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnEdit->sizePolicy().hasHeightForWidth());
        btnEdit->setSizePolicy(sizePolicy1);

        layoutBtns->addWidget(btnEdit);

        btnClose = new QPushButton(frame);
        btnClose->setObjectName("btnClose");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnClose->sizePolicy().hasHeightForWidth());
        btnClose->setSizePolicy(sizePolicy2);
        btnClose->setMouseTracking(false);
        btnClose->setTabletTracking(false);
        btnClose->setCheckable(false);
        btnClose->setAutoRepeat(false);
        btnClose->setAutoDefault(false);

        layoutBtns->addWidget(btnClose);


        layoutBtnsAndDateTime->addLayout(layoutBtns);

        layoutBtnsAndDateTime->setStretch(0, 10);
        layoutBtnsAndDateTime->setStretch(1, 9);
        layoutBtnsAndDateTime->setStretch(2, 9);

        gridLayout->addLayout(layoutBtnsAndDateTime, 0, 0, 1, 1);

        line->raise();
        taskDescription->raise();

        gridLayout_2->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(Task);

        btnClose->setDefault(false);


        QMetaObject::connectSlotsByName(Task);
    } // setupUi

    void retranslateUi(QWidget *Task)
    {
        Task->setWindowTitle(QCoreApplication::translate("Task", "Form", nullptr));
        taskDescription->setText(QCoreApplication::translate("Task", "TextLabel", nullptr));
        btnFavorite->setText(QString());
        lineDate->setInputMask(QString());
        lineDate->setText(QCoreApplication::translate("Task", "24.07.25", nullptr));
        lineTime->setInputMask(QString());
        lineTime->setText(QCoreApplication::translate("Task", "18:45", nullptr));
        btnEdit->setText(QString());
        btnClose->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Task: public Ui_Task {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK_H
