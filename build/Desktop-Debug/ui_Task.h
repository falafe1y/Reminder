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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Task
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QFrame *line;
    QSpacerItem *verticalSpacer;
    QLabel *taskText;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnEdit;
    QPushButton *btnClose;

    void setupUi(QWidget *Task)
    {
        if (Task->objectName().isEmpty())
            Task->setObjectName("Task");
        Task->resize(250, 250);
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
        gridLayout->setHorizontalSpacing(7);
        gridLayout->setContentsMargins(-1, 6, -1, -1);
        line = new QFrame(frame);
        line->setObjectName("line");
        line->setFrameShadow(QFrame::Shadow::Plain);
        line->setLineWidth(2);
        line->setFrameShape(QFrame::Shape::HLine);

        gridLayout->addWidget(line, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        taskText = new QLabel(frame);
        taskText->setObjectName("taskText");
        QFont font;
        font.setPointSize(23);
        font.setBold(true);
        taskText->setFont(font);
        taskText->setFrameShape(QFrame::Shape::NoFrame);
        taskText->setFrameShadow(QFrame::Shadow::Plain);
        taskText->setScaledContents(false);
        taskText->setAlignment(Qt::AlignmentFlag::AlignCenter);
        taskText->setIndent(-1);

        gridLayout->addWidget(taskText, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, 10, -1, 10);
        btnEdit = new QPushButton(frame);
        btnEdit->setObjectName("btnEdit");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnEdit->sizePolicy().hasHeightForWidth());
        btnEdit->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(btnEdit);

        btnClose = new QPushButton(frame);
        btnClose->setObjectName("btnClose");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnClose->sizePolicy().hasHeightForWidth());
        btnClose->setSizePolicy(sizePolicy1);
        btnClose->setMouseTracking(false);
        btnClose->setTabletTracking(false);
        btnClose->setCheckable(false);
        btnClose->setAutoRepeat(false);
        btnClose->setAutoDefault(false);

        horizontalLayout->addWidget(btnClose);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2->setStretch(0, 5);
        horizontalLayout_2->setStretch(1, 3);

        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 1);
        gridLayout->setRowStretch(2, 8);
        taskText->raise();
        line->raise();

        gridLayout_2->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(Task);

        btnClose->setDefault(false);


        QMetaObject::connectSlotsByName(Task);
    } // setupUi

    void retranslateUi(QWidget *Task)
    {
        Task->setWindowTitle(QCoreApplication::translate("Task", "Form", nullptr));
        taskText->setText(QCoreApplication::translate("Task", "TextLabel", nullptr));
        btnEdit->setText(QString());
        btnClose->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Task: public Ui_Task {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK_H
