#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_MainWindow_iconSizeChanged(const QSize &iconSize);

    void on_p0_clicked();

    void on_zamknij_clicked();

    void on_nl_clicked();

    void on_np_clicked();

    void on_plus_clicked();

    void on_minus_clicked();

    void on_mnozenie_clicked();

    void on_dzielenie_clicked();

    void on_potega_clicked();

    void on_sqrt_clicked();

    void on_p1_clicked();

    void on_p2_clicked();

    void on_p3_clicked();

    void on_p4_clicked();

    void on_p5_clicked();

    void on_p6_clicked();

    void on_p7_clicked();

    void on_p8_clicked();

    void on_p9_clicked();

    void on_przecinek_clicked();

    void on_pC_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    enum operation
    {

        plus,
        minus,
        mnozenie,
        dzielenie,
        potega,
        sqrt,
        none

    };

    double left;
    double right;
    int liczba;
    double pamiec;
    bool przecinek;
    bool lewy;
    bool prawy;
};
#endif // MAINWINDOW_H
