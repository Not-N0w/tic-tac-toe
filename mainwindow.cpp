#include "mainwindow.h"
#include "choosedifficultywindow.h"
#include "qlabel.h"
#include "ui_mainwindow.h"
#include <QTimer>


MainWindow::MainWindow(QWidget *parent, bool isPlayerCross, int difficulty)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    cells = {ui->a_a, ui->a_b, ui->a_c, ui->b_a, ui->b_b, ui->b_c, ui->c_a, ui->c_b, ui->c_c};
    field = std::vector<std::vector<int>>(3, std::vector<int>(3,0));
    this->isPlayerCross = isPlayerCross;
    this->difficulty = difficulty;
    ui->difficlulty_level->setText(QString::number(difficulty) + "/100 " + (difficulty < 50 ? "(EASY)" : (difficulty < 100 ? "(HARD)" : "(UNREAL)")));
    if(!isPlayerCross) {
        if(make_right_step()) {
            on_b_b_clicked();
        }
        else {
            int button = rand() % 9;
            cells[button]->click();
        }
    }
    srand(time(0));
}
bool MainWindow::make_right_step() {
    return (rand() % 100) + 1 <= difficulty;
}

MainWindow::~MainWindow()
{
    delete ui;
}



int MainWindow::win(std::vector<std::vector<int>>& in) {
    if (in[0][1] == 1 && in[0][2] == 1 && in[0][0] == 1) return 1;
    if (in[1][1] == 1 && in[1][2] == 1 && in[1][0] == 1) return 1;
    if (in[2][1] == 1 && in[2][2] == 1 && in[2][0] == 1) return 1;

    if (in[0][0] == 1 && in[1][1] == 1 && in[2][2] == 1) return 1;
    if (in[2][0] == 1 && in[1][1] == 1 && in[0][2] == 1) return 1;

    if(in[0][0] == 1 && in[1][0] == 1 && in[2][0] == 1) return 1;
    if(in[0][1] == 1 && in[1][1] == 1 && in[2][1] == 1) return 1;
    if(in[0][2] == 1 && in[1][2] == 1 && in[2][2] == 1) return 1;


    if (in[0][1] == -1 && in[0][2] == -1 && in[0][0] == -1) return -1;
    if (in[1][1] == -1 && in[1][2] == -1 && in[1][0] == -1) return -1;
    if (in[2][1] == -1 && in[2][2] == -1 && in[2][0] == -1) return -1;
    if (in[0][0] == -1 && in[1][1] == -1 && in[2][2] == -1) return -1;
    if (in[2][0] == -1 && in[1][1] == -1 && in[0][2] == -1) return -1;
    if(in[0][0] == -1 && in[1][0] == -1 && in[2][0] == -1) return -1;
    if(in[0][1] == -1 && in[1][1] == -1 && in[2][1] == -1) return -1;
    if(in[0][2] == -1 && in[1][2] == -1 && in[2][2] == -1) return -1;
    return 0;
}

int MainWindow::fnd_way(std::vector<std::vector<int>> in, int step, int need) {
    if (win(in) == need) {
        return 1;
    }
    else if (win(in) == (need == 1 ? -1 : 1)) {
        return -1;
    }
    if(step == need) {
        int way_found = -10000;
        bool isClear = 1;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (in[i][j] != 0) continue;
                isClear = 0;
                in[i][j] = step;
                way_found = std::max(fnd_way(in, (step == 1 ? -1 : 1), need), way_found);


                in[i][j] = 0;
            }
        }
        if (isClear == 1) return 0;
        return way_found;
    }
    else {
        int way_found = 10000;
        bool isClear = 1;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (in[i][j] != 0) continue;
                isClear = 0;
                in[i][j] = step;
                way_found = std::min(fnd_way(in, (step == 1 ? -1 : 1), need), way_found);
                in[i][j] = 0;
            }
        }
        if (isClear == 1) return 0;
        return way_found;
    }
}

std::pair<int,int> MainWindow::build(std::vector<std::vector<int>> in, int step, int need) {

    int x, y, way = -10000;
    bool isClear = 1;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (in[i][j] != 0) {
                continue;
            }
            isClear = 0;
            in[i][j] = step;
            auto found = fnd_way(in, (step == 1 ? -1 : 1), need);
            if (found > way) {
                way = found;
                x = i;
                y = j;
            }
            in[i][j] = 0;

        }
    }
    if(isClear) return {-1,-1};
    if(make_right_step()) {
        return { x,y };
    }
    else {
        x = rand() % 3, y = rand() % 3;
        while(in[x][y] != 0) {
            x = rand() % 3, y = rand() % 3;
        }
        return {x,y};
    }
}



void MainWindow::make_step(int x, int y) {

    if(field[x/130][y/130] != 0) return;
    else field[x/130][y/130] = (current_step == 1 ? 1 : -1);
    QPixmap pixmap;
    if(current_step) {
        pixmap.load("C:\\Users\\YAROSLAV\\Documents\\tic_tac_toe\\cross.png");
    }
    else {
        pixmap.load("C:\\Users\\YAROSLAV\\Documents\\tic_tac_toe\\circle.png");
    }

    QLabel* label = new QLabel("cross", this);

    label->setGeometry(ui->playground->x()+x+25,ui->playground->y()+y+25,80,80);
    label->setScaledContents(1);
    label->setPixmap(pixmap);
    label->show();
    current_step = !current_step;
    int winner = win(field);
    if(winner != 0) {
        for(auto& x : cells) x->setDisabled(1);
        ui->message->setText((winner == (isPlayerCross ? 1 : -1) ? "Ты победил!" : "Ты проиграл!"));
        ui->restart->setEnabled(1);

    }
    else {
        bool isClear = 1;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if(field[i][j] == 0) {
                    isClear = 0;
                    break;
                }
            }
        }
        if(isClear) {
            for(auto& x : cells) x->setDisabled(1);
            ui->message->setText("Tie!");
            ui->restart->setEnabled(1);
        }

        if(current_step != isPlayerCross) {
            auto res = build(field, (current_step ? 1 : -1), (isPlayerCross ? -1 : 1));
            if(!(res.first == -1 && res.second == -1)) {
                cells[res.first + res.second*3]->click();
            }
        }
        winner = win(field);
        if(winner != 0) {
            for(auto& x : cells) x->setDisabled(1);
            ui->message->setText((winner == (isPlayerCross ? 1 : -1) ? "Ты победил!" : "Ты проиграл!"));
            ui->restart->setEnabled(1);

        }
        isClear = 1;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if(field[i][j] == 0) {
                    isClear = 0;
                    break;
                }
            }
        }
        if(isClear) {
            for(auto& x : cells) x->setDisabled(1);
            ui->message->setText("Ничья!");
            ui->restart->setEnabled(1);

        }
    }

 }
void MainWindow::on_a_a_clicked()
{
    make_step(0,0);
}


void MainWindow::on_a_b_clicked()
{
    make_step(130,0);

}


void MainWindow::on_a_c_clicked()
{
    make_step(260,0);

}

void MainWindow::on_b_a_clicked()
{
    make_step(0,130);
}

void MainWindow::on_b_b_clicked()
{
    make_step(130,130);
}

void MainWindow::on_b_c_clicked()
{
    make_step(260,130);
}

void MainWindow::on_c_a_clicked()
{
    make_step(0,260);
}

void MainWindow::on_c_b_clicked()
{
    make_step(130,260);
}

void MainWindow::on_c_c_clicked()
{
    make_step(260,260);
}

void MainWindow::on_restart_clicked()
{
    ChooseDifficultyWindow* w = new ChooseDifficultyWindow();
    w->setWindowTitle("Выбор сложности");
    QIcon icon("C:\\Users\\YAROSLAV\\Documents\\tic_tac_toe\\cross_1.ico");
    w->setWindowIcon(icon);
    w->show();
    this->close();
}

