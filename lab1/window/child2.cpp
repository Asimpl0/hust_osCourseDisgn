#include "child2.h"
#include "ui_child2.h"
#include <unistd.h>

#include<time.h>

#include <QThread>
#include <QtConcurrent>
#include <QFuture>

child2::child2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::child2)
{
    ui->setupUi(this);
    int pid=getpid();
    ui->label_1->setText(QString::number(pid));
    ui->label_2->setText("Start Show Time!");
    QFuture<void> res = QtConcurrent::run(this, &child2::run);


}

void child2::run(){
    time_t now;    //实例化time_t结构
    struct tm  *timenow;    //实例化tm结构指针

    for(int i=0;i<100;i++){
        time(&now);

        //time函数读取现在的时间(国际标准时间非北京时间)，然后传值给now

        timenow = localtime(&now);
        //localtime函数把从time取得的时间now换算成你电脑中的时间(就是你设置的地区)
        sleep(1);
        ui->textBrowser->append(asctime(timenow));
        ui->textBrowser->moveCursor(QTextCursor::End);
    }
}

child2::~child2()
{
    delete ui;
}
