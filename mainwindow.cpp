#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QFile>


MainWindow::MainWindow(QWidget *parent) :QMainWindow(parent),ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dir=new QDir();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    qDebug()<<"pushbutton is clicked";
    qDebug()<<"当前目录:"+dir->absolutePath();、
    qDebug()<<"66666";
}
