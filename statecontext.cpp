#include "statecontext.h"

#include <iostream>
#include <QDebug>



void StateContext::kill()
{
    qDebug() << "kill " << m_state->name() << "...";
    m_state->kill(this);
}

void StateContext::heal()
{
    qDebug() << "heal " << m_state->name() << "...";
    m_state->heal(this);
}

void StateContext::hurtToKill()
{
     qDebug() << "hurtToKill " << m_state->name() << "...";
     m_state->hurtToKill(this);
}

void StateContext::liveToHardHurt()
{
    qDebug() << "liveToHardHurt " << m_state->name() << "...";
    m_state->liveToHardHurt(this);
}

void StateContext::liveToKill()
{
    qDebug() << "liveToKill " << m_state->name() << "...";
    m_state->liveToKill(this);
}

void StateContext::setState(State *s)
{
    qDebug() << "Chaging state from " << m_state->name()
              << " to " << s->name() << "...";
    m_lastState = m_state;
    delete m_state;
    m_state = s;

}

State *StateContext::state()
{
    return m_state;
}

State *StateContext::lastState()
{
    return m_lastState;
}

