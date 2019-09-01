#include "canvas.h"
#include "dialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Canvas w;
    w.setWindowTitle("Spabro");
    w.show();

    return a.exec();
}
