#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "qpushbutton.h"
#include <QMainWindow>
#include <vector>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr, bool isPlayerCross = 1, int difficulty = 100);
    ~MainWindow();

private slots:
    void on_a_a_clicked();

    void on_a_b_clicked();

    void on_a_c_clicked();

    void on_b_a_clicked();

    void on_b_b_clicked();

    void on_b_c_clicked();

    void on_c_a_clicked();

    void on_c_b_clicked();

    void on_c_c_clicked();

    void on_restart_clicked();

private:
    Ui::MainWindow *ui;
    std::vector<QPushButton*> cells;
    std::vector<QWidget*> cells_widgets;
    std::vector<std::vector<int>> field;
    bool current_step = 1;

    void make_step(int,int);
    bool make_right_step();
    int win(std::vector<std::vector<int>>& in);
    int fnd_way(std::vector<std::vector<int>> in, int step, int need);
    std::pair<int,int> build(std::vector<std::vector<int>> in, int step, int need);

    int difficulty;
    bool isPlayerCross;

};
#endif // MAINWINDOW_H
