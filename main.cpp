/*
 * @Author: demon 52363147+demonnf@users.noreply.github.com
 * @Date: 2023-10-12 21:32:35
 * @LastEditors: demon 52363147+demonnf@users.noreply.github.com
 * @LastEditTime: 2023-10-12 22:11:12
 * @FilePath: /Vscode_Template/main.cpp
 * @Description: 
 * 
 * Copyright (c) 2023 by ${git_name_email}, All Rights Reserved. 
 */
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
