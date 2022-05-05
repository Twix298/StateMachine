#include "hurtstate.h"

HurtState::HurtState() : State("Hurt")
{

}

void HurtState::kill(StateContext *state)
{
    state->setState(new HardHurtState());
}

void HurtState::heal(StateContext *state)
{
    state->setState(new LiveState());
}

void HurtState::hurtToKill(StateContext *state)
{
    state->setState(new KillState());
}

void HurtState::liveToHardHurt(StateContext *)
{

}

void HurtState::liveToKill(StateContext *)
{

}
