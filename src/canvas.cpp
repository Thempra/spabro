#include "canvas.h"
#include "ui_canvas.h"

Canvas::Canvas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Canvas)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Window);
    this->showFullScreen();
}

Canvas::~Canvas()
{
    delete ui;
}

void Canvas::on_backButton_clicked()
{
        ui->webView->forward();
}

void Canvas::on_forwardButton_clicked()
{
        ui->webView->reload();
}

void Canvas::on_goButton_clicked()
{
        ui->webView->load(("http://"+ui->urlEdit->text()));
}

void Canvas::on_urlEdit_returnPressed()
{
        on_goButton_clicked();
}
