#ifndef RUIDOGAUSSIANO_H
#define RUIDOGAUSSIANO_H

#include <QDialog>
#include <QFileDialog>
#include <QFile>

namespace Ui {
class RuidoGaussiano;
}

class RuidoGaussiano : public QDialog
{
    Q_OBJECT

public:
    explicit RuidoGaussiano(QWidget *parent = nullptr);
    ~RuidoGaussiano();

private slots:
    void on_pushButton_clicked();

private:
    Ui::RuidoGaussiano *ui;
    QFile file;
};

#endif // RUIDOGAUSSIANO_H
