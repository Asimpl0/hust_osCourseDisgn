/********************************************************************************
** Form generated from reading UI file 'child2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHILD2_H
#define UI_CHILD2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_child2
{
public:
    QLabel *label;
    QLabel *label_1;
    QTextBrowser *textBrowser;
    QLabel *label_2;

    void setupUi(QDialog *child2)
    {
        if (child2->objectName().isEmpty())
            child2->setObjectName(QString::fromUtf8("child2"));
        child2->resize(400, 381);
        label = new QLabel(child2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 20, 31, 17));
        label_1 = new QLabel(child2);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(190, 20, 67, 17));
        textBrowser = new QTextBrowser(child2);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(70, 60, 256, 192));
        label_2 = new QLabel(child2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 310, 171, 17));

        retranslateUi(child2);

        QMetaObject::connectSlotsByName(child2);
    } // setupUi

    void retranslateUi(QDialog *child2)
    {
        child2->setWindowTitle(QApplication::translate("child2", "Dialog", nullptr));
        label->setText(QApplication::translate("child2", "pid: ", nullptr));
        label_1->setText(QApplication::translate("child2", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("child2", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class child2: public Ui_child2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHILD2_H
