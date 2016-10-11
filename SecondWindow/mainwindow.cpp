#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
//    SecDialog secwindowdialog;
//    secwindowdialog.setModal(true); // When you create the second window you cannot access the main window
//    // unless you close the second one. The modal aproach allows you to use them at the same time
//    secwindowdialog.exec();
    hide();
    secDialog = new SecDialog(this);
    secDialog->show();
}
