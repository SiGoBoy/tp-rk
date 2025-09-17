#include <gtest/gtest.h>
#include "state_lib/state.h"

class DummyState : public State {
public:
    std::string called;

    void insertCoin() override { called = "insertCoin"; }
    void ejectQuarter() override { called = "ejectQuarter"; }
    void turnCrank() override { called = "turnCrank"; }
    void dispense() override { called = "dispense"; }
};

TEST(StateTest, InsertCoinCallsMethod) {
    DummyState s;
    s.insertCoin();
    EXPECT_EQ(s.called, "insertCoin");
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
