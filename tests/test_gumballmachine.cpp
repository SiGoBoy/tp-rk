#include <gtest/gtest.h>
#include "gumballmachine.h"

TEST(GumballMachineTest, InitialStateIsNoQuarter) {
    GumballMachine m(5);
    EXPECT_EQ(m.getCount(), 5);
}

TEST(GumballMachineTest, InsertCoinChangesState) {
    GumballMachine m(5);
    testing::internal::CaptureStdout();
    m.insertCoin();
    std::string out = testing::internal::GetCapturedStdout();
    EXPECT_NE(out.find("inserted"), std::string::npos);
}
