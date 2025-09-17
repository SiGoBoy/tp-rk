#include <gtest/gtest.h>
#include "state.h"

class DummyState : public State {
public:
    std::string called;
    
    void insertCoin() override { called = "insertCoin"; }
    void ejectCoin() override { called = "ejectCoin"; }
    void turnCrank() override { called = "turnCrank"; }
    void dispense() override { called = "dispense"; }
    void refill() override { called = "refill"; }
};

class StateTest : public ::testing::Test {
protected:
    DummyState s;
};

TEST_F(StateTest, InsertCoinCallsMethod) {
    s.insertCoin();
    EXPECT_EQ(s.called, "insertCoin");
}

TEST_F(StateTest, EjectCoinCallsMethod) {
    s.ejectCoin();
    EXPECT_EQ(s.called, "ejectCoin");
}

TEST_F(StateTest, TurnCrankCallsMethod) {
    s.turnCrank();
    EXPECT_EQ(s.called, "turnCrank");
}

TEST_F(StateTest, DispenseCallsMethod) {
    s.dispense();
    EXPECT_EQ(s.called, "dispense");
}

TEST_F(StateTest, RefillCallsMethod) {
    s.refill();
    EXPECT_EQ(s.called, "refill");
}
