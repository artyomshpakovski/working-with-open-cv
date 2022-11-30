/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *a_open;
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QLabel *label_3;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_14;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_13;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_22;
    QLabel *label_23;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_25;
    QLabel *label_26;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_28;
    QLabel *label_29;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_24;
    QLabel *label_31;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_32;
    QLabel *label_33;
    QVBoxLayout *verticalLayout_17;
    QLabel *label_34;
    QLabel *label_35;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(700, 600);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        a_open = new QAction(MainWindow);
        a_open->setObjectName(QString::fromUtf8("a_open"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        centralwidget->setMaximumSize(QSize(16777215, 16777215));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(6, 6, 651, 521));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 897, 505));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents_4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label = new QLabel(scrollAreaWidgetContents_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setBaseSize(QSize(0, 40));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout_5->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_6 = new QLabel(scrollAreaWidgetContents_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label_6->setFont(font1);

        verticalLayout_2->addWidget(label_6);

        label_2 = new QLabel(scrollAreaWidgetContents_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(0, 0));
        label_2->setScaledContents(false);

        verticalLayout_2->addWidget(label_2);

        label_4 = new QLabel(scrollAreaWidgetContents_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setScaledContents(false);

        verticalLayout_2->addWidget(label_4);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_7 = new QLabel(scrollAreaWidgetContents_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);

        verticalLayout_3->addWidget(label_7);

        label_3 = new QLabel(scrollAreaWidgetContents_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setScaledContents(false);

        verticalLayout_3->addWidget(label_3);

        label_5 = new QLabel(scrollAreaWidgetContents_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setScaledContents(false);

        verticalLayout_3->addWidget(label_5);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_14 = new QLabel(scrollAreaWidgetContents_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font1);

        verticalLayout_9->addWidget(label_14);

        label_10 = new QLabel(scrollAreaWidgetContents_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_9->addWidget(label_10);

        label_12 = new QLabel(scrollAreaWidgetContents_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_9->addWidget(label_12);


        horizontalLayout_2->addLayout(verticalLayout_9);


        verticalLayout_5->addLayout(horizontalLayout_2);

        label_8 = new QLabel(scrollAreaWidgetContents_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        verticalLayout_5->addWidget(label_8);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_9 = new QLabel(scrollAreaWidgetContents_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);

        verticalLayout_11->addWidget(label_9);

        label_11 = new QLabel(scrollAreaWidgetContents_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_11->addWidget(label_11);

        label_13 = new QLabel(scrollAreaWidgetContents_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_11->addWidget(label_13);


        horizontalLayout_3->addLayout(verticalLayout_11);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_15 = new QLabel(scrollAreaWidgetContents_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font1);

        verticalLayout_10->addWidget(label_15);

        label_16 = new QLabel(scrollAreaWidgetContents_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_10->addWidget(label_16);

        label_17 = new QLabel(scrollAreaWidgetContents_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        verticalLayout_10->addWidget(label_17);


        horizontalLayout_3->addLayout(verticalLayout_10);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_18 = new QLabel(scrollAreaWidgetContents_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font1);

        verticalLayout_7->addWidget(label_18);

        label_19 = new QLabel(scrollAreaWidgetContents_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        verticalLayout_7->addWidget(label_19);

        label_20 = new QLabel(scrollAreaWidgetContents_4);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        verticalLayout_7->addWidget(label_20);


        horizontalLayout_3->addLayout(verticalLayout_7);


        verticalLayout_5->addLayout(horizontalLayout_3);

        label_21 = new QLabel(scrollAreaWidgetContents_4);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font);

        verticalLayout_5->addWidget(label_21);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        label_22 = new QLabel(scrollAreaWidgetContents_4);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font1);

        verticalLayout_12->addWidget(label_22);

        label_23 = new QLabel(scrollAreaWidgetContents_4);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        verticalLayout_12->addWidget(label_23);


        horizontalLayout_4->addLayout(verticalLayout_12);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        label_25 = new QLabel(scrollAreaWidgetContents_4);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setFont(font1);

        verticalLayout_13->addWidget(label_25);

        label_26 = new QLabel(scrollAreaWidgetContents_4);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        verticalLayout_13->addWidget(label_26);


        horizontalLayout_4->addLayout(verticalLayout_13);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_28 = new QLabel(scrollAreaWidgetContents_4);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setFont(font1);

        verticalLayout_8->addWidget(label_28);

        label_29 = new QLabel(scrollAreaWidgetContents_4);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        verticalLayout_8->addWidget(label_29);


        horizontalLayout_4->addLayout(verticalLayout_8);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        label_24 = new QLabel(scrollAreaWidgetContents_4);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setFont(font1);

        verticalLayout_15->addWidget(label_24);

        label_31 = new QLabel(scrollAreaWidgetContents_4);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        verticalLayout_15->addWidget(label_31);


        horizontalLayout_5->addLayout(verticalLayout_15);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        label_32 = new QLabel(scrollAreaWidgetContents_4);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setFont(font1);

        verticalLayout_16->addWidget(label_32);

        label_33 = new QLabel(scrollAreaWidgetContents_4);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        verticalLayout_16->addWidget(label_33);


        horizontalLayout_5->addLayout(verticalLayout_16);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        label_34 = new QLabel(scrollAreaWidgetContents_4);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setFont(font1);

        verticalLayout_17->addWidget(label_34);

        label_35 = new QLabel(scrollAreaWidgetContents_4);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        verticalLayout_17->addWidget(label_35);


        horizontalLayout_5->addLayout(verticalLayout_17);


        verticalLayout_5->addLayout(horizontalLayout_5);

        scrollArea->setWidget(scrollAreaWidgetContents_4);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 700, 22));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(a_open);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        a_open->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "1.1.\320\255\320\272\320\262\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217 \320\263\320\270\321\201\321\202\320\276\320\263\321\200\320\260\320\274\320\274\321\213 \320\270 \320\233\320\270\320\275\320\265\320\271\320\275\320\276\320\265 \320\272\320\276\320\275\321\202\321\200\320\260\321\201\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\236\321\200\320\270\320\263\320\270\320\275\320\260\320\273", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\255\320\272\320\262\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217 \320\263\320\270\321\201\321\202\320\276\320\263\321\200\320\260\320\274\320\274\321\213", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\320\233\320\270\320\275\320\265\320\271\320\275\320\276\320\265 \320\272\320\276\320\275\321\202\321\200\320\260\321\201\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "1.2.\320\241\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265 \321\215\320\272\320\262\320\260\320\273\320\270\320\267\320\260\321\206\320\270\320\271", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\236\321\200\320\270\320\263\320\270\320\275\320\260\320\273", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\255\320\272\320\262\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217(RGB)", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "\320\255\320\272\320\262\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217(HSV)", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "2. \320\240\320\265\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217 \320\262\321\213\321\201\320\276\320\272\320\276\321\207\320\260\321\201\321\202\320\276\321\202\320\275\321\213\321\205 \321\204\320\270\320\273\321\214\321\202\321\200\320\276\320\262(\320\277\320\276\320\262\321\213\321\210\320\265\320\275\320\270\320\265 \321\200\320\265\320\267\320\272\320\276\321\201\321\202\320\270)", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "\320\236\321\200\320\270\320\263\320\270\320\275\320\260\320\273", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "\320\244\320\270\320\273\321\214\321\202\321\200 1", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "\320\244\320\270\320\273\321\214\321\202\321\200 2", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "\320\244\320\270\320\273\321\214\321\202\321\200 3", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "\320\244\320\270\320\273\321\214\321\202\321\200 4", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "\320\244\320\270\320\273\321\214\321\202\321\200 5", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
