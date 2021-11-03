#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <math.h>
#include <cmath>
#include <cstdlib>


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


void MainWindow::on_ln_clicked()
{
    if(!lewy)
    {
        lewy = true;
        left= ui->lineEdit->text().toDouble();

        czyszczenie= true;
    }
    liczba = logarytm;
}



void MainWindow::on_log10_clicked()
{
    if(!lewy)
    {
        lewy = true;
        left= ui->lineEdit->text().toDouble();

        czyszczenie= true;
    }
    liczba = logarytm10;
}


void MainWindow::on_plus_clicked()
{
if(!lewy)
{
    lewy = true;
    left= ui->lineEdit->text().toDouble();

    czyszczenie= true;
}
liczba = plus;
}


void MainWindow::on_minus_clicked()
{
    if(!lewy)
    {
        lewy = true;
        left= ui->lineEdit->text().toDouble();

        czyszczenie= true;
    }
    liczba = minus;
    }



void MainWindow::on_mnozenie_clicked()
{
    if(!lewy)
    {
        lewy = true;
        left= ui->lineEdit->text().toDouble();

        czyszczenie= true;
    }
    liczba = mnozenie;

}

void MainWindow::on_dzielenie_clicked()
{
    if(!lewy)
    {
        lewy = true;
        left= ui->lineEdit->text().toDouble();

        czyszczenie= true;
    }
    liczba = dzielenie;

}


void MainWindow::on_potega_clicked()
{
    if(!lewy)
    {
        lewy = true;
        left= ui->lineEdit->text().toDouble();

        czyszczenie= true;
    }
    liczba = potega;
}


void MainWindow::on_sqrt_clicked()
{
    if(!lewy)
    {
        lewy = true;
        left= ui->lineEdit->text().toDouble();

        czyszczenie= true;
    }
    liczba = pierwiastek;
}


void MainWindow::on_p0_clicked()
{
    wyswietliczbe("0");
}



void MainWindow::on_p1_clicked()
{
    wyswietliczbe ("1");
}


void MainWindow::on_p2_clicked()
{
    wyswietliczbe ("2");
}


void MainWindow::on_p3_clicked()
{
     wyswietliczbe ("3");
}


void MainWindow::on_p4_clicked()
{
     wyswietliczbe ("4");
}


void MainWindow::on_p5_clicked()
{
     wyswietliczbe ("5");
}


void MainWindow::on_p6_clicked()
{
    wyswietliczbe("6");
}


void MainWindow::on_p7_clicked()
{
    wyswietliczbe ("7");
}


void MainWindow::on_p8_clicked()
{
    wyswietliczbe ("8");
}


void MainWindow::on_p9_clicked()
{
    wyswietliczbe ("9");
}


void MainWindow::on_przecinek_clicked()
{
    if(przecinek == true) return;

    ui->lineEdit->setText(ui->lineEdit->text().append("."));
    przecinek = true;
}


void MainWindow::on_pC_clicked()
{
    left =0;
    right =0;
    przecinek = false;
    lewy = false;
    prawy = false;
    czyszczenie= false;
    znak = false;


ui->lineEdit->clear();
}


void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{

}

void MainWindow::on_rowna_clicked()
{
    if(!(lewy))return;
    right = ui->lineEdit->text().toDouble();
    double dzialanie;

    switch (liczba)
    {
    case plus:
    dzialanie = left + right;
        break;

    case minus:
        dzialanie = left - right;
        break;
        \
    case mnozenie:
        dzialanie = left * right;
        break;

    case dzielenie:

        dzialanie = left / right;
        break;

    case pierwiastek:
        dzialanie = sqrt ( left);
        break;

    case potega:
        dzialanie = pow( left, right);
        break;

    case logarytm:
        dzialanie =  log (left);
        break;

    case logarytm10:
        dzialanie = log10 (left);
        break;
    }



    czyszczenie = true;
    ui->lineEdit->setText(QString::number(dzialanie));
    left = 0;
    right = 0;
    right = false;
    left = false;



}

void MainWindow::wyswietliczbe(QString Text)
{
    QString text = ui->lineEdit->text();
    if (text.length() >= ui->lineEdit->maxLength()) return;

if (czyszczenie)
{
text.clear();
czyszczenie = false;
}

     text.append (Text);
     ui->lineEdit->setText(text);
}


void MainWindow::on_pznak_clicked()
{
    if(znak == true) return;

    ui->lineEdit->setText(ui->lineEdit->text().append("-"));
    znak = true;
}

