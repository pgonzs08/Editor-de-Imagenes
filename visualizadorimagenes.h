#ifndef VISUALIZADORIMAGENES_H
#define VISUALIZADORIMAGENES_H

#include <QMainWindow>
#include <QFileDialog>
#include <QFile>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class VisualizadorImagenes; }
QT_END_NAMESPACE

class VisualizadorImagenes : public QMainWindow
{
    Q_OBJECT

public:
    VisualizadorImagenes(QWidget *parent = nullptr);
    ~VisualizadorImagenes();

private:

    Ui::VisualizadorImagenes *ui;

    QStringList imagenes;

    void mostrarImagenes();

    std::vector<QLabel*> labels;

private slots:

    void abrir_imagen();

    void aplicarRuido();

};
#endif // VISUALIZADORIMAGENES_H
