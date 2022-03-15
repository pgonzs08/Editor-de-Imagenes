#ifndef VISUALIZADORIMAGENES_H
#define VISUALIZADORIMAGENES_H

#include <QMainWindow>

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
};
#endif // VISUALIZADORIMAGENES_H
