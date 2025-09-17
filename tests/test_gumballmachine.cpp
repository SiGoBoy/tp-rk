#include <gtest/gtest.h>
#include "GumballMachine.h"

TEST(GumballMachineTest, InitialStateIsNoQuarter) {
    GumballMachine m(5);
    EXPECT_EQ(m.getCount(), 5);
}

TEST(GumballMachineTest, InsertQuarterChangesState) {
    GumballMachine m(5);
    testing::internal::CaptureStdout();
    m.insertQuarter();
    std::string out = testing::internal::GetCapturedStdout();
    EXPECT_NE(out.find("inserted"), std::string::npos);
}
