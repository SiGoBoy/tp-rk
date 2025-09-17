#include <gtest/gtest.h>
#include "SoldOutState.h"
#include "GumballMachine.h"

TEST(SoldOutStateTest, InsertQuarter) {
    GumballMachine m(0);
    SoldOutState state(&m);

    testing::internal::CaptureStdout();
    state.insertQuarter();
    std::string out = testing::internal::GetCapturedStdout();

    EXPECT_NE(out.find("can't insert a quarter, the machine is sold out"), std::string::npos);
}

TEST(SoldOutStateTest, EjectQuarter) {
    GumballMachine m(0);
    SoldOutState state(&m);

    testing::internal::CaptureStdout();
    state.ejectQuarter();
    std::string out = testing::internal::GetCapturedStdout();

    EXPECT_NE(out.find("can't eject, you haven't inserted a quarter yet"), std::string::npos);
}

TEST(SoldOutStateTest, TurnCrank) {
    GumballMachine m(0);
    SoldOutState state(&m);

    testing::internal::CaptureStdout();
    state.turnCrank();
    std::string out = testing::internal::GetCapturedStdout();

    EXPECT_NE(out.find("turned, but there are no gumballs"), std::string::npos);
}

TEST(SoldOutStateTest, Dispense) {
    GumballMachine m(0);
    SoldOutState state(&m);

    testing::internal::CaptureStdout();
    state.dispense();
    std::string out = testing::internal::GetCapturedStdout();

    EXPECT_NE(out.find("No gumball dispensed"), std::string::npos);
}
