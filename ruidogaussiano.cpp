#include "ruidogaussiano.h"
#include "ui_ruidogaussiano.h"

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
    QFileDialog choose;
    choose.setAcceptMode(QFileDialog::AcceptOpen);
    choose.setFileMode(QFileDialog::AnyFile);
    choose.exec();

    if(choose.selectedFiles().size()>0){
        filepaths = choose.selectedFiles();
        ui->pushButton->setEnabled(false);
        ui->pushButton_2->setEnabled(true);
    }
    QString texto = "Se han seleccionado ";
    texto.append(QString::fromStdString(std::to_string(filepaths.size())));
    texto.append(" archivos.");
    ui->label->setText(texto);
}

void RuidoGaussiano::on_pushButton_3_clicked()
{

    for(int i = 0; i < ui->nIteraciones->value(); i++){

        for(int j = 0; j < filepaths.size();j++){

            QFile file(filepaths.at(j));

            QString msg;

            std::vector<int> iteracion = algoritmoRuido();

            for(int k = 0; k < iteracion.size(); k++){

                msg.append(QString::fromStdString(std::to_string(iteracion.at(k))));
                msg.append(" ");

            }

            file.open(stderr, QFile::WriteOnly);
            //no se escribir file.write(msg, msg.length());
            file.close();
        }

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
