#include <gtest/gtest.h>
#include "SoldState.h"
#include "gumballmachine.h"

TEST(SoldStateTest, InsertCoin) {
    GumballMachine m(5);
    SoldState state(&m);

    testing::internal::CaptureStdout();
    state.insertCoin();
    std::string out = testing::internal::GetCapturedStdout();

    EXPECT_NE(out.find("Please wait, we're already giving you a gumball"), std::string::npos);
}

TEST(SoldStateTest, EjectQuarter) {
    GumballMachine m(5);
    SoldState state(&m);

    testing::internal::CaptureStdout();
    state.ejectQuarter();
    std::string out = testing::internal::GetCapturedStdout();

    EXPECT_NE(out.find("Sorry, you already turned the crank"), std::string::npos);
}

TEST(SoldStateTest, TurnCrank) {
    GumballMachine m(5);
    SoldState state(&m);

    testing::internal::CaptureStdout();
    state.turnCrank();
    std::string out = testing::internal::GetCapturedStdout();

    EXPECT_NE(out.find("Turning twice doesn't get you another gumball"), std::string::npos);
}

TEST(SoldStateTest, Dispense) {
    GumballMachine m(5);
    SoldState state(&m);

    testing::internal::CaptureStdout();
    state.dispense();
    std::string out = testing::internal::GetCapturedStdout();

    EXPECT_TRUE(
        out.find("A gumball comes rolling out the slot") != std::string::npos ||
        out.find("Oops, out of gumballs") != std::string::npos
    );
}
