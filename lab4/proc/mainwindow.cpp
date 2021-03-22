#include "mainwindow.h"
#include "ui_mainwindow.h"

int i1=0;
int i2=0;
int i3=0;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
      cpu_series(0),
      mem_series(0),
      swap_series(0),
      cpu_axisX(new QValueAxis()),
      cpu_axisY(new QValueAxis()),
      mem_axisX(new QValueAxis()),
      mem_axisY(new QValueAxis()),
      swap_axisX(new QValueAxis()),
      swap_axisY(new QValueAxis()),
      cpu_x(0),
      cpu_y(0),
      mem_x(0),
      mem_y(0),
      swap_x(0),
      swap_y(0),
      cpu_chart(new QChart()),
      mem_chart(new QChart()),
      swap_chart(new QChart())
{
    ui->setupUi(this);
    //set default page 0
    ui->tabWidget->setCurrentIndex(0);
    //start timer
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timerUpdate()));
    connect(timer,SIGNAL(timeout()),this,SLOT(timerRefresh()));
    timer->start(1000);

    //draw chart
    QObject::connect(&m_timer, &QTimer::timeout, this, &MainWindow::handleCpu);
    QObject::connect(&m_timer, &QTimer::timeout, this, &MainWindow::handleMem);
    QObject::connect(&m_timer, &QTimer::timeout, this, &MainWindow::handleSwap);
    m_timer.setInterval(1500);

    cpu_series = new QSplineSeries(this);
    QPen red(Qt::red);
    red.setWidth(3);
    QPen green(Qt::blue);
    green.setWidth(3);
    QPen yellow(Qt::green);
    yellow.setWidth(3);
    cpu_series->setPen(red);
    cpu_series->append(cpu_x, cpu_y);

    //add chart to cpu graphic
    cpu_chart->addSeries(cpu_series);
    cpu_chart->addAxis(cpu_axisX,Qt::AlignBottom);
    cpu_chart->addAxis(cpu_axisY,Qt::AlignLeft);
    cpu_series->attachAxis(cpu_axisX);
    cpu_series->attachAxis(cpu_axisY);
    cpu_axisX->setTickCount(20);
    cpu_axisX->setRange(0, 120);
    cpu_axisY->setRange(0, 100);

    cpu_chart->setMargins(QMargins(0, 0, 0, 0));//设置内边界全部为0
    ui->graphicsView->setChart(cpu_chart);
    cpu_chart->layout()->setContentsMargins(0, 0, 0, 0);
    cpu_chart->setBackgroundRoundness(0);
    cpu_chart->legend()->hide();

    mem_series = new QSplineSeries(this);
    mem_series->setPen(green);
    mem_series->append(mem_x, mem_y);

    //add chart to cpu graphic
    mem_chart->addSeries(mem_series);
    mem_chart->addAxis(mem_axisX,Qt::AlignBottom);
    mem_chart->addAxis(mem_axisY,Qt::AlignLeft);
    mem_series->attachAxis(mem_axisX);
    mem_series->attachAxis(mem_axisY);
    mem_axisX->setTickCount(20);
    mem_axisX->setRange(0, 120);
    mem_axisY->setRange(0, 100);

    mem_chart->setMargins(QMargins(0, 0, 0, 0));//设置内边界全部为0
    ui->graphicsView_2->setChart(mem_chart);
    mem_chart->layout()->setContentsMargins(0, 0, 0, 0);
    mem_chart->setBackgroundRoundness(0);
    mem_chart->legend()->hide();

    swap_series = new QSplineSeries(this);
    swap_series->setPen(yellow);
    swap_series->append(swap_x, swap_y);

    //add chart to cpu graphic
    swap_chart->addSeries(swap_series);
    swap_chart->addAxis(swap_axisX,Qt::AlignBottom);
    swap_chart->addAxis(swap_axisY,Qt::AlignLeft);
    swap_series->attachAxis(swap_axisX);
    swap_series->attachAxis(swap_axisY);
    swap_axisX->setTickCount(20);
    swap_axisX->setRange(0, 120);
    swap_axisY->setRange(0, 50);

    swap_chart->setMargins(QMargins(0, 0, 0, 0));//设置内边界全部为0
    ui->graphicsView_3->setChart(swap_chart);
    swap_chart->layout()->setContentsMargins(0, 0, 0, 0);
    swap_chart->setBackgroundRoundness(0);
    swap_chart->legend()->hide();

    m_timer.start();



}

MainWindow::~MainWindow()
{
    delete ui;
    delete timer;
}
//show system time
void MainWindow::timerUpdate()
{
    QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("yyyy-MM-dd hh:mm:ss dddd");
    ui->label_2->setText(str);
    ui->label_16->setText(QString::number(cpu_use, 'g', 4)+"%");
    ui->label_18->setText(QString::number(mem_use, 'g', 4)+"%");
}

//refresh the chart
void MainWindow::timerRefresh(){

    int index=ui->tabWidget->currentIndex();
    //refresh page 0

    showInfo(index);
}

void MainWindow::on_pushButton_clicked()
{
    system("halt");
}

void MainWindow::on_pushButton_2_clicked()
{
    system("reboot");
}

//logic to show all page
void MainWindow::showInfo(int index){
    QString tempStr; //to read system str
    QFile tempFile; //to open system file
    int pos; //positon to read file

    //logic for page 0
    if(index==0){

        tempFile.setFileName("/proc/meminfo"); //get mem usage
        if(!tempFile.open(QIODevice::ReadOnly)){
            //read failed, return error
            return;
        }
        QString memTotal;
        QString memFree;
        QString memUsed;
        QString swapTotal;
        QString swapFree;
        QString swapUsed;
        int nMemTotal, nMemFree, nMemUsed, nSwapTotal, nSwapFree, nSwapUsed;
        //to get num
        while (1)
        {
            tempStr = tempFile.readLine();
            pos = tempStr.indexOf("MemTotal");
            if (pos != -1)
            {
                memTotal = tempStr.mid(pos+10, tempStr.length()-13);
                memTotal = memTotal.trimmed();
                nMemTotal = memTotal.toInt()/1024;
            }
            else if (pos = tempStr.indexOf("MemFree"), pos != -1)
            {
                memFree = tempStr.mid(pos+9, tempStr.length()-12);
                memFree = memFree.trimmed();
                nMemFree = memFree.toInt()/1024;
            }
            else if (pos = tempStr.indexOf("SwapTotal"), pos != -1)
            {
                swapTotal = tempStr.mid(pos+11, tempStr.length()-14);
                swapTotal = swapTotal.trimmed();
                nSwapTotal = swapTotal.toInt()/1024;
            }
            else if (pos = tempStr.indexOf("SwapFree"), pos != -1)
            {
                swapFree = tempStr.mid(pos+10,tempStr.length()-13);

                swapFree = swapFree.trimmed();
                nSwapFree = swapFree.toInt()/1024;
                break;
            }
        }
        //change to string
        nMemUsed = nMemTotal - nMemFree;
        nSwapUsed = nSwapTotal - nSwapFree;
        memUsed = QString::number(nMemUsed, 10);
        swapUsed = QString::number(nSwapUsed, 10);
        memFree = QString::number(nMemFree, 10);
        memTotal = QString::number(nMemTotal, 10);
        swapFree = QString::number(nSwapFree, 10);
        swapTotal = QString::number(nSwapTotal, 10);

        ui->label_9->setText("memUsed : "+memUsed+" MB");
        ui->label_11->setText("memTotal : "+memTotal+" MB");
        ui->label_12->setText("swapUsed : "+swapUsed+" MB");
        ui->label_13->setText("swapFree : "+swapFree+" MB");
        ui->label_14->setText("swapTotal : "+swapTotal+" MB");
    }
    else if(index==1){
        //        ui->listWidget->clear();
        QListWidgetItem *title = new QListWidgetItem("PID\t" + QString::fromUtf8("名称") + "\t\t\t" +
                                                     QString::fromUtf8("状态") + "\t" +
                                                     QString::fromUtf8("优先级") + "\t" +
                                                     QString::fromUtf8("占用内存"), ui->listWidget);
        ui->listWidget->addItem(title);
        QDir qd("/proc");
        QStringList qsList=qd.entryList();
        QString qs = qsList.join("\n");
        QString id_of_pro;
        bool ok;
        int find_start = 3;
        int a, b;
        int nProPid; //进程PID
        int number_of_sleep = 0, number_of_run = 0, number_of_zombie = 0;
        int totalProNum = 0; //进程总数
        QString proName; //进程名
        QString proState; //进程状态
        QString proPri; //进程优先级
        QString proMem; //进程占用内存

        //begin to read proc
        while(1){
            //获取进程PID
            a = qs.indexOf("\n", find_start);
            b = qs.indexOf("\n", a+1);
            find_start = b;
            id_of_pro = qs.mid(a+1, b-a-1);
            totalProNum++;
            nProPid = id_of_pro.toInt(&ok, 10);
            if(!ok)
            {
                break;
            }
            //打开PID所对应的进程状态文件
            tempFile.setFileName("/proc/" + id_of_pro + "/stat");
            if ( !tempFile.open(QIODevice::ReadOnly) )
            {
                QMessageBox::warning(this, tr("warning"), tr("The pid stat file can not open!"), QMessageBox::Yes);
                return;
            }
            tempStr = tempFile.readLine();
            if (tempStr.length() == 0)
            {
                break;
            }
            a = tempStr.indexOf("(");
            b = tempStr.indexOf(")");
            proName = tempStr.mid(a+1, b-a-1);
            proName.trimmed(); //删除两端的空格
            proState = tempStr.section(" ", 2, 2);
            proPri = tempStr.section(" ", 17, 17);
            proMem = tempStr.section(" ", 22, 22);
            switch ( proState.at(0).toLatin1() )
            {
            case 'S':   number_of_sleep++; break; //Sleep
            case 'R':   number_of_run++; break; //Running
            case 'Z':   number_of_zombie++; break; //Zombie
            default :   break;
            }
            if(proName.length() <=6){
                QListWidgetItem *item = new QListWidgetItem(id_of_pro + "\t" +
                                                            proName + "\t\t\t" +
                                                            proState + "\t" +
                                                            proPri + "\t" +
                                                            proMem, ui->listWidget);
                ui->listWidget->addItem(item);}
            else if (proName.length() >= 14)
            {
                QListWidgetItem *item = new QListWidgetItem(id_of_pro + "\t" +
                                                            proName + "\t" +
                                                            proState + "\t" +
                                                            proPri + "\t" +
                                                            proMem, ui->listWidget);
                ui->listWidget->addItem(item);}
            else
            {
                QListWidgetItem *item = new QListWidgetItem(id_of_pro + "\t" +
                                                            proName + "\t\t" +
                                                            proState + "\t" +
                                                            proPri + "\t" +
                                                            proMem, ui->listWidget);
                ui->listWidget->addItem(item);
            }




            QString temp;
            temp = QString::number(totalProNum, 10);
            ui->label_20->setText(temp);
            temp = QString::number(number_of_run, 10);
            ui->label_22->setText(temp);
            temp = QString::number(number_of_sleep, 10);
            ui->label_24->setText(temp);
            temp = QString::number(number_of_zombie, 10);
            ui->label_26->setText(temp);
            tempFile.close(); //关闭该PID进程的状态文件
        }
    }
    if(index==2){
        tempFile.setFileName("/proc/sys/kernel/hostname"); //打开host信息文件
        if ( !tempFile.open(QIODevice::ReadOnly) )
        {
            QMessageBox::warning(this, tr("warning"), tr("The hostname file can not open!"), QMessageBox::Yes);
            return;
        }
        QString host;
        host = tempFile.readLine();
        ui->label_37->setText(host);
        tempFile.close();

        tempFile.setFileName("/proc/sys/kernel/ostype"); //打开host信息文件
        if ( !tempFile.open(QIODevice::ReadOnly) )
        {
            QMessageBox::warning(this, tr("warning"), tr("The hostname file can not open!"), QMessageBox::Yes);
            return;
        }
        QString type;
        type = tempFile.readLine();
        ui->label_40->setText(type);
        tempFile.close();

        tempFile.setFileName("/proc/sys/kernel/osrelease"); //打开host信息文件
        if ( !tempFile.open(QIODevice::ReadOnly) )
        {
            QMessageBox::warning(this, tr("warning"), tr("The hostname file can not open!"), QMessageBox::Yes);
            return;
        }
        QString release;
        release = tempFile.readLine();
        ui->label_42->setText(release);
        tempFile.close();

        tempFile.setFileName("/proc/uptime");
        if ( !tempFile.open(QIODevice::ReadOnly) )
        {
            QMessageBox::warning(this, tr("warning"), tr("The uptime file can not open!"), QMessageBox::Yes);
            return;
        }
        tempStr = tempFile.readLine();
        int s=tempStr.indexOf(' ');

        QString time = tempStr.mid(0, s-1);
        ui->label_47->setText(time+" s");

        tempFile.setFileName("/proc/cpuinfo"); //打开CPU信息文件

        if ( !tempFile.open(QIODevice::ReadOnly) )
        {
            QMessageBox::warning(this, tr("warning"), tr("The cpuinfo file can not open!"), QMessageBox::Yes);
            return;
        }
        while(1){
            tempStr = tempFile.readLine();
            if(tempStr==NULL){//文件读完，跳出
                break;
            }
            pos = tempStr.indexOf("model name");
            if (pos != -1)
            {
                pos += 13; //跳过前面的"model name："所占用的字符
                QString *cpu_name = new QString( tempStr.mid(pos, tempStr.length()-13) );
                ui->label_32->setText(*cpu_name);
            }
            else if (pos = tempStr.indexOf("vendor_id"), pos != -1)
            {
                pos += 12; //跳过前面的"vendor_id："所占用的字符
                QString *cpu_type = new QString( tempStr.mid(pos, tempStr.length()-12) );
                ui->label_33->setText(*cpu_type);
            }
            else if (pos = tempStr.indexOf("cpu MHz"), pos != -1)
            {
                pos += 11; //跳过前面的"cpu MHz："所占用的字符
                QString *cpu_frq = new QString( tempStr.mid(pos, tempStr.length()-11) );
                double cpufrq = cpu_frq->toDouble(); //4核CPU
                cpu_frq->setNum(cpufrq*4);
                ui->label_34->setText(*cpu_frq + " HZ");
            }
            else if (pos = tempStr.indexOf("cache size"), pos!=-1)
            {
                pos += 13; //跳过前面的"cache size："所占用的字符
                QString *cache_size = new QString( tempStr.mid(pos, tempStr.length()-16) );
                int cachesize = cache_size->toInt(); //4核CPU
                cache_size->setNum(cachesize*4);
                ui->label_35->setText(*cache_size + " KB");
            }
        }

    }
}




void MainWindow::handleMem(){
    mem_x=i1++;
    QString tempStr; //to read system str
    QFile tempFile; //to open system file
    int pos; //positon to read file

    tempFile.setFileName("/proc/meminfo"); //get mem usage
    if(!tempFile.open(QIODevice::ReadOnly)){
        //read failed, return error
        return;
    }
    QString memTotal;
    QString memAvailable;
    QString memUsed;

    int nMemTotal, nMemAvailable, nMemUsed;
    //to get num
    while (1)
    {
        tempStr = tempFile.readLine();
        pos = tempStr.indexOf("MemTotal");
        if (pos != -1)
        {
            memTotal = tempStr.mid(pos+10, tempStr.length()-13);
            memTotal = memTotal.trimmed();
            nMemTotal = memTotal.toInt()/1024;
        }
        else if (pos = tempStr.indexOf("MemAvailable"), pos != -1)
        {
            memAvailable = tempStr.mid(pos+13, tempStr.length()-16);
            memAvailable = memAvailable.trimmed();
            nMemAvailable = memAvailable.toInt()/1024;
            break;
        }
    }
    //change to string
    nMemUsed = nMemTotal - nMemAvailable;
    ui->label_10->setText("memAvailable : "+QString::number(nMemAvailable,10)+"MB");
    mem_y=(100.0*nMemUsed/nMemTotal);
    mem_use=mem_y;
    mem_series->append(mem_x, mem_y);
    mem_chart->scroll(1,0);
}

void MainWindow::handleCpu(){
    cpu_x=i2++;

    QFile file;

    //first
    file.setFileName("/proc/stat");
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
        return;
    QString buf1=file.readLine();
    file.close();
    QString user1=buf1.section(" ",2,2);
    QString nice1=buf1.section(" ",3,3);
    QString system1=buf1.section(" ",4,4);
    QString idle1=buf1.section(" ",5,5);
    QString iowait1=buf1.section(" ",6,6);
    QString irq1=buf1.section(" ",7,7);
    QString softirq1=buf1.section(" ",8,8);
    long  total1=user1.toLong()+nice1.toLong()+system1.toULong()+idle1.toULong()+
            iowait1.toLong()+irq1.toULong()+softirq1.toULong();
    sleep(1);

    //second
    file.setFileName("/proc/stat");
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
        return;
    QString buf2=file.readLine();
    file.close();
    QString user2=buf2.section(" ",2,2);
    QString nice2=buf2.section(" ",3,3);
    QString system2=buf2.section(" ",4,4);
    QString idle2=buf2.section(" ",5,5);
    QString iowait2=buf2.section(" ",6,6);
    QString irq2=buf2.section(" ",7,7);
    QString softirq2=buf2.section(" ",8,8);
    long  total2=user2.toLong()+nice2.toLong()+system2.toULong()+idle2.toULong()+
            iowait2.toLong()+irq2.toULong()+softirq2.toULong();

    long total=qAbs(total1-total2);
    long idle=qAbs(idle1.toLong()-idle2.toLong());
    qDebug()<<total;
    qDebug()<<idle;
    qDebug()<<100-100*idle/total;

    qreal usage;
    usage=(qreal)(100.0-100.0*idle/total);
    cpu_y=usage;
    cpu_use=usage;

    cpu_series->append(cpu_x, cpu_y);
    cpu_chart->scroll(1,0);

}

void MainWindow::handleSwap(){
    swap_x=i3++;
    QString tempStr; //to read system str
    QFile tempFile; //to open system file
    int pos; //positon to read file

    tempFile.setFileName("/proc/meminfo"); //get mem usage
    if(!tempFile.open(QIODevice::ReadOnly)){
        //read failed, return error
        return;
    }
    QString swapTotal;
    QString swapFree;
    QString swapUsed;

    int nSwapTotal, nSwapFree, nSwapUsed;
    //to get num
    while (1)
    {
        tempStr = tempFile.readLine();
        if (pos = tempStr.indexOf("SwapTotal"), pos != -1)
        {
            swapTotal = tempStr.mid(pos+11, tempStr.length()-14);
            swapTotal = swapTotal.trimmed();
            nSwapTotal = swapTotal.toInt()/1024;
        }
        else if (pos = tempStr.indexOf("SwapFree"), pos != -1)
        {
            swapFree = tempStr.mid(pos+10,tempStr.length()-13);

            swapFree = swapFree.trimmed();
            nSwapFree = swapFree.toInt()/1024;
            break;
        }
    }
    //change to string
    nSwapUsed = nSwapTotal - nSwapFree;
    swap_y=(100*nSwapUsed/nSwapTotal);
    swap_series->append(swap_x, swap_y);
    swap_chart->scroll(1,0);
}

void MainWindow::on_pushButton_3_clicked()
{
    QListWidgetItem *item=ui->listWidget->currentItem();
    QString pro = item->text();
    pro = pro.section("\t", 0, 0);
    system("kill -9 " + pro.toLatin1());

    QMessageBox::warning(this, tr("kill"), QString::fromUtf8("this process is killed!"), QMessageBox::Yes);
    //回到进程信息tab表
    ui->listWidget->clear();
    showInfo(1);


}

void MainWindow::on_pushButton_4_clicked()
{
    QString torun=ui->lineEdit->text();
    int ok=system("sudo /"+torun.toLatin1());
    //    system("sudo //opt/Qt5.12.10/Tools/QtCreator/bin/qtcreator");
    if(ok==-1){
        QMessageBox::warning(this, tr("run"), QString::fromUtf8("run this process failed!"), QMessageBox::Yes);
    }
    else
        QMessageBox::warning(this, tr("run"), QString::fromUtf8("run this process successed!"), QMessageBox::Yes);
    ui->listWidget->clear();
    showInfo(1);
}
