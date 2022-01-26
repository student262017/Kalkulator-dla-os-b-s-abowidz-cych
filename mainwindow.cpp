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
#include <fstream>

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

    znaki("0");
}

void MainWindow::on_p1_clicked()
{
   znaki("1");
}

void MainWindow::on_p2_clicked()
{
    znaki("2");
}

void MainWindow::on_p3_clicked()
{
    znaki("3");
}

void MainWindow::on_p4_clicked()
{
 znaki("4");
}

void MainWindow::on_p5_clicked()
{
znaki("5");
}

void MainWindow::on_p6_clicked()
{
znaki("6");
}

void MainWindow::on_p7_clicked()
{
znaki("7");
}

void MainWindow::on_p8_clicked()
{
znaki("8");
}

void MainWindow::on_p9_clicked()
{
znaki("9");
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
ui->tytul->clear();


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
   znaki ("2.71828182");
}

void MainWindow::on_liczbapi_clicked()
{
znaki ("3.1415926");
}

void MainWindow::on_zdjecia_clicked()
{
     zdjecie_z_tytulem("C:/Users/Damian/Documents/Qt- projekt/kalkulator/Zdjęcia i obrazy/Hydrangeas.jpg", "Hortensje");
}

void MainWindow::on_pushButton_clicked()
{

   zdjecie_z_tytulem("C:/Users/Damian/Documents/Qt- projekt/kalkulator/Zdjęcia i obrazy/Desert.jpg", "Pustynia");
}

void MainWindow::on_pushButton_2_clicked()
{
    zdjecie_z_tytulem ("C:/Users/Damian/Documents/Qt- projekt/kalkulator/Zdjęcia i obrazy/Lighthouse.jpg", "Latarnia Morska");
}

void MainWindow::on_pushButton_3_clicked()
{
    zdjecie_z_tytulem("C:/Users/Damian/Documents/Qt- projekt/kalkulator/Zdjęcia i obrazy/Chrysanthemum.jpg", "Chryzantemy");
}

void MainWindow::on_pushButton_4_clicked()
{
    zdjecie_z_tytulem("C:/Users/Damian/Documents/Qt- projekt/kalkulator/Zdjęcia i obrazy/Jellyfish.jpg", "Meduzy");
}

void MainWindow::on_pushButton_5_clicked()
{
     zdjecie_z_tytulem("C:/Users/Damian/Documents/Qt- projekt/kalkulator/Zdjęcia i obrazy/Koala.jpg", "Koala");
}

void MainWindow::on_pushButton_6_clicked()
{
    zdjecie_z_tytulem("C:/Users/Damian/Documents/Qt- projekt/kalkulator/Zdjęcia i obrazy/Penguins.jpg", "Pingwiny");
}

void MainWindow::on_pushButton_7_clicked()
{
    zdjecie_z_tytulem("C:/Users/Damian/Documents/Qt- projekt/kalkulator/Zdjęcia i obrazy/Tulips.jpg", "Tupilany");
}

void MainWindow::zdjecie_z_tytulem(QString grafika, QString tytyl)
{
    ui->tytul->setText("Nazwa zdjęcia:");
    ui->lineEdit->setText(tytyl);

    QGraphicsScene *obraz = new QGraphicsScene(ui->wyswietlacz);
    QPixmap mapaPikseli(grafika);
    obraz->addPixmap(mapaPikseli);
    ui->wyswietlacz->setScene(obraz);
    ui->wyswietlacz->show();
}

void MainWindow::znaki(QString liczba)
{
    QString text = ui->lineEdit->text();


if (czyszczenie)
{
text.clear();
czyszczenie = false;
}

     text.append (liczba);
     ui->lineEdit->setText(text);
}



void MainWindow::on_wyczysc_clicked()
{
    ui->wyswietlacz->items().clear();
    ui->wyswietlacz->close();
    ui->lineEdit->clear();
    ui->tytul->clear();
}

