#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    left =0;
    right =0;
    przecinek = false;
    pamiec = 0;
    liczba = this->operation::none;

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
    QString text = ui->lineEdit->text();
    if(text == "(") return;

    text.append ("(");
    ui->lineEdit->setText(text);
}


void MainWindow::on_np_clicked()
{
    QString text = ui->lineEdit->text();
    if(text == ")") return;

    text.append (")");
    ui->lineEdit->setText(text);
}


void MainWindow::on_plus_clicked()
{

if(!(prawy && lewy) )return;
double dodawanie;

switch (liczba)
{
case plus:
dodawanie = prawy + lewy;
    break;
}
ui->lineEdit->setText(QString::number(dodawanie));
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


void MainWindow::on_p0_clicked()
{
QString text = ui->lineEdit->text();
if(text == "0") return;

text.append ("0");
ui->lineEdit->setText(text);
}



void MainWindow::on_p1_clicked()
{
    QString text = ui->lineEdit->text();
    if(text == "1") return;

    text.append ("1");
    ui->lineEdit->setText(text);
}


void MainWindow::on_p2_clicked()
{
    QString text = ui->lineEdit->text();
    if(text == "2") return;

    text.append ("2");
    ui->lineEdit->setText(text);
}


void MainWindow::on_p3_clicked()
{
    QString text = ui->lineEdit->text();
    if(text == "3") return;

    text.append ("3");
    ui->lineEdit->setText(text);
}


void MainWindow::on_p4_clicked()
{
    QString text = ui->lineEdit->text();
    if(text == "4") return;

    text.append ("4");
    ui->lineEdit->setText(text);
}


void MainWindow::on_p5_clicked()
{
    QString text = ui->lineEdit->text();
    if(text == "5") return;

    text.append ("5");
    ui->lineEdit->setText(text);
}


void MainWindow::on_p6_clicked()
{
    QString text = ui->lineEdit->text();
    if(text == "6") return;

    text.append ("6");
    ui->lineEdit->setText(text);
}


void MainWindow::on_p7_clicked()
{
    QString text = ui->lineEdit->text();
    if(text == "7") return;

    text.append ("7");
    ui->lineEdit->setText(text);
}


void MainWindow::on_p8_clicked()
{
    QString text = ui->lineEdit->text();
    if(text == "8") return;

    text.append ("8");
    ui->lineEdit->setText(text);
}


void MainWindow::on_p9_clicked()
{
    QString text = ui->lineEdit->text();
    if(text == "9") return;

    text.append ("9");
    ui->lineEdit->setText(text);
}


void MainWindow::on_przecinek_clicked()
{
    QString text = ui->lineEdit->text();
    if(text == ",") return;

    text.append (",");
    ui->lineEdit->setText(text);
}


void MainWindow::on_pC_clicked()
{

ui->lineEdit->clear();
}


void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{

}


