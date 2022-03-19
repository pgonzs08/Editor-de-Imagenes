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
    choose.exec();
    QFile(choose.selectedFiles().at(0));
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
}
