#include <QApplication>
#include <QDebug>

#include "AnalogClock.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    AnalogClock clock;

    clock.show();

    // qDebug() << "Width: " << clock.width() << ", height: " << clock.height();

    return app.exec();
}
