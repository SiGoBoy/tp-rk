#ifndef NOQUARTERSTATE_H
#define NOQUARTERSTATE_H
#include "state.h"

class GumballMachine;
class NoQuarterState: public State
{
    GumballMachine *_machine;

public:
    NoQuarterState();
    NoQuarterState(GumballMachine *machine);
    void insertCoin();
    void ejectQuarter();
    void turnCrank();
    void dispense();
};

#endif // NOQUARTERSTATE_H
