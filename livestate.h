#ifndef LIVESTATE_H
#define LIVESTATE_H

#include "statecontext.h"
#include "hurtstate.h"
#include "killstate.h"
#include "hardhurtstate.h"

class LiveState : public State
{
public:
    LiveState();
    virtual void kill(StateContext* state);
    virtual void liveToHardHurt(StateContext *state);
    virtual void liveToKill(StateContext *state);
    virtual void heal(StateContext* state);
    virtual void hurtToKill(StateContext*);
};

#endif // LIVESTATE_H
