#ifndef STATE_H
#define STATE_H

#include "statecontext.h"

#include <QObject>

class StateContext;
class State {

public:
    State(const QString &name) : m_name(name) {}
    QString name() const {return m_name; }

    virtual void kill(StateContext*)            = 0;
    virtual void heal(StateContext*)            = 0;
    virtual void hurtToKill(StateContext*)      = 0;
    virtual void liveToHardHurt(StateContext*)  = 0;
    virtual void liveToKill(StateContext*)      = 0;

private:
    QString m_name;
};

#endif // STATE_H
