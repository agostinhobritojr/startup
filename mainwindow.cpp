#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

//using namespace std;

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  // indica a janela interna da mainwindow
  // quem eh o seu pai!!!
  ui->setupUi(this);
  connect(ui->pushButtonCancel,SIGNAL(clicked()),
          this,SLOT(morrew()));
  connect(ui->pushButtonOk,SIGNAL(clicked()),
          this,SLOT(vivew()));
 // connect(ui->pushButtonTexto,SIGNAL(clicked()),
 //         this,SLOT(copiaText()));
  connect(ui->lineEditTexto,SIGNAL(returnPressed()),
          this,SLOT(copiaText()));
 // connect(ui->lineEditTexto,SIGNAL(textChanged(QString)),
//          this,SLOT(copiaText()));
  connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),
          ui->widgetSeno,SLOT(setValor(int)));
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::morrew()
{
  exit(0);
}

void MainWindow::vivew()
{
  // declara um objeto da classe QMessageBox
  QMessageBox m;
  // indica o string que serah mostrado
  m.setText(QString("A-ha!"));
  // exibe a message box e espera que o usuario
  // clique em "Ok".
  m.exec();
}

void MainWindow::copiaText()
{
  ui->textBrowserTexto->setText(
        ui->lineEditTexto->text()
        );
  ui->textEditTexto->setText(
        ui->lineEditTexto->text()
        );
}







