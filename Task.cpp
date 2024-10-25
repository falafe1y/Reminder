#include "Task.h"
#include "ui_Task.h"
#include "EditTaskWindow.h"
#include <QMessageBox>

Task::Task(QString taskText, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Task)
{
    ui->setupUi(this);
    EditTaskWindow* editTaskWindow = new EditTaskWindow;
    setStyleForTask();

    if(taskText.length() > maxTaskTextLength) {
        // QString truncatedText = ui->taskDescription->toPlainText().left(10);
        ui->taskDescription->setText(taskText);
        taskError();
    }
    else {
        ui->taskDescription->setText(taskText);
    }

    connect(ui->btnClose, &QPushButton::clicked, this, &Task::closeRequested);
    connect(ui->btnEdit, &QPushButton::clicked, this, [this, editTaskWindow]() {
        editTaskWindow->editThisTask(this);
    });

}

// void Task::editRequested() {
//     Task* editedTask = this;
//     editTaskWindow->editThisTask(editedTask);
// }

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

void Task::on_btnFavorite_clicked() {
    static bool isFavorite = false; // Переменная для отслеживания состояния
    QString favoriteImagePath = isFavorite ? "C:/Users/79059/Documents/QT/Reminder/image/star.png"
                                           : "C:/Users/79059/Documents/QT/Reminder/image/favoritetask.png";
    QIcon favoriteIcon(favoriteImagePath);
    ui->btnFavorite->setIcon(favoriteIcon);
    isFavorite = !isFavorite; // Переключаем состояние
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
    delete ui;
}
