#include "MainWindow.h"
#include "Task.h"
#include "EditTaskWindow.h"
#include "ui_MainWindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QSpacerItem>

int MainWindow::tasksCount = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    EditTaskWindow* ed = new EditTaskWindow;
    ui->setupUi(this);
    setStyleMain();

    connect(ui->btnAdd, &QPushButton::clicked, this, &MainWindow::openEditTaskWindow);
    connect(ui->btnDelAll, &QPushButton::clicked, this, &MainWindow::delAll);

    if (!ui->scrollTasks->widget()) {
        QWidget *containerWidget = new QWidget();

        QGridLayout *gridLayout = new QGridLayout(containerWidget);

        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setSpacing(10);

        containerWidget->setLayout(gridLayout);
        ui->scrollTasks->setWidget(containerWidget);
        ui->scrollTasks->setWidgetResizable(true);
    }

    QDate newTaskDate = QDate::currentDate();
    QTime newTaskTime = QTime::currentTime();
    Task* newTask = new Task("Покакать", newTaskDate, newTaskTime);

    addTask(newTask);

    setMinimumSize(1200, 600);
}

void MainWindow::addTask(Task* newTask) {
    if (newTask->getTaskText() == "") {
        return;
    }

    QWidget *containerWidget = ui->scrollTasks->widget();
    if (!containerWidget) {
        return;
    }

    QGridLayout *gridLayout = qobject_cast<QGridLayout*>(containerWidget->layout());
    if (!gridLayout) {
        gridLayout = new QGridLayout(containerWidget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setSpacing(10);
        containerWidget->setLayout(gridLayout);
    }

    int row = tasksCount / maxColumns;
    int column = tasksCount % maxColumns;

    newTask->setFixedSize(300, 250);
    gridLayout->addWidget(newTask, row, column);

    // Обновление лэйаута
    gridLayout->update();
    containerWidget->update();

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

    // Поиск задачи в сетке
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

        // Удаление виджета из лэйаута
        gridLayout->removeWidget(taskToRemove);

        taskToRemove->deleteLater(); // Удаление объекта задачи

        tasksCount--;

    } else {
        qDebug() << "Задача не найдена в лэйауте.";
    }
}

void MainWindow::delAll() {
    QWidget *containerWidget = ui->scrollTasks->widget();
    if (!containerWidget) {
        qDebug() << "Контейнер виджетов пуст.";
        return;
    }

    QGridLayout *gridLayout = qobject_cast<QGridLayout*>(containerWidget->layout());
    if (!gridLayout) {
        qDebug() << "Лэйаут не найден.";
        return;
    }


    QMessageBox* msgBox = new QMessageBox;
    msgBox->setText("Все задачи будут удалены. Их нельзя будет восстановить.");
    msgBox->setInformativeText("Удалить?");
    msgBox->setStandardButtons(QMessageBox::Save | QMessageBox::Cancel);
    msgBox->setDefaultButton(QMessageBox::Save);
    int ret = msgBox->exec();

    switch (ret) {
    case QMessageBox::Save:
        // Удаление всех виджетов
        QLayoutItem *item;
        while ((item = gridLayout->takeAt(0)) != nullptr) {
            QWidget *widget = item->widget();
            if (widget) {
                widget->deleteLater();
            }
            delete item; // Удаление элемента лэйаута
        }
        delete msgBox;
        break;
    case QMessageBox::Discard:
        // Don't Save was clicked
        break;
    case QMessageBox::Cancel:
        // Cancel was clicked
        break;
    default:
        // should never be reached
        break;
    }

    tasksCount = 0; // Сбрасываем счетчик задач
    containerWidget->update(); // Обновляем контейнер
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
