#include <QCoreApplication>
#include <iostream>
#include <typeinfo>

#include "livestate.h"
#include "hurtstate.h"
#include "hardhurtstate.h"
#include "killstate.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    StateContext *sc = new StateContext(new LiveState());
    sc->liveToHardHurt();
    sc->kill();

    return a.exec();
}
