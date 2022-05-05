#include "hardhurtstate.h"

HardHurtState::HardHurtState() : State("HardHurt")
{
}

void HardHurtState::kill(StateContext *state)
{
    state->setState(new KillState());
}

void HardHurtState::heal(StateContext *state)
{
    Q_UNUSED(state);
}

void HardHurtState::hurtToKill(StateContext *state)
{
    Q_UNUSED(state);
}

void HardHurtState::liveToHardHurt(StateContext *state)
{
    Q_UNUSED(state);
}

void HardHurtState::liveToKill(StateContext *state)
{
    Q_UNUSED(state);
}
