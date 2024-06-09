#include "choosedifficultywindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ChooseDifficultyWindow w;
    w.setWindowTitle("Выбор сложности");
    QIcon icon("C:\\Users\\YAROSLAV\\Documents\\tic_tac_toe\\cross_1.ico");
    w.setWindowIcon(icon);
    w.show();
    return a.exec();
}
