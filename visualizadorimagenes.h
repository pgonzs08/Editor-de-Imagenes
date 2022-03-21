#ifndef VISUALIZADORIMAGENES_H
#define VISUALIZADORIMAGENES_H

#include <QMainWindow>
#include <QFileDialog>
#include <QFile>

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

private slots:

    void abrir_imagen();

};
#endif // VISUALIZADORIMAGENES_H
