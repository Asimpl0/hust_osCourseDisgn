#ifndef CHILD3_H
#define CHILD3_H
#include<unistd.h>
#include <QDialog>

namespace Ui {
class child3;
}

class child3 : public QDialog
{
    Q_OBJECT

public:
    void run(void);
    explicit child3(QWidget *parent = nullptr);
    ~child3();

private:
    Ui::child3 *ui;
};

#endif // CHILD3_H
