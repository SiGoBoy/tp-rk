#include <gtest/gtest.h>
#include "State.h"

class DummyState : public State {
public:
    void insertQuarter() override { called = "insertQuarter"; }
    void ejectQuarter() override { called = "ejectQuarter"; }
    void turnCrank() override { called = "turnCrank"; }
    void dispense() override { called = "dispense"; }

    std::string called;
};

TEST(StateTest, InsertQuarterCallsMethod) {
    DummyState s;
    s.insertQuarter();
    EXPECT_EQ(s.called, "insertQuarter");
}

TEST(StateTest, EjectQuarterCallsMethod) {
    DummyState s;
    s.ejectQuarter();
    EXPECT_EQ(s.called, "ejectQuarter");
}

TEST(StateTest, TurnCrankCallsMethod) {
    DummyState s;
    s.turnCrank();
    EXPECT_EQ(s.called, "turnCrank");
}

TEST(StateTest, DispenseCallsMethod) {
    DummyState s;
    s.dispense();
    EXPECT_EQ(s.called, "dispense");
}
