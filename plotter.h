#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>

class Plotter : public QWidget
{
  Q_OBJECT
  int multiplicador;
public:
  explicit Plotter(QWidget *parent = 0);

  void paintEvent(QPaintEvent *e);
signals:

public slots:
  void setValor(int valor);
};

#endif // PLOTTER_H
