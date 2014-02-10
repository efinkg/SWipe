#include <QApplication>
#include "swipe.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);  //QtGui/QApplication is deprecated, replaced by QApplication and changes to SWipe.pro
    SWipe w;
#if defined(Q_WS_S60)
    w.showMaximized();
#else
    w.show();
#endif

    return a.exec();
}
