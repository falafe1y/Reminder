#ifndef TASK_H
#define TASK_H

#include <QWidget>
#include <QString>

namespace Ui {
class Task;
}

class Task : public QWidget
{
    Q_OBJECT

public:
    explicit Task(QString taskText, QWidget *parent = nullptr);
    ~Task();

signals:
    void closeRequested();      // Сигнал для запроса закрытия задачи
    void editRequested();       // Сигнал для запроса на редактирование задачи

private:
    Ui::Task *ui;
    void taskError();
    void setStyleForTask();

private:
    short maxTaskTextLength = 16;

private slots:
    void on_btnFavorite_clicked();
};

#endif // TASK_H
