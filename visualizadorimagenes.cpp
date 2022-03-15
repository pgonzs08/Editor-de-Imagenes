#include "visualizadorimagenes.h"
#include "ui_visualizadorimagenes.h"

VisualizadorImagenes::VisualizadorImagenes(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::VisualizadorImagenes)
{
    ui->setupUi(this);
}

VisualizadorImagenes::~VisualizadorImagenes()
{
    delete ui;
}
