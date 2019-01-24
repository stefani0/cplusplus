#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QtCore/QCoreApplication>
#include<QFile>
#include<QString>
#include<QDebug>
#include<QTextStream>
#include<QVector>

using namespace std;


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void write(QString filename);
    void read(QString filename);


private:
    Ui::MainWindow *ui;

    QString filename;
    QVector<QString> lista;
};

#endif // MAINWINDOW_H
