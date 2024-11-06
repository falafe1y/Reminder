#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSystemTrayIcon>
#include "Task.h"
#include "EditTaskWindow.h"
#include <QIcon>

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

protected:
    void closeEvent(QCloseEvent *event) override;

private slots:
    void openEditTaskWindow() {
        EditTaskWindow *editTaskWindow = new EditTaskWindow(this);
        editTaskWindow->addNewTask();
        delete editTaskWindow;
    }

    void trayIconActivated(QSystemTrayIcon::ActivationReason reason);

private:
    Ui::MainWindow *ui;
    static int tasksCount;
    const int maxColumns = 3;
    QSystemTrayIcon *trayIcon;
    QIcon mainIcon;

private:
    void setStyleMain();
    void delAll();
    void setSound();

};
#endif // MAINWINDOW_H
