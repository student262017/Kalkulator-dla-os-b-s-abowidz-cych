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

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
