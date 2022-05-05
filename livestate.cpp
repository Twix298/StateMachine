#include "livestate.h"

LiveState::LiveState() : State("Live")
{

}

void LiveState::kill(StateContext *state)
{
    state->setState(new HurtState());
}

void LiveState::liveToHardHurt(StateContext *state)
{
    state->setState(new HardHurtState());
}

void LiveState::liveToKill(StateContext *state)
{
    state->setState(new KillState());
}

void LiveState::heal(StateContext *state)
{
    Q_UNUSED(state);
}

void LiveState::hurtToKill(StateContext *)
{

}
