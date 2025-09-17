#include <gtest/gtest.h>
#include "HasQuarterState_lib/HasQuarterState.h"
#include "gumballmachine_lib/gumballmachine.h"

TEST(HasQuarterStateTest, InsertCoinTwice) {
    GumballMachine machine(5);
    HasQuarterState state(&machine);

    testing::internal::CaptureStdout();
    state.insertCoin();
    std::string out1 = testing::internal::GetCapturedStdout();

    testing::internal::CaptureStdout();
    state.insertCoin();
    std::string out2 = testing::internal::GetCapturedStdout();

    EXPECT_NE(out1.find("You can't insert another coin"), std::string::npos);
    EXPECT_NE(out2.find("You can't insert another coin"), std::string::npos);
}

TEST(HasQuarterStateTest, EjectQuarter) {
    GumballMachine machine(5);
    HasQuarterState state(&machine);

    testing::internal::CaptureStdout();
    state.ejectQuarter();
    std::string out = testing::internal::GetCapturedStdout();

    EXPECT_NE(out.find("Quarter returned"), std::string::npos);
}

TEST(HasQuarterStateTest, TurnCrank) {
    GumballMachine machine(5);
    HasQuarterState state(&machine);

    testing::internal::CaptureStdout();
    state.turnCrank();
    std::string out = testing::internal::GetCapturedStdout();

    EXPECT_NE(out.find("You turned..."), std::string::npos);
}
