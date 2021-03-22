/********************************************************************************
** Form generated from reading UI file 'child3.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHILD3_H
#define UI_CHILD3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_child3
{
public:
    QLabel *label;
    QTextBrowser *textBrowser;
    QLabel *label_1;
    QLabel *label_2;

    void setupUi(QDialog *child3)
    {
        if (child3->objectName().isEmpty())
            child3->setObjectName(QString::fromUtf8("child3"));
        child3->resize(400, 374);
        label = new QLabel(child3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 20, 31, 17));
        textBrowser = new QTextBrowser(child3);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(80, 70, 256, 192));
        label_1 = new QLabel(child3);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(180, 20, 67, 17));
        label_2 = new QLabel(child3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 320, 171, 17));

        retranslateUi(child3);

        QMetaObject::connectSlotsByName(child3);
    } // setupUi

    void retranslateUi(QDialog *child3)
    {
        child3->setWindowTitle(QApplication::translate("child3", "Dialog", nullptr));
        label->setText(QApplication::translate("child3", "pid: ", nullptr));
        label_1->setText(QApplication::translate("child3", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("child3", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class child3: public Ui_child3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHILD3_H
