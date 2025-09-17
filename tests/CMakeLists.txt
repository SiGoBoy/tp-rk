
set(TEST_SOURCES
    test_NoQuarterState.cpp
    test_HasQuarterState.cpp
    test_SoldOutState.cpp
    test_SoldState.cpp
    test_WinnerState.cpp
    test_gumballmachine.cpp
)

add_executable(check ${TEST_SOURCES})

target_include_directories(check PRIVATE
    ${CMAKE_SOURCE_DIR}/state_lib
    ${CMAKE_SOURCE_DIR}/NoQuarterState_lib
    ${CMAKE_SOURCE_DIR}/HasQuarterState_lib
    ${CMAKE_SOURCE_DIR}/SoldOutState_lib
    ${CMAKE_SOURCE_DIR}/SoldState_lib
    ${CMAKE_SOURCE_DIR}/WinnerState_lib
    ${CMAKE_SOURCE_DIR}/gumballmachine_lib
)

target_link_libraries(check PRIVATE
    gtest gtest_main gmock gmock_main
    state_lib
    NoQuarterState_lib
    HasQuarterState_lib
    SoldOutState_lib
    SoldState_lib
    WinnerState_lib
    gumballmachine_lib
)

add_test(NAME all_tests COMMAND check)
