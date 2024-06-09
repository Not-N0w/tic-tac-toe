/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *playground;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *a_a;
    QPushButton *a_b;
    QPushButton *a_c;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *b_a;
    QPushButton *b_b;
    QPushButton *b_c;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *c_a;
    QPushButton *c_b;
    QPushButton *c_c;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *message;
    QPushButton *restart;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLabel *difficlulty_level;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(590, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("#back_button {\n"
"	background-clor: rgba(0,0,0,0);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        playground = new QWidget(centralwidget);
        playground->setObjectName("playground");
        playground->setGeometry(QRect(100, 90, 390, 390));
        playground->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		background-color: rgba(0,0,0,0);\n"
"}"));
        line = new QFrame(playground);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 129, 390, 3));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(playground);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(0, 259, 390, 3));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        line_3 = new QFrame(playground);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(129, 0, 3, 390));
        line_3->setFrameShape(QFrame::Shape::VLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        line_4 = new QFrame(playground);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(259, 0, 3, 390));
        line_4->setFrameShape(QFrame::Shape::VLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);
        layoutWidget = new QWidget(playground);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 391, 398));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName("horizontalLayout");
        a_a = new QPushButton(layoutWidget);
        a_a->setObjectName("a_a");
        a_a->setMinimumSize(QSize(0, 129));

        horizontalLayout->addWidget(a_a);

        a_b = new QPushButton(layoutWidget);
        a_b->setObjectName("a_b");
        a_b->setMinimumSize(QSize(0, 129));

        horizontalLayout->addWidget(a_b);

        a_c = new QPushButton(layoutWidget);
        a_c->setObjectName("a_c");
        a_c->setMinimumSize(QSize(0, 129));

        horizontalLayout->addWidget(a_c);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        b_a = new QPushButton(layoutWidget);
        b_a->setObjectName("b_a");
        b_a->setMinimumSize(QSize(0, 129));

        horizontalLayout_2->addWidget(b_a);

        b_b = new QPushButton(layoutWidget);
        b_b->setObjectName("b_b");
        b_b->setMinimumSize(QSize(0, 129));

        horizontalLayout_2->addWidget(b_b);

        b_c = new QPushButton(layoutWidget);
        b_c->setObjectName("b_c");
        b_c->setMinimumSize(QSize(0, 129));

        horizontalLayout_2->addWidget(b_c);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        c_a = new QPushButton(layoutWidget);
        c_a->setObjectName("c_a");
        c_a->setMinimumSize(QSize(0, 129));

        horizontalLayout_3->addWidget(c_a);

        c_b = new QPushButton(layoutWidget);
        c_b->setObjectName("c_b");
        c_b->setMinimumSize(QSize(0, 129));

        horizontalLayout_3->addWidget(c_b);

        c_c = new QPushButton(layoutWidget);
        c_c->setObjectName("c_c");
        c_c->setMinimumSize(QSize(0, 129));

        horizontalLayout_3->addWidget(c_c);


        verticalLayout->addLayout(horizontalLayout_3);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(100, 500, 391, 82));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        message = new QLabel(layoutWidget1);
        message->setObjectName("message");
        QFont font;
        font.setFamilies({QString::fromUtf8("Corbel Light")});
        font.setPointSize(20);
        message->setFont(font);

        verticalLayout_2->addWidget(message);

        restart = new QPushButton(layoutWidget1);
        restart->setObjectName("restart");
        restart->setEnabled(false);
        restart->setFont(font);
        restart->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(restart);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(100, 20, 391, 35));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setFont(font);

        horizontalLayout_4->addWidget(label);

        difficlulty_level = new QLabel(widget);
        difficlulty_level->setObjectName("difficlulty_level");
        difficlulty_level->setFont(font);

        horizontalLayout_4->addWidget(difficlulty_level);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        a_a->setText(QString());
        a_b->setText(QString());
        a_c->setText(QString());
        b_a->setText(QString());
        b_b->setText(QString());
        b_c->setText(QString());
        c_a->setText(QString());
        c_b->setText(QString());
        c_c->setText(QString());
        message->setText(QString());
        restart->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\267\320\260\320\277\321\203\321\201\320\272", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\241\320\273\320\276\320\266\320\275\320\276\321\201\321\202\321\214:", nullptr));
        difficlulty_level->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
