#ifndef HARDHURTSTATE_H
#define HARDHURTSTATE_H

#include "statecontext.h"
#include "killstate.h"

class HardHurtState : public State
{
public:
    HardHurtState();
    virtual void kill(StateContext* state);
    virtual void heal(StateContext* state);
    virtual void hurtToKill(StateContext* state);
    virtual void liveToHardHurt(StateContext* state);
    virtual void liveToKill(StateContext* state);
};

#endif // HARDHURTSTATE_H
