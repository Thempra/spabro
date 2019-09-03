#ifndef CANVAS_H
#define CANVAS_H

#include <QDialog>

namespace Ui {
class Canvas;
}

class Canvas : public QDialog
{
    Q_OBJECT

public:
    explicit Canvas(QWidget *parent = 0);
    ~Canvas();

private slots:
    void on_backButton_clicked();

    void on_forwardButton_clicked();

    void on_goButton_clicked();

    void on_urlEdit_returnPressed();

private:
    Ui::Canvas *ui;
};

#endif // CANVAS_H
