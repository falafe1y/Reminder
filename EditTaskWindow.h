#ifndef EDITTASKWINDOW_H
#define EDITTASKWINDOW_H

#include "Task.h"
#include <QDialog>

class MainWindow;

namespace Ui {
class EditTaskWindow;
}


class EditTaskWindow : public QDialog
{
    Q_OBJECT

public:
    explicit EditTaskWindow(MainWindow* mainWindow, QWidget *parent = nullptr);
    explicit EditTaskWindow(QWidget *parent = nullptr);
    ~EditTaskWindow();
    void editThisTask(Task* editedTask);
    void addNewTask();

private:
    Ui::EditTaskWindow *ui;
    void setAddTaskMode();
    void setEditTaskMode();
    void setupTimeSelectors();
    void Error();

private:
    MainWindow* mainWin;
};

#endif // EDITTASKWINDOW_H
