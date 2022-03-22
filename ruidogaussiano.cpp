#include "ruidogaussiano.h"
#include "ui_ruidogaussiano.h"

#include <iostream>

RuidoGaussiano::RuidoGaussiano(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RuidoGaussiano)
{
    ui->setupUi(this);
}

RuidoGaussiano::~RuidoGaussiano()
{
    delete ui;
}

void RuidoGaussiano::on_pushButton_clicked()
{
    filepaths = QFileDialog::getOpenFileNames(this, "Selecciona uno o más archivos que abrir", "/home", "Texto (*.txt)" );
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(true);
    QString texto = "Se han seleccionado ";
    texto.append(QString::fromStdString(std::to_string(filepaths.size())));
    texto.append(" archivos.");
    ui->label->setText(texto);
}

void RuidoGaussiano::on_pushButton_2_clicked()
{

    for(int j = 0; j < filepaths.size();j++){

        std::cout<<filepaths.at(j).toStdString()<<std::endl;
        QFile file(filepaths.at(j));

        QString msg;

        for(int i = 0; i < ui->nIteraciones->value(); i++){

            std::vector<int> iteracion = algoritmoRuido();

            for(int k = 0; k < iteracion.size(); k++){

                msg.append(QString::fromStdString(std::to_string(iteracion.at(k)))); msg.append(" ");

            }

            msg.append("\n");


        }

        file.open(QFile::WriteOnly);
        file.write(msg.toLocal8Bit());

        file.close();

    }

}

std::vector<int> RuidoGaussiano::algoritmoRuido(){

    int r, g, b;

    int media;

    r = arc4random()%512-256;
    g = arc4random()%512-256;
    b = arc4random()%512-256;

    media = (r+g+b)/3;

    return {r,g,b,media};

}
