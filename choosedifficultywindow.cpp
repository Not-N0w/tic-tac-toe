#include "choosedifficultywindow.h"
#include "mainwindow.h"
#include "ui_choosedifficultywindow.h"

ChooseDifficultyWindow::ChooseDifficultyWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ChooseDifficultyWindow)
{
    ui->setupUi(this);
    QIcon cross_icon("C:\\Users\\YAROSLAV\\Documents\\tic_tac_toe\\cross.png");
    QIcon circle_icon("C:\\Users\\YAROSLAV\\Documents\\tic_tac_toe\\circle.png");


    ui->cross_button->setStyleSheet("background-color: rgb(30,30,30)");
    ui->cross_button->setIcon(cross_icon);
    ui->cross_button->setIconSize(QSize(80,80));

    ui->circle_button->setStyleSheet("background-color: rgb(30,30,30)");
    ui->circle_button->setIcon(circle_icon);
    ui->circle_button->setIconSize(QSize(80,80));
}

ChooseDifficultyWindow::~ChooseDifficultyWindow()
{
    delete ui;
}

void ChooseDifficultyWindow::on_cross_button_clicked(bool checked)
{
    if(checked == 0) {
        ui->cross_button->setChecked(1);
    }
    ui->circle_button->setChecked(0);
}


void ChooseDifficultyWindow::on_circle_button_clicked()
{
    if(ui->circle_button->isChecked() == 0) {
        ui->circle_button->setChecked(1);
    }
    ui->cross_button->setChecked(0);
}




void ChooseDifficultyWindow::on_play_button_clicked()
{
    MainWindow* w = new MainWindow(nullptr, (ui->cross_button->isChecked()), ui->verticalSlider->value());
    w->setWindowTitle("Крестики-нолики");
    QIcon icon("C:\\Users\\YAROSLAV\\Documents\\tic_tac_toe\\cross_1.ico");
    w->setWindowIcon(icon);
    w->show();
    this->close();
}


void ChooseDifficultyWindow::on_verticalSlider_valueChanged(int value)
{
    ui->difficluty_label->setText(QString::number(value));

}

