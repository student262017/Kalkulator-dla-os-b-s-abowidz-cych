#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_MainWindow_iconSizeChanged(const QSize &iconSize)
{

}


void MainWindow::on_zamknij_clicked()
{

}


void MainWindow::on_nl_clicked()
{

}


void MainWindow::on_np_clicked()
{

}


void MainWindow::on_plus_clicked()
{

}


void MainWindow::on_minus_clicked()
{

}


void MainWindow::on_mnozenie_clicked()
{

}


void MainWindow::on_dzielenie_clicked()
{

}


void MainWindow::on_potega_clicked()
{

}


void MainWindow::on_sqrt_clicked()
{

}

