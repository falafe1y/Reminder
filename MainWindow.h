#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Task.h"
#include "EditTaskWindow.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void addTask(Task* newTask);
    void delTask(Task* taskToRemove);

private slots:
    void openEditTaskWindow() {
        EditTaskWindow *editTaskWindow = new EditTaskWindow(this);
        editTaskWindow->addNewTask();
        delete editTaskWindow;
    }

private:
    Ui::MainWindow *ui;
    static int tasksCount;
    const int maxColumns = 3;

private:
    void setStyleMain();
    void delAll();

};
#endif // MAINWINDOW_H
