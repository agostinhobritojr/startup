#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  // essa macro Q_OBJECT serve para permitir
  // que o mecanismo de comunicacao de mensagens
  // sinais/slots seja permitido dentro dessa classe
  //
  // ela deve estar presente dentro da interface
  // privada da classe
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

public slots:
  void morrew();
  void vivew();
  void copiaText();

private:
  Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
