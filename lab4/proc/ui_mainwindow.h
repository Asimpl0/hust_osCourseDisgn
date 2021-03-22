/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "qchartview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QChartView *graphicsView;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QChartView *graphicsView_2;
    QLabel *label_6;
    QLabel *label_7;
    QChartView *graphicsView_3;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QWidget *tab_2;
    QListWidget *listWidget;
    QPushButton *pushButton_3;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLineEdit *lineEdit;
    QPushButton *pushButton_4;
    QWidget *tab_3;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *label_38;
    QLabel *label_39;
    QLabel *label_40;
    QLabel *label_41;
    QLabel *label_42;
    QLabel *label_43;
    QLabel *label_46;
    QLabel *label_47;
    QWidget *tab_4;
    QLabel *label_44;
    QLabel *label_45;
    QLabel *label_48;
    QLabel *label_49;
    QLabel *label_50;
    QLabel *label_51;
    QLabel *label_52;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(990, 923);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 991, 741));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        tabWidget->setFont(font);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        graphicsView = new QChartView(tab);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(210, 60, 461, 192));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 60, 191, 31));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 140, 81, 31));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(false);
        font2.setWeight(50);
        label_4->setFont(font2);
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 280, 191, 31));
        label_5->setFont(font1);
        graphicsView_2 = new QChartView(tab);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(210, 270, 461, 192));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(70, 360, 81, 31));
        label_6->setFont(font2);
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 490, 191, 31));
        label_7->setFont(font1);
        graphicsView_3 = new QChartView(tab);
        graphicsView_3->setObjectName(QString::fromUtf8("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(210, 480, 461, 192));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(60, 570, 101, 31));
        label_8->setFont(font2);
        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(700, 310, 241, 31));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setWeight(75);
        label_9->setFont(font3);
        label_10 = new QLabel(tab);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(700, 350, 241, 31));
        label_10->setFont(font3);
        label_11 = new QLabel(tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(700, 390, 241, 51));
        QFont font4;
        font4.setPointSize(19);
        font4.setBold(true);
        font4.setWeight(75);
        label_11->setFont(font4);
        label_12 = new QLabel(tab);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(700, 520, 241, 31));
        label_12->setFont(font3);
        label_13 = new QLabel(tab);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(700, 560, 241, 31));
        label_13->setFont(font3);
        label_14 = new QLabel(tab);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(700, 600, 241, 51));
        label_14->setFont(font4);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        listWidget = new QListWidget(tab_2);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(0, 0, 751, 611));
        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(90, 640, 89, 25));
        pushButton_3->setFont(font);
        label_19 = new QLabel(tab_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(770, 170, 81, 31));
        label_20 = new QLabel(tab_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(860, 170, 81, 31));
        QFont font5;
        font5.setPointSize(16);
        font5.setBold(false);
        font5.setWeight(50);
        label_20->setFont(font5);
        label_21 = new QLabel(tab_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(770, 210, 81, 31));
        label_22 = new QLabel(tab_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(860, 210, 81, 31));
        label_22->setFont(font5);
        label_23 = new QLabel(tab_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(770, 250, 81, 31));
        label_24 = new QLabel(tab_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(860, 250, 81, 31));
        label_24->setFont(font5);
        label_25 = new QLabel(tab_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(770, 290, 81, 31));
        label_26 = new QLabel(tab_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(860, 290, 81, 31));
        label_26->setFont(font5);
        lineEdit = new QLineEdit(tab_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(770, 350, 161, 61));
        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(800, 420, 111, 25));
        pushButton_4->setFont(font3);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_27 = new QLabel(tab_3);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(30, 20, 131, 41));
        label_28 = new QLabel(tab_3);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(70, 120, 131, 41));
        QFont font6;
        font6.setPointSize(17);
        font6.setBold(false);
        font6.setWeight(50);
        label_28->setFont(font6);
        label_29 = new QLabel(tab_3);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(70, 160, 131, 41));
        label_29->setFont(font6);
        label_30 = new QLabel(tab_3);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(70, 200, 131, 41));
        label_30->setFont(font6);
        label_31 = new QLabel(tab_3);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(70, 240, 131, 41));
        label_31->setFont(font6);
        label_32 = new QLabel(tab_3);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(190, 130, 571, 41));
        label_32->setFont(font5);
        label_33 = new QLabel(tab_3);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(190, 170, 321, 41));
        label_33->setFont(font5);
        label_34 = new QLabel(tab_3);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(190, 200, 321, 41));
        label_34->setFont(font5);
        label_35 = new QLabel(tab_3);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(190, 240, 321, 41));
        label_35->setFont(font5);
        label_36 = new QLabel(tab_3);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(70, 80, 131, 41));
        label_36->setFont(font6);
        label_37 = new QLabel(tab_3);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(190, 90, 321, 41));
        label_37->setFont(font5);
        label_38 = new QLabel(tab_3);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(10, 290, 161, 41));
        label_39 = new QLabel(tab_3);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(70, 340, 131, 41));
        label_39->setFont(font6);
        label_40 = new QLabel(tab_3);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(190, 350, 321, 41));
        label_40->setFont(font5);
        label_41 = new QLabel(tab_3);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(70, 390, 131, 41));
        label_41->setFont(font6);
        label_42 = new QLabel(tab_3);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setGeometry(QRect(190, 410, 321, 41));
        label_42->setFont(font5);
        label_43 = new QLabel(tab_3);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setGeometry(QRect(10, 450, 161, 41));
        label_46 = new QLabel(tab_3);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setGeometry(QRect(70, 520, 131, 41));
        label_46->setFont(font6);
        label_47 = new QLabel(tab_3);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setGeometry(QRect(190, 520, 321, 41));
        label_47->setFont(font5);
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        label_44 = new QLabel(tab_4);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setGeometry(QRect(100, 90, 131, 51));
        label_45 = new QLabel(tab_4);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(230, 90, 161, 51));
        label_45->setFont(font5);
        label_48 = new QLabel(tab_4);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setGeometry(QRect(150, 140, 71, 51));
        label_49 = new QLabel(tab_4);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setGeometry(QRect(230, 140, 161, 51));
        label_49->setFont(font5);
        label_50 = new QLabel(tab_4);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setGeometry(QRect(150, 190, 71, 51));
        label_51 = new QLabel(tab_4);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setGeometry(QRect(230, 190, 161, 51));
        label_51->setFont(font5);
        label_52 = new QLabel(tab_4);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        label_52->setGeometry(QRect(230, 240, 441, 51));
        label_52->setFont(font5);
        tabWidget->addTab(tab_4, QString());
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(730, 870, 101, 31));
        QFont font7;
        font7.setPointSize(15);
        font7.setBold(true);
        font7.setItalic(false);
        font7.setWeight(75);
        pushButton->setFont(font7);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(860, 870, 101, 31));
        QFont font8;
        font8.setPointSize(15);
        font8.setBold(true);
        font8.setWeight(75);
        pushButton_2->setFont(font8);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 750, 111, 41));
        QFont font9;
        font9.setPointSize(17);
        font9.setBold(true);
        font9.setWeight(75);
        label->setFont(font9);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 750, 371, 41));
        QFont font10;
        font10.setPointSize(17);
        label_2->setFont(font10);
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(30, 800, 111, 41));
        label_15->setFont(font9);
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(150, 800, 371, 41));
        label_16->setFont(font10);
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(20, 840, 121, 41));
        label_17->setFont(font9);
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(150, 840, 371, 41));
        label_18->setFont(font10);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "CPU \344\275\277\347\224\250\346\203\205\345\206\265", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "CPU : ", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\345\206\205\345\255\230 \344\275\277\347\224\250\346\203\205\345\206\265", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\345\206\205\345\255\230 :", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "SWAP \344\275\277\347\224\250\346\203\205\345\206\265", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "SWAP :", nullptr));
        label_9->setText(QString());
        label_10->setText(QString());
        label_11->setText(QString());
        label_12->setText(QString());
        label_13->setText(QString());
        label_14->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\345\206\205\345\255\230\344\277\241\346\201\257", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "kill", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "\350\277\233\347\250\213\346\225\260 :", nullptr));
        label_20->setText(QString());
        label_21->setText(QApplication::translate("MainWindow", "\350\277\220\350\241\214\346\225\260 :", nullptr));
        label_22->setText(QString());
        label_23->setText(QApplication::translate("MainWindow", "\347\235\241\347\234\240\346\225\260 :", nullptr));
        label_24->setText(QString());
        label_25->setText(QApplication::translate("MainWindow", "\345\203\265\346\255\273\346\225\260 :", nullptr));
        label_26->setText(QString());
        pushButton_4->setText(QApplication::translate("MainWindow", "RUN", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\350\277\233\347\250\213\344\277\241\346\201\257", nullptr));
        label_27->setText(QApplication::translate("MainWindow", "\350\256\241\347\256\227\346\234\272\344\277\241\346\201\257", nullptr));
        label_28->setText(QApplication::translate("MainWindow", "CPU\345\220\215\347\247\260 :", nullptr));
        label_29->setText(QApplication::translate("MainWindow", "CPU\347\261\273\345\236\213 :", nullptr));
        label_30->setText(QApplication::translate("MainWindow", "CPU\351\242\221\347\216\207 :", nullptr));
        label_31->setText(QApplication::translate("MainWindow", "CPU\345\244\247\345\260\217 :", nullptr));
        label_32->setText(QString());
        label_33->setText(QString());
        label_34->setText(QString());
        label_35->setText(QString());
        label_36->setText(QApplication::translate("MainWindow", "\344\270\273\346\234\272\345\220\215\347\247\260 :", nullptr));
        label_37->setText(QString());
        label_38->setText(QApplication::translate("MainWindow", "\346\223\215\344\275\234\347\263\273\347\273\237\344\277\241\346\201\257", nullptr));
        label_39->setText(QApplication::translate("MainWindow", "\347\263\273\347\273\237\347\261\273\345\236\213:", nullptr));
        label_40->setText(QString());
        label_41->setText(QApplication::translate("MainWindow", "\347\263\273\347\273\237\347\211\210\346\234\254:", nullptr));
        label_42->setText(QString());
        label_43->setText(QApplication::translate("MainWindow", "\347\263\273\347\273\237\347\233\270\345\205\263\346\227\266\351\227\264", nullptr));
        label_46->setText(QApplication::translate("MainWindow", "\350\277\220\350\241\214\346\227\266\351\227\264:", nullptr));
        label_47->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\347\263\273\347\273\237\344\277\241\346\201\257", nullptr));
        label_44->setText(QApplication::translate("MainWindow", "\345\272\224\347\224\250\345\220\215\347\247\260 :", nullptr));
        label_45->setText(QApplication::translate("MainWindow", "TaskManager", nullptr));
        label_48->setText(QApplication::translate("MainWindow", " \344\275\234\350\200\205:", nullptr));
        label_49->setText(QApplication::translate("MainWindow", "JAN", nullptr));
        label_50->setText(QApplication::translate("MainWindow", " \346\227\266\351\227\264:", nullptr));
        label_51->setText(QApplication::translate("MainWindow", "2021.3.20", nullptr));
        label_52->setText(QApplication::translate("MainWindow", "CopyRight \302\256 2021-2021 All Rights Reserved.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "shutdown", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "reboot", nullptr));
        label->setText(QApplication::translate("MainWindow", "\347\263\273\347\273\237\346\227\266\351\227\264 :", nullptr));
        label_2->setText(QString());
        label_15->setText(QApplication::translate("MainWindow", "CPU \344\275\277\347\224\250 :", nullptr));
        label_16->setText(QString());
        label_17->setText(QApplication::translate("MainWindow", "MEM \344\275\277\347\224\250 :", nullptr));
        label_18->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
