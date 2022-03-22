#include "visualizadorimagenes.h"
#include "ui_visualizadorimagenes.h"

VisualizadorImagenes::VisualizadorImagenes(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::VisualizadorImagenes)
{
    ui->setupUi(this);

    QMenu* menuAbrir = ui->menubar->addMenu("Archivo(s)");

    menuAbrir->addAction("Abrir...", this , SLOT(abrir_imagen()));
    menuAbrir->addAction("Guardar...", this , SLOT(abrir_imagen()));
    menuAbrir->addAction("Guardar como...", this , SLOT(abrir_imagen()));

    QMenu* menuEditar = ui->menubar->addMenu("Editar");

        QMenu* menuFiltros = menuEditar->addMenu("Filtros...");

        menuFiltros->addAction("Ruido Gaussiano", this , SLOT(aplicarRuido()));

    //menuAbrir->addAction("Guardar...", this , SLOT(abrir_imagen()));
    //menuAbrir->addAction("Guardar como...", this , SLOT(abrir_imagen()));

}

VisualizadorImagenes::~VisualizadorImagenes()
{
    delete ui;
}

void VisualizadorImagenes::abrir_imagen(){

    imagenes = QFileDialog::getOpenFileNames(this, "Escoge una o varias imagenes", "/home", "Images (*.jpg *.xpm *.png *.jpeg)");

    mostrarImagenes();

}

void VisualizadorImagenes::mostrarImagenes(){

    for(int i = 0; i < imagenes.length(); i++){

        QLabel* label = new QLabel;

        label->setPixmap(QPixmap::fromImage(QImage(imagenes.at(i))));

        labels.push_back(label);

        ui->gridLayout->addWidget(label);

    }

}

void VisualizadorImagenes::aplicarRuido(){

    for(int i = 0; i < imagenes.length(); i++){




    }

}
