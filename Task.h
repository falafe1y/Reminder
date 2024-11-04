#ifndef TASK_H
#define TASK_H

#include <QWidget>
#include <QString>
#include <QDate>
#include <QTime>

namespace Ui {
class Task;
}

class Task : public QWidget
{
    Q_OBJECT

public:
    explicit Task(QString taskText, QDate taskDate, QTime taskTime, QWidget *parent = nullptr);
    QString getTaskText();
    QDate getTaskDate();
    QTime getTaskTime();
    void setTaskText(QString newTaskText);
    void setTaskDate(QDate newTaskDate);
    void setTaskTime(QTime newTaskTime);
    ~Task();

signals:
    void closeRequested();      // Сигнал для запроса закрытия задачи
    void editRequested();       // Сигнал для запроса на редактирование задачи

private:
    Ui::Task *ui;
    static int countAllTasks;
    static int countFavoriteTasks;

private:
    void taskError();
    void setStyleForTask();
    void addToFavorite(bool add);

private slots:
    void on_btnFavorite_clicked();
};

#endif // TASK_H
