#ifndef CHOOSEDIFFICULTYWINDOW_H
#define CHOOSEDIFFICULTYWINDOW_H

#include <QDialog>

namespace Ui {
class ChooseDifficultyWindow;
}

class ChooseDifficultyWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ChooseDifficultyWindow(QWidget *parent = nullptr);
    ~ChooseDifficultyWindow();

private slots:
    void on_cross_button_clicked(bool checked);

    void on_circle_button_clicked();

    void on_play_button_clicked();

    void on_verticalSlider_valueChanged(int value);

private:
    Ui::ChooseDifficultyWindow *ui;
};

#endif // CHOOSEDIFFICULTYWINDOW_H
