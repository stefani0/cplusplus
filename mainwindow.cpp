#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString mFilename = "/home/ubuntu/Qt/detyra/untitled3/numra.txt";

    //write (mFilename);
    read (mFilename);

}

MainWindow::~MainWindow()
{
    delete ui;
}
/*
void MainWindow::write(QString filename)
{
    QFile mFile(filename);

    if(!mFile.open(QFile::WriteOnly | QFile::Text)){
        qDebug()<<"cant open for wititing";
        return;
    }

    QTextStream out(&mFile);
    out<<"Heloo world";

    mFile.flush();
    mFile.close();
}
*/
void MainWindow::read(QString filename)
{

    QFile mFile(filename);

    if(!mFile.open(QFile::ReadOnly | QFile::Text)){
        qDebug()<<"cant open for reading";
        return;
    }

    QTextStream in(&mFile);
    while (!in.atEnd()){

   QString mText = in.readLine();
    qDebug()<<mText;

    lista.push_back(mText);


}


    mFile.flush();
    mFile.close();


}
