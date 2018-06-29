#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include "mark.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void ShowStatusBarInfo();
private slots:
    void on_srcBrowsBtn_clicked();
    void on_markBrowsBtn_clicked();
    void on_savePathBtn_clicked();
    void on_createBtn_clicked();
private:
    Ui::MainWindow *ui;

    Mark* _mark;
    QLabel* _messageLab;
};

#endif // MAINWINDOW_H
