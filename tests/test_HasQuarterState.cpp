#include <gtest/gtest.h>
#include "HasQuarterState.h"
#include "GumballMachine.h"

TEST(HasQuarterStateTest, InsertQuarterTwice) {
    GumballMachine machine(5);
    HasQuarterState state(&machine);
    testing::internal::CaptureStdout();
    state.insertQuarter();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("already inserted"), std::string::npos);
}
