#include "Task.h"
#include "ui_Task.h"
#include "EditTaskWindow.h"
#include <QMessageBox>
#include <QDate>
#include <QTime>
#include <QDebug>

int Task::countAllTasks = 0;
int Task::countFavoriteTasks = 0;

Task::Task(QString taskText, QDate taskDate, QTime taskTime, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Task)
{
    ui->setupUi(this);
    EditTaskWindow* editTaskWindow = new EditTaskWindow();

    QString dateString = taskDate.toString("dd.MM.yyyy");
    QString timeString = taskTime.toString("HH:mm");

    ui->TaskText->setText(taskText);
    ui->TaskDate->setText(dateString);
    ui->TaskTime->setText(timeString);

    setStyleForTask();

    connect(ui->btnClose, &QPushButton::clicked, this, &Task::closeRequested);
    connect(ui->btnEdit, &QPushButton::clicked, this, [this, editTaskWindow]() {
        editTaskWindow->editThisTask(this);
    });

    countAllTasks++;

    qDebug() << "Всего: " << countAllTasks;
}

void Task::taskError() {
    QMessageBox* msgBox = new QMessageBox;
    msgBox->setIcon(QMessageBox::Critical);
    msgBox->setText("Слишком много букв!");
    msgBox->setInformativeText("Текст был обрезан. Измените текст или уменьшите его размер.");
    msgBox->setWindowTitle("Ошибка!");
    msgBox->setStandardButtons(QMessageBox::Ok);
    msgBox->exec();
    delete msgBox;
}

void Task::addToFavorite(bool add) {
    if (add) {
        countFavoriteTasks++;
        qDebug() << " Всего фаворитов: " << countFavoriteTasks;
    }
    else {
        countFavoriteTasks--;
        qDebug() << " Всего фаворитов: " << countFavoriteTasks;
    }
}

void Task::on_btnFavorite_clicked() {
    static bool isFavorite = true; // Переменная для отслеживания состояния
    QString favoriteImagePath;

    if (isFavorite) {
        favoriteImagePath = "C:/Users/79059/Documents/QT/Reminder/image/star.png";
        addToFavorite(isFavorite);
    }
    else {
        favoriteImagePath = "C:/Users/79059/Documents/QT/Reminder/image/favoritetask.png";
        addToFavorite(isFavorite);
    }

    QIcon favoriteIcon(favoriteImagePath);
    ui->btnFavorite->setIcon(favoriteIcon);
    isFavorite = !isFavorite; // Переключаем состояние
}

QString Task::getTaskText() {
    return ui->TaskText->text();
}

QDate Task::getTaskDate() {
    return QDate::fromString(ui->TaskDate->text(), "dd.MM.yyyy");
}

QTime Task::getTaskTime() {
    return QTime::fromString(ui->TaskTime->text(), "hh:mm");
}

void Task::setTaskText(QString newTaskText) {
    ui->TaskText->setText(newTaskText);
}

void Task::setTaskDate(QDate newTaskDate) {
    ui->TaskDate->setText(newTaskDate.toString("dd.MM.yyyy"));
}

void Task::setTaskTime(QTime newTaskTime) {
    ui->TaskTime->setText(newTaskTime.toString("hh:mm"));
}

void Task::setStyleForTask() {
    QString styleTaskEdit =
        "QPushButton {"
        "    background-color: white;"  // Белый фон
        "    border: none;"               // Без границы
        "    border-radius: 3px;"         // Скругление углов
        "    padding: 5px 10px;"
        "    margin: 2px"
        "}"
        "QPushButton:hover {"             // Наведение
        "    border-radius: 0px;"
        "    border: 2px solid black;"
        "}"
        "QPushButton:pressed {"             // Нажатие
        "    background-color: #dedede;"
        "}";

    QString styleTaskClose =
        "QPushButton {"
        "    background-color: white;"  // Белый фон
        "    border: none;"               // Без границы
        "    border-radius: 3px;"         // Скругление углов
        "    padding: 5px 10px;"
        "    margin: 2px"
        "}"
        "QPushButton:hover {"             // Наведение
        "    border-radius: 0px;"
        "    border: 2px solid black;"
        "}"
        "QPushButton:pressed {"             // Нажатие
        "    background-color: #ef0000;"
        "}";

    QString styleTaskFavorite =
        "QPushButton {"
        "    background-color: white;"  // Белый фон
        "    border: none;"
        "}";

    ui->btnClose->setStyleSheet(styleTaskClose);
    ui->btnEdit->setStyleSheet(styleTaskEdit);
    ui->btnFavorite->setStyleSheet(styleTaskFavorite);

    QString closeImagePath = "C:/Users/79059/Documents/QT/Reminder/image/closetask.png";
    QString editImagePath = "C:/Users/79059/Documents/QT/Reminder/image/edittask.png";
    QString favoriteImagePath = "C:/Users/79059/Documents/QT/Reminder/image/star.png";;
    QIcon closeIcon(closeImagePath);
    QIcon editIcon(editImagePath);
    QIcon favoriteIcon(favoriteImagePath);

    ui->btnClose->setIcon(closeIcon);
    ui->btnClose->setIconSize(QSize(20, 20));
    ui->btnEdit->setIcon(editIcon);
    ui->btnEdit->setIconSize(QSize(20, 20));
    ui->btnFavorite->setIcon(favoriteIcon);
    ui->btnFavorite->setIconSize(QSize(40, 40));
}

Task::~Task()
{
    countAllTasks--;
    qDebug() << "Всего: " << countAllTasks;
    delete ui;
}
