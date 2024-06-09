/********************************************************************************
** Form generated from reading UI file 'choosedifficultywindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEDIFFICULTYWINDOW_H
#define UI_CHOOSEDIFFICULTYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChooseDifficultyWindow
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSlider *verticalSlider;
    QHBoxLayout *horizontalLayout_2;
    QLabel *difficluty_label;
    QPushButton *cross_button;
    QPushButton *circle_button;
    QPushButton *play_button;

    void setupUi(QDialog *ChooseDifficultyWindow)
    {
        if (ChooseDifficultyWindow->objectName().isEmpty())
            ChooseDifficultyWindow->setObjectName("ChooseDifficultyWindow");
        ChooseDifficultyWindow->resize(600, 400);
        ChooseDifficultyWindow->setStyleSheet(QString::fromUtf8("QDialog {\n"
"	background-color:rgba(30,30,30,255);\n"
"}"));
        layoutWidget = new QWidget(ChooseDifficultyWindow);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 251, 381));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Corbel Light")});
        font.setPointSize(20);
        label->setFont(font);

        verticalLayout->addWidget(label);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalSlider = new QSlider(layoutWidget);
        verticalSlider->setObjectName("verticalSlider");
        verticalSlider->setMinimum(1);
        verticalSlider->setMaximum(100);
        verticalSlider->setValue(100);
        verticalSlider->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(verticalSlider);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        difficluty_label = new QLabel(layoutWidget);
        difficluty_label->setObjectName("difficluty_label");
        difficluty_label->setLayoutDirection(Qt::LeftToRight);
        difficluty_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(difficluty_label);


        verticalLayout->addLayout(horizontalLayout_2);

        cross_button = new QPushButton(ChooseDifficultyWindow);
        cross_button->setObjectName("cross_button");
        cross_button->setGeometry(QRect(370, 10, 130, 130));
        cross_button->setCheckable(true);
        cross_button->setChecked(true);
        circle_button = new QPushButton(ChooseDifficultyWindow);
        circle_button->setObjectName("circle_button");
        circle_button->setGeometry(QRect(370, 180, 130, 130));
        circle_button->setCheckable(true);
        play_button = new QPushButton(ChooseDifficultyWindow);
        play_button->setObjectName("play_button");
        play_button->setGeometry(QRect(370, 360, 130, 31));

        retranslateUi(ChooseDifficultyWindow);

        QMetaObject::connectSlotsByName(ChooseDifficultyWindow);
    } // setupUi

    void retranslateUi(QDialog *ChooseDifficultyWindow)
    {
        ChooseDifficultyWindow->setWindowTitle(QCoreApplication::translate("ChooseDifficultyWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ChooseDifficultyWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\201\320\273\320\276\320\266\320\275\320\276\321\201\321\202\321\214:", nullptr));
        difficluty_label->setText(QCoreApplication::translate("ChooseDifficultyWindow", "100", nullptr));
        cross_button->setText(QString());
        circle_button->setText(QString());
        play_button->setText(QCoreApplication::translate("ChooseDifficultyWindow", "Play", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChooseDifficultyWindow: public Ui_ChooseDifficultyWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEDIFFICULTYWINDOW_H
