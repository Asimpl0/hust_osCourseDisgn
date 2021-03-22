#ifndef CHILD2_H
#define CHILD2_H
#include<unistd.h>
#include <QDialog>

namespace Ui {
class child2;
}

class child2 : public QDialog
{
    Q_OBJECT

public:
    explicit child2(QWidget *parent = nullptr);
    void run();
    ~child2();

private:
    Ui::child2 *ui;
};

#endif // CHILD2_H
