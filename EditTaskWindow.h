#ifndef EDITTASKWINDOW_H
#define EDITTASKWINDOW_H

#include "Task.h"
#include <QDialog>

namespace Ui {
class EditTaskWindow;
}

class EditTaskWindow : public QDialog
{
    Q_OBJECT

public:
    explicit EditTaskWindow(QWidget *parent = nullptr);
    ~EditTaskWindow();
    void editThisTask(Task* editedTask);
    Task addNewTask();

private:
    Ui::EditTaskWindow *ui;
    void setupTimeSelectors();
};

#endif // EDITTASKWINDOW_H
