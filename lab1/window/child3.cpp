#include "child3.h"
#include "ui_child3.h"
#include <unistd.h>


#include <QThread>
#include <QtConcurrent>
#include <QFuture>

child3::child3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::child3)
{
    ui->setupUi(this);
    int pid=getpid();
    ui->label_1->setText(QString::number(pid));
    ui->label_2->setText("Start multiplying!");
    QFuture<void> res = QtConcurrent::run(this, &child3::run);
}

void child3::run(){

    int m=0,total=0;

    for(m=1;m<1000;m++){
        total++;
        sleep(1);
        ui->textBrowser->append(QString::number(total)+"\n");
        ui->textBrowser->moveCursor(QTextCursor::End);
    }
    exit(0);

}

child3::~child3()
{
    delete ui;
}
