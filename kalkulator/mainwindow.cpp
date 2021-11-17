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
    player = new QMediaPlayer(this);
    playlist = new QMediaPlaylist(this);
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
   player ->setMedia (QUrl::fromLocalFile("C:/Users/Damian/Documents/Qt- projek/kalkulator/Dzwieki/ln.mp3"))
           player->play();
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
    player ->setMedia (QUrl::fromLocalFile("C:/Users/Damian/Documents/Qt- projek/kalkulator/Dzwieki/log10.mp3"))
            player->play();
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
    player ->setMedia (QUrl::fromLocalFile("C:/Users/Damian/Documents/Qt- projek/kalkulator/Dzwieki/Dodawanie.mp3"))
            player->play();
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
    player ->setMedia (QUrl::fromLocalFile("C:/Users/Damian/Documents/Qt- projek/kalkulator/Dzwieki/Odejmowanie.mp3"))
            player->play();
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
   player ->setMedia (QUrl::fromLocalFile("C:/Users/Damian/Documents/Qt- projek/kalkulator/Dzwieki/Mnozenie.mp3"))
           player->play();
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
   player ->setMedia (QUrl::fromLocalFile("C:/Users/Damian/Documents/Qt- projek/kalkulator/Dzwieki/Dzielenie.mp3"))
           player->play();
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
    player ->setMedia (QUrl::fromLocalFile("C:/Users/Damian/Documents/Qt- projek/kalkulator/Dzwieki/^.mp3"))
            player->play();
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
    player ->setMedia (QUrl::fromLocalFile("C:/Users/Damian/Documents/Qt- projek/kalkulator/Dzwieki/pierwiastek.mp3"))
            player->play();
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
    player ->setMedia (QUrl::fromLocalFile("C:/Users/Damian/Documents/Qt- projek/kalkulator/Dzwieki/0.mp3"))
            player->play();
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
    player ->setMedia (QUrl::fromLocalFile("C:/Users/Damian/Documents/Qt- projek/kalkulator/Dzwieki/1.mp3"))
            player->play();
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
    player ->setMedia (QUrl::fromLocalFile("C:/Users/Damian/Documents/Qt- projek/kalkulator/Dzwieki/2.mp3"))
            player->play();
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
    player ->setMedia (QUrl::fromLocalFile("C:/Users/Damian/Documents/Qt- projek/kalkulator/Dzwieki/3.mp3"))
            player->play();
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
    player ->setMedia (QUrl::fromLocalFile("C:/Users/Damian/Documents/Qt- projek/kalkulator/Dzwieki/4.mp3"))
            player->play();
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
    player ->setMedia (QUrl::fromLocalFile("C:/Users/Damian/Documents/Qt- projek/kalkulator/Dzwieki/5.mp3"))
            player->play();
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
    player ->setMedia (QUrl::fromLocalFile("C:/Users/Damian/Documents/Qt- projek/kalkulator/Dzwieki/6.mp3"))
            player->play();
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
    player ->setMedia (QUrl::fromLocalFile("C:/Users/Damian/Documents/Qt- projek/kalkulator/Dzwieki/7.mp3"))
            player->play();
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
    player ->setMedia (QUrl::fromLocalFile("C:/Users/Damian/Documents/Qt- projek/kalkulator/Dzwieki/8.mp3"))
            player->play();
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
    player ->setMedia (QUrl::fromLocalFile("C:/Users/Damian/Documents/Qt- projek/kalkulator/Dzwieki/9.mp3"))
            player->play();
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
    player ->setMedia (QUrl::fromLocalFile("C:/Users/Damian/Documents/Qt- projek/kalkulator/Dzwieki/0.mp3"))
            player->play();
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
    player ->setMedia (QUrl::fromLocalFile("C:/Users/Damian/Documents/Qt- projek/kalkulator/Dzwieki/=.mp3"))
            player->play();
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
    player ->setMedia (QUrl::fromLocalFile("C:/Users/Damian/Documents/Qt- projek/kalkulator/Dzwieki/minus.mp3"))
            player->play();
    QString text = ui->lineEdit->text();
    if (text == "-") return;
    text.append("-");
    ui->lineEdit->setText(text);
}


void MainWindow::on_sin_clicked()
{
    player ->setMedia (QUrl::fromLocalFile("C:/Users/Damian/Documents/Qt- projek/kalkulator/Dzwieki/sin.mp3"))
            player->play();
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
    player ->setMedia (QUrl::fromLocalFile("C:/Users/Damian/Documents/Qt- projek/kalkulator/Dzwieki/cos.mp3"))
            player->play();
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
    player ->setMedia (QUrl::fromLocalFile("C:/Users/Damian/Documents/Qt- projek/kalkulator/Dzwieki/tan.mp3"))
            player->play();
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
    player ->setMedia (QUrl::fromLocalFile("C:/Users/Damian/Documents/Qt- projek/kalkulator/Dzwieki/e.mp3"))
            player->play();
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
    player ->setMedia (QUrl::fromLocalFile("C:/Users/Damian/Documents/Qt- projek/kalkulator/Dzwieki/pi.mp3"))
            player->play();
    QString text = ui->lineEdit->text();

if (czyszczenie)
{
text.clear();
czyszczenie = false;
}
     text.append ("3.1415926");
     ui->lineEdit->setText(text);
}


