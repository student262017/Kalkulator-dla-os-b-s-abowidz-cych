#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <math.h>
#include <cmath>
#include <cstdlib>
#include <QCoreApplication>
#include <QDebug>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QFile>
#include <QFileDialog>
#include <QPixmap>

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
        pierwszaliczba= ui->lineEdit->text().toDouble();

        czyszczenie= true;
    }
    liczba = logarytm;
}



void MainWindow::on_log10_clicked()
{

    if(!lewy)
    {
        lewy = true;
        pierwszaliczba= ui->lineEdit->text().toDouble();

        czyszczenie= true;
    }
    liczba = logarytm10;
}


void MainWindow::on_plus_clicked()
{

if(!lewy)
{
    lewy = true;
    pierwszaliczba= ui->lineEdit->text().toDouble();

    czyszczenie= true;
}
liczba = plus;
}


void MainWindow::on_minus_clicked()
{

    if(!lewy)
    {
        lewy = true;
        pierwszaliczba= ui->lineEdit->text().toDouble();

        czyszczenie= true;
    }
    liczba = minus;
    }



void MainWindow::on_mnozenie_clicked()
{

    if(!lewy)
    {
        lewy = true;
        pierwszaliczba= ui->lineEdit->text().toDouble();

        czyszczenie= true;
    }
    liczba = mnozenie;

}

void MainWindow::on_dzielenie_clicked()
{

    if(!lewy)
    {
        lewy = true;
        pierwszaliczba= ui->lineEdit->text().toDouble();

        czyszczenie= true;
    }
    liczba = dzielenie;

}


void MainWindow::on_potega_clicked()
{

    if(!lewy)
    {
        lewy = true;
        pierwszaliczba= ui->lineEdit->text().toDouble();

        czyszczenie= true;
    }
    liczba = potega;
}


void MainWindow::on_sqrt_clicked()
{

    if(!lewy)
    {
        lewy = true;
        pierwszaliczba= ui->lineEdit->text().toDouble();

        czyszczenie= true;
    }
    liczba = pierwiastek;
}


void MainWindow::on_p0_clicked()
{

    QString text = ui->lineEdit->text();


if (czyszczenie)
{ 
text.clear();
czyszczenie = false;
}

     text.append ("0");
     ui->lineEdit->setText(text);
}



void MainWindow::on_p1_clicked()
{

    QString text = ui->lineEdit->text();


if (czyszczenie)
{
text.clear();
czyszczenie = false;
}

     text.append ("1");
     ui->lineEdit->setText(text);
}


void MainWindow::on_p2_clicked()
{

    QString text = ui->lineEdit->text();


if (czyszczenie)
{
text.clear();
czyszczenie = false;
}

     text.append ("2");
     ui->lineEdit->setText(text);
}


void MainWindow::on_p3_clicked()
{

    QString text = ui->lineEdit->text();


if (czyszczenie)
{
text.clear();
czyszczenie = false;
}

     text.append ("3");
     ui->lineEdit->setText(text);
}


void MainWindow::on_p4_clicked()
{

    QString text = ui->lineEdit->text();


if (czyszczenie)
{
text.clear();
czyszczenie = false;
}

     text.append ("4");
     ui->lineEdit->setText(text);
}


void MainWindow::on_p5_clicked()
{

    QString text = ui->lineEdit->text();


if (czyszczenie)
{
text.clear();
czyszczenie = false;
}

     text.append ("5");
     ui->lineEdit->setText(text);
}


void MainWindow::on_p6_clicked()
{

    QString text = ui->lineEdit->text();


if (czyszczenie)
{
text.clear();
czyszczenie = false;
}

     text.append ("6");
     ui->lineEdit->setText(text);
}


void MainWindow::on_p7_clicked()
{

    QString text = ui->lineEdit->text();


if (czyszczenie)
{
text.clear();
czyszczenie = false;
}

     text.append ("7");
     ui->lineEdit->setText(text);
}


void MainWindow::on_p8_clicked()
{

    QString text = ui->lineEdit->text();


    if (czyszczenie)
    {
    text.clear();
    czyszczenie = false;
    }

     text.append ("8");
     ui->lineEdit->setText(text);
}


void MainWindow::on_p9_clicked()
{

    QString text = ui->lineEdit->text();


    if (czyszczenie)
    {
    text.clear();
    czyszczenie = false;
    }

     text.append ("9");
     ui->lineEdit->setText(text);
}


void MainWindow::on_przecinek_clicked()
{

    QString text = ui->lineEdit->text();
    if (text == ".") return;
    text.append(".");
    ui->lineEdit->setText(text);
}


void MainWindow::on_pC_clicked()
{

    pierwszaliczba =0;
       drugaliczba =0;
       lewy = false;
       prawy = false;
       czyszczenie= false;

ui->lineEdit->clear();
}


void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{

}

void MainWindow::on_rowna_clicked()
{

    if(!(lewy))return;
    drugaliczba = ui->lineEdit->text().toDouble();
    double dzialanie;

    switch (liczba)
    {
        case plus:
        dzialanie = pierwszaliczba + drugaliczba;
        break;

        case minus:
            dzialanie = pierwszaliczba - drugaliczba;
                  break;

        case mnozenie:
            dzialanie = pierwszaliczba * drugaliczba;
                break;

        case dzielenie:

        dzialanie = pierwszaliczba / drugaliczba;

             break;
        case pierwiastek:
            dzialanie = sqrt ( pierwszaliczba);

        break;
        case potega:
            dzialanie = pow( pierwszaliczba, drugaliczba);
            break;

        case logarytm:
            dzialanie =  log (pierwszaliczba);

             break;
        case logarytm10:
            dzialanie = log10 (pierwszaliczba);
            break;

        case sinus:
        dzialanie = sin (pierwszaliczba);
        break;

         case cosinus:
        dzialanie = cos (pierwszaliczba);
    break;

    case tanges:

        dzialanie = tan (pierwszaliczba);
break;
        }
    czyszczenie = true;
    ui->lineEdit->setText(QString::number(dzialanie));
    pierwszaliczba = 0;
    drugaliczba = 0;
    pierwszaliczba = false;
   drugaliczba = false;
}

void MainWindow::on_pznak_clicked()
{

    QString text = ui->lineEdit->text();
    if (text == "-") return;
    text.append("-");
    ui->lineEdit->setText(text);
}


void MainWindow::on_sin_clicked()
{

    if(!lewy)
    {
        lewy = true;
        pierwszaliczba= ui->lineEdit->text().toDouble();

        czyszczenie= true;
    }
    liczba = sinus;
}


void MainWindow::on_cos_clicked()
{

    if(!lewy)
    {
        lewy = true;
        pierwszaliczba= ui->lineEdit->text().toDouble();

        czyszczenie= true;
    }
    liczba = cosinus;
}


void MainWindow::on_tan_clicked()
{

    if(!lewy)
    {
        lewy = true;
        pierwszaliczba= ui->lineEdit->text().toDouble();

        czyszczenie= true;
    }
    liczba = tanges;
}


void MainWindow::on_euler_clicked()
{

    QString text = ui->lineEdit->text();
if (czyszczenie)
{
text.clear();
czyszczenie = false;
}
     text.append ("2.71828182");
     ui->lineEdit->setText(text);
}

void MainWindow::on_liczbapi_clicked()
{

    QString text = ui->lineEdit->text();

if (czyszczenie)
{
text.clear();
czyszczenie = false;
}
     text.append ("3.1415926");
     ui->lineEdit->setText(text);
}

void MainWindow::on_zdjecia_clicked()
{
    QString zdjecie =  QFileDialog::getOpenFileName(this, tr("Otwórz plik"), "C:/Users/Damian/Documents/Qt- projekt/kalkulator/Zdjęcia i obrazy", tr("Obrazy (*.jpg .png .bmp)"));
    QFile plik(zdjecie);
    QString sciezka = plik.fileName();
    QGraphicsScene *scena = new QGraphicsScene(ui->wyswietlacz);
    QPixmap mapaPikseli(zdjecie);
    scena->addPixmap(mapaPikseli);
    ui->wyswietlacz->setScene(scena);
    ui->wyswietlacz->show();
}
