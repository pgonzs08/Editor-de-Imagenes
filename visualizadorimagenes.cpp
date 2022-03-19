#include "visualizadorimagenes.h"
#include "ui_visualizadorimagenes.h"

VisualizadorImagenes::VisualizadorImagenes(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::VisualizadorImagenes)
{
    ui->setupUi(this);

    //QMenu* menuAbrir = ui->menubar->addMenu("Abrir...");

    //menuAbrir->addAction("Imagen", this , SLOT(abrir_imagen()));

}

VisualizadorImagenes::~VisualizadorImagenes()
{
    delete ui;
}

void VisualizadorImagenes::abrir_imagen(){

}
