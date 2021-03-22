#include "child1.h"
#include "child2.h"
#include "child3.h"
#include<unistd.h>

#include <QApplication>

int main(int argc, char *argv[])
{

    int pid_1=0;
    int pid_2=0;
    int pid_3=0;

    //create child1
    if((pid_1==fork())==0){
        QApplication a1(argc, argv);
        child1 w1;
        w1.setWindowTitle("Child Process1");
        w1.show();

        a1.exec();
        exit(0);
    }
    else if((pid_2==fork())==0){
        QApplication a2(argc, argv);
        child2 w2;
        w2.setWindowTitle("Child Process2");
        w2.show();
        a2.exec();
        exit(0);
    }
    else if((pid_3==fork())==0){
        QApplication a3(argc, argv);
        child3 w3;
        w3.setWindowTitle("Child Process3");
        w3.show();
        a3.exec();
        exit(0);
    }




    return 0;
}
