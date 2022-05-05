#include "killstate.h"

KillState::KillState() : State("Kill")
{

}

void KillState::kill(StateContext *state)
{
    Q_UNUSED(state);
}

void KillState::heal(StateContext *state)
{
    Q_UNUSED(state);
}

void KillState::hurtToKill(StateContext *state)
{
    Q_UNUSED(state);
}

void KillState::liveToHardHurt(StateContext *state)
{
    Q_UNUSED(state);
}

void KillState::liveToKill(StateContext *state)
{
    Q_UNUSED(state);
}
