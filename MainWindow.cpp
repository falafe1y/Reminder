#include "MainWindow.h"
#include "Task.h"
// #include "EditTaskWindow.h"
#include "ui_MainWindow.h"
#include <QDebug>
#include <QSpacerItem>

int MainWindow::tasksCount = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setStyleMain();

    connect(ui->btnAdd, &QPushButton::clicked, this, &MainWindow::openEditTaskWindow);

    if (!ui->scrollTasks->widget()) {
        QWidget *containerWidget = new QWidget();

        QGridLayout *gridLayout = new QGridLayout(containerWidget);

        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setSpacing(10);

        containerWidget->setLayout(gridLayout);
        ui->scrollTasks->setWidget(containerWidget);
        ui->scrollTasks->setWidgetResizable(true);
    }

    Task* newTask = new Task("Учить химию");
    Task* newTask1 = new Task("Покормить собаку");
    Task* newTask2 = new Task("Посмотреть кину");
    Task* newTask3 = new Task("Покушать");
    addTask(newTask);
    addTask(newTask1);
    addTask(newTask2);
    addTask(newTask3);

    setMinimumSize(1200, 600);
}

void MainWindow::addTask(Task* newTask) {

    QWidget *containerWidget = ui->scrollTasks->widget();
    if (!containerWidget) {
        return;
    }

    QGridLayout *gridLayout = qobject_cast<QGridLayout*>(containerWidget->layout());
    if (!gridLayout) {
        qDebug() << "Создание нового лэйаута...";
        gridLayout = new QGridLayout(containerWidget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setSpacing(10);
        containerWidget->setLayout(gridLayout);
    }

    int row = tasksCount / maxColumns;
    int column = tasksCount % maxColumns;

    newTask->setFixedSize(300, 250);

    gridLayout->addWidget(newTask, row, column);

    containerWidget->updateGeometry();

    connect(newTask, &Task::closeRequested, this, [this, newTask]() {
        delTask(newTask);
    });

    tasksCount++;
}


void MainWindow::delTask(Task* taskToRemove) {
    QWidget *containerWidget = ui->scrollTasks->widget();
    if (!containerWidget) {
        return;
    }

    QGridLayout *gridLayout = qobject_cast<QGridLayout*>(containerWidget->layout());
    if (!gridLayout) {
        qDebug() << "Лэйаут не найден.";
        return;
    }

    // Найти позицию задачи в сетке
    int row = -1;
    int column = -1;

    for (int r = 0; r < gridLayout->rowCount(); ++r) {
        for (int c = 0; c < gridLayout->columnCount(); ++c) {
            if (gridLayout->itemAt(r * gridLayout->columnCount() + c) &&
                gridLayout->itemAt(r * gridLayout->columnCount() + c)->widget() == taskToRemove) {
                row = r;
                column = c;
                break;
            }
        }
        if (row != -1) break;
    }

    if (row != -1 && column != -1) {
        // Удаляем виджет из лэйаута
        gridLayout->removeWidget(taskToRemove);
        taskToRemove->deleteLater(); // Удаляем объект задачи

        // Обновляем количество задач
        tasksCount--;

    } else {
        qDebug() << "Задача не найдена в лэйауте.";
    }
}

void MainWindow::setStyleMain() {
    QString styleSideBarButtons =
        "QPushButton {"
        "    background-color: #000000;"  // Черный фон
        "    color: #FFFFFF;"             // Цвет текста
        "    border: none;"               // Цвет границы
        "    border-radius: 6px;"         // Скругление углов
        "    padding: 5px 10px;"          // Скругления внутренних углов
        "    text-align:left;"            // Внутренние отступы
        "}"
        "QPushButton:hover {"             // Наведение на кнопку
        "    background-color: #3f3f3f;"
        "}"
        "QPushButton:pressed {"           // Нажатие
        "    background-color: #606060;"
        "}";

    ui->btnAdd->setStyleSheet(styleSideBarButtons);
    ui->btnSounds->setStyleSheet(styleSideBarButtons);
    ui->btnImprtnt->setStyleSheet(styleSideBarButtons);
    ui->btnWatchAll->setStyleSheet(styleSideBarButtons);
    ui->btnDelAll->setStyleSheet(styleSideBarButtons);

    ui->sideBar->setStyleSheet("background-color: #000000;");
    ui->scrollTasks->setStyleSheet("background-color: #FFFFFF;");
}

MainWindow::~MainWindow()
{
    delete ui;
}
