#include <gtest/gtest.h>
#include "NoQuarterState.h"
#include "gumballmachine.h"

TEST(NoQuarterStateTest, InsertCoin) {
    GumballMachine m(5);
    NoQuarterState state(&m);

    testing::internal::CaptureStdout();
    state.insertCoin();
    std::string out = testing::internal::GetCapturedStdout();

    EXPECT_NE(out.find("You inserted a quarter"), std::string::npos);
}

TEST(NoQuarterStateTest, EjectQuarter) {
    GumballMachine m(5);
    NoQuarterState state(&m);

    testing::internal::CaptureStdout();
    state.ejectQuarter();
    std::string out = testing::internal::GetCapturedStdout();

    EXPECT_NE(out.find("You haven't inserted a quarter"), std::string::npos);
}

TEST(NoQuarterStateTest, TurnCrank) {
    GumballMachine m(5);
    NoQuarterState state(&m);

    testing::internal::CaptureStdout();
    state.turnCrank();
    std::string out = testing::internal::GetCapturedStdout();

    EXPECT_NE(out.find("turned, but there's no quarter"), std::string::npos);
}

TEST(NoQuarterStateTest, Dispense) {
    GumballMachine m(5);
    NoQuarterState state(&m);

    testing::internal::CaptureStdout();
    state.dispense();
    std::string out = testing::internal::GetCapturedStdout();

    EXPECT_NE(out.find("You need to pay first"), std::string::npos);
}
