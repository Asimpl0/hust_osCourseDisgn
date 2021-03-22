#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtCharts/QChartView>
#include <QValueAxis>
#include <QSplineSeries>
#include <QtCharts/QChart>
#include <QtCore/QTimer>
#include <QtCharts/QAbstractAxis>
#include <QtCharts/QSplineSeries>
#include <QtCharts/QValueAxis>
#include <QtCore/QRandomGenerator>
#include <QtCore/QDebug>
#include <time.h>
#include <QGraphicsWidget>
#include <QGraphicsLayout>
#include <QDir>
#include <QFileInfo>
#include <QtWidgets/QMessageBox>
QT_CHARTS_BEGIN_NAMESPACE
class QSplineSeries;
class QValueAxis;
QT_CHARTS_END_NAMESPACE

QT_CHARTS_USE_NAMESPACE
#include <QMainWindow>
#include <QDateTime>
#include <QLineSeries>
#include <math.h>
#include <unistd.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void timerUpdate();
    void timerRefresh();
    void showInfo(int index);
    void handleCpu();
    void handleMem();
    void handleSwap();
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    QTimer m_timer;
    QSplineSeries *cpu_series;
    QSplineSeries *mem_series;
    QSplineSeries *swap_series;
    QStringList cpu_titles;
    QStringList mem_titles;
    QStringList swap_titles;
    QValueAxis *cpu_axisX;
    QValueAxis *cpu_axisY;
    QValueAxis *mem_axisX;
    QValueAxis *mem_axisY;
    QValueAxis *swap_axisX;
    QValueAxis *swap_axisY;
    qreal cpu_x;
    qreal cpu_y;
    qreal mem_x;
    qreal mem_y;
    qreal swap_x;
    qreal swap_y;
    qreal cpu_use;
    qreal mem_use;
    QChart* cpu_chart;
    QChart* mem_chart;
    QChart* swap_chart;
};
#endif // MAINWINDOW_H
