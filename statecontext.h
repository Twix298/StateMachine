#ifndef STATECONTEXT_H
#define STATECONTEXT_H

#include "State.h"

class StateContext
{
public:
    StateContext(State *state) : m_state(state) {}

    void kill();
    void heal();
    virtual void hurtToKill();
    virtual void liveToHardHurt();
    virtual void liveToKill();
    void setState(State *s);
    State* state();
    State* lastState();
    ~StateContext() {delete m_state; }

private:
    State *m_state;
    State *m_lastState;
};

#endif // STATECONTEXT_H
