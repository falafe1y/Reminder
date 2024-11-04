#include "EditTaskWindow.h"
#include "ui_EditTaskWindow.h"
#include "Task.h"
#include <QVBoxLayout>
#include <QMessageBox>
#include "MainWindow.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EditTaskWindow::EditTaskWindow(MainWindow *mainWindow, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::EditTaskWindow)
    , mainWin(mainWindow)
{
    ui->setupUi(this);
    setFixedSize(600, 500);

    ui->taskText->setPlaceholderText("Описание задачи");

    connect(ui->btnSave, &QPushButton::clicked, this, &QDialog::accept);
    connect(ui->btnCancel, &QPushButton::clicked, this, &QWidget::close);
}

EditTaskWindow::EditTaskWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::EditTaskWindow)
{
    ui->setupUi(this);
    setFixedSize(600, 500);

    ui->taskText->setPlaceholderText("Описание задачи");

    connect(ui->btnSave, &QPushButton::clicked, this, &QDialog::accept);
    connect(ui->btnCancel, &QPushButton::clicked, this, &QWidget::close);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void EditTaskWindow::Error() {
    QMessageBox* msgBox = new QMessageBox;
    msgBox->setIcon(QMessageBox::Critical);
    msgBox->setText("Поле \"Описание\" пустое.\nПожалуйста, заполните его.");
    msgBox->setWindowTitle("Ошибка");
    msgBox->setStandardButtons(QMessageBox::Ok);
    msgBox->exec();
    delete msgBox;
}

void EditTaskWindow::editThisTask(Task* editedTask) {
    ui->taskText->setText(editedTask->getTaskText());
    ui->taskDate->setDate(editedTask->getTaskDate());
    ui->taskTime->setTime(editedTask->getTaskTime());

    if(this->exec() == QDialog::Accepted) {
        editedTask->setTaskText(ui->taskText->text());
        editedTask->setTaskDate(ui->taskDate->date());
        editedTask->setTaskTime(ui->taskTime->time());
    }
    else {
        this->close();
    }
}

void EditTaskWindow::addNewTask() {
    if(this->exec() == QDialog::Accepted) {
        QString newTaskDesc = ui->taskText->text();
        QDate newTaskDate = ui->taskDate->date();
        QTime newTaskTime = ui->taskTime->time();
        if (newTaskDesc == "") {
            QMessageBox::warning(this, "Ошибка", "Пожалуйста, заполните описание задачи.");
            return;
        }
        Task* newTask = new Task(newTaskDesc, newTaskDate, newTaskTime);
        mainWin->addTask(newTask);
        this->accept();
    }
}

EditTaskWindow::~EditTaskWindow()
{
    qDebug() << "Закрылся";
    delete ui;
}
