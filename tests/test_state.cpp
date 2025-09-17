#include <gtest/gtest.h>
#include "state.h"

class DummyState : public State {
public:
    void insertCoin() override { called = "insertCoin"; }
    void ejectCoin() override { called = "ejectCoin"; }
    void turnCrank() override { called = "turnCrank"; }
    void dispense() override { called = "dispense"; }

    std::string called;
};

TEST(StateTest, InsertCoinCallsMethod) {
    DummyState s;
    s.insertCoin();
    EXPECT_EQ(s.called, "insertCoin");
}

TEST(StateTest, EjectCoinCallsMethod) {
    DummyState s;
    s.ejectCoin();
    EXPECT_EQ(s.called, "ejectCoin");
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
