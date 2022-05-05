#ifndef KILLSTATE_H
#define KILLSTATE_H

#include "statecontext.h"

class KillState : public State
{
public:
    KillState();
    virtual void kill(StateContext* state);
    virtual void heal(StateContext* state);
    virtual void hurtToKill(StateContext* state);
    virtual void liveToHardHurt(StateContext* state);
    virtual void liveToKill(StateContext* state);
};

#endif // KILLSTATE_H
