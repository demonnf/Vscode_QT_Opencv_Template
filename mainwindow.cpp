#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<opencv2/opencv.hpp>
#include<QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->showimage,&QPushButton::clicked, this,[=](){
    cv::Mat image=cv::imread("/Users/demon/Desktop/2.jpg");
    cv::imshow("image",image);
    });
    connect(ui->simg,&QPushButton::clicked, this,[=](){
        cv::Mat image2=cv::imread("/Users/demon/Desktop/image/lena.jpeg");
        cv::imshow("image",image2);
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

