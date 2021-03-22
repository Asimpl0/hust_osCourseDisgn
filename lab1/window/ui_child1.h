/********************************************************************************
** Form generated from reading UI file 'child1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHILD1_H
#define UI_CHILD1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_child1
{
public:
    QLabel *label;
    QLabel *label_1;
    QTextBrowser *textBrowser;
    QLabel *label_2;

    void setupUi(QDialog *child1)
    {
        if (child1->objectName().isEmpty())
            child1->setObjectName(QString::fromUtf8("child1"));
        child1->resize(400, 365);
        label = new QLabel(child1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 10, 31, 17));
        label_1 = new QLabel(child1);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(180, 10, 67, 17));
        textBrowser = new QTextBrowser(child1);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(70, 60, 256, 201));
        label_2 = new QLabel(child1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 300, 171, 17));

        retranslateUi(child1);

        QMetaObject::connectSlotsByName(child1);
    } // setupUi

    void retranslateUi(QDialog *child1)
    {
        child1->setWindowTitle(QApplication::translate("child1", "Dialog", nullptr));
        label->setText(QApplication::translate("child1", "pid: ", nullptr));
        label_1->setText(QApplication::translate("child1", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("child1", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class child1: public Ui_child1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHILD1_H
