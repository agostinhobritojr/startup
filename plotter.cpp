#include "plotter.h"
#include <QPainter>
#include <QPen>
#include <cmath>

Plotter::Plotter(QWidget *parent) :
  QWidget(parent)
{
  multiplicador = 1;
}

void Plotter::paintEvent(QPaintEvent *e){
  QPainter p(this);
  QPen pen;

  // define a cor de desenho
  pen.setColor(QColor(0,0,255));

  // define a espessura do traco
  pen.setWidth(1);

  // entrega a caneta ao pintor
  p.setPen(pen);

  // desenha uma linha diagonal varrendo toda a tela
  p.drawLine(0,height()/2,width(),height()/2);

  // define nova cor de desenho
  pen.setColor(QColor(255,0,0));

  // define a espessura do traco
  pen.setWidth(3);

  // entrega a caneta ao pintor
  p.setPen(pen);

  int lastx, lasty;
  int nextx, nexty;
  lastx = 0;
  lasty = height()/2*(1.0-sin(0));

  for(int i=1; i<width(); i++){
    nextx = i;
    nexty = height()/2*(1.0-sin(0.1*multiplicador*i));
    p.drawLine(lastx,lasty, nextx,nexty);
    lastx = nextx;
    lasty = nexty;
  }
}

void Plotter::setValor(int valor)
{
  multiplicador = valor;
  repaint();
}












