#ifndef HURTSTATE_H
#define HURTSTATE_H

#include "statecontext.h"
#include "hardhurtstate.h"
#include "livestate.h"
#include "killstate.h"

class HurtState : public State
{
public:
    HurtState();
    virtual void kill(StateContext* state);
    virtual void heal(StateContext* state);
    virtual void hurtToKill(StateContext *state);
    virtual void liveToHardHurt(StateContext*);
    virtual void liveToKill(StateContext*);
};

#endif // HURTSTATE_H
