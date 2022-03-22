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

    std::vector<int> algoritmoRuido();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::RuidoGaussiano *ui;
    QStringList filepaths;
};

#endif // RUIDOGAUSSIANO_H
