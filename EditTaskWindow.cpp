#include "EditTaskWindow.h"
#include "ui_EditTaskWindow.h"
#include <QVBoxLayout>

EditTaskWindow::EditTaskWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::EditTaskWindow)
{
    ui->setupUi(this);

    // connect(EditTaskWindow::addNewTask(), &QPushButton::clicked, this, &EditTaskWindow::addNewTaskRequest);
    // connect(ui->btnEdit, &QPushButton::clicked, this, &Task::editRequested);
}

void EditTaskWindow::editThisTask(Task* editedTask) {

    this->exec();  // Открываем окно в модальном режиме
}


// Task EditTaskWindow::addNewTask() {
//     EditTaskWindow *editTaskWindow = new EditTaskWindow();
//     editTaskWindow->exec();
// }

EditTaskWindow::~EditTaskWindow()
{
    delete ui;
}
