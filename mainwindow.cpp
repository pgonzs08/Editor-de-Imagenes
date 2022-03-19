#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "visualizadorimagenes.h"
#include "ruidogaussiano.h"

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


void MainWindow::on_botonVI_clicked()
{
    VisualizadorImagenes* vi = new VisualizadorImagenes();
    vi->setVisible(true);
}

void MainWindow::on_botonAl_clicked()
{
    RuidoGaussiano* rg = new RuidoGaussiano();
    rg->exec();
}
