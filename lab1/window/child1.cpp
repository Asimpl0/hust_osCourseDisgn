#include "child1.h"
#include "ui_child1.h"
#include <unistd.h>

#include <QDebug>
#include <QThread>
#include <QtConcurrent>
#include <QFuture>

child1::child1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::child1)
{
    ui->setupUi(this);
    int pid=getpid();
    ui->label_1->setText(QString::number(pid));
    ui->label_2->setText("Start accumulation!");
     QFuture<void> res = QtConcurrent::run(this, &child1::run);
}
void child1::run(){
    int i=0,sum=0;

    for(i=0;i<1000;i++){
        sum+=i;
        sleep(1);
        ui->textBrowser->append(QString::number(sum)+"\n");
        ui->textBrowser->moveCursor(QTextCursor::End);
    }
    exit(0);
}

child1::~child1()
{
    delete ui;
}
