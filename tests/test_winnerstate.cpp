#include <gtest/gtest.h>
#include "WinnerState.h"
#include "GumballMachine.h"

TEST(WinnerStateTest, InsertQuarter) {
    GumballMachine m(5);
    WinnerState state(&m);

    testing::internal::CaptureStdout();
    state.insertQuarter();
    std::string out = testing::internal::GetCapturedStdout();

    EXPECT_NE(out.find("Please wait, we're already giving you a gumball"), std::string::npos);
}

TEST(WinnerStateTest, EjectQuarter) {
    GumballMachine m(5);
    WinnerState state(&m);

    testing::internal::CaptureStdout();
    state.ejectQuarter();
    std::string out = testing::internal::GetCapturedStdout();

    EXPECT_NE(out.find("Sorry, you already turned the crank"), std::string::npos);
}

TEST(WinnerStateTest, TurnCrank) {
    GumballMachine m(5);
    WinnerState state(&m);

    testing::internal::CaptureStdout();
    state.turnCrank();
    std::string out = testing::internal::GetCapturedStdout();

    EXPECT_NE(out.find("Turning twice doesn't get you another gumball"), std::string::npos);
}

TEST(WinnerStateTest, Dispense) {
    GumballMachine m(5);
    WinnerState state(&m);

    testing::internal::CaptureStdout();
    state.dispense();
    std::string out = testing::internal::GetCapturedStdout();

    EXPECT_TRUE(
        out.find("YOU'RE A WINNER") != std::string::npos ||
        out.find("Oops, out of gumballs") != std::string::npos
    );
}
