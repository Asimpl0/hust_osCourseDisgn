#ifndef CHILD1_H
#define CHILD1_H
#include<unistd.h>
#include <QDialog>

namespace Ui {
class child1;
}

class child1 : public QDialog
{
    Q_OBJECT

public:
    explicit child1(QWidget *parent = nullptr);
    void run();
    ~child1();

private:
    Ui::child1 *ui;
};

#endif // CHILD1_H
