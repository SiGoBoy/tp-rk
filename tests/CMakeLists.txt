enable_testing()

add_executable(test_state
    test_state.cpp
    test_NoQuarterState.cpp
    test_SoldOutState.cpp
    test_SoldState.cpp
    test_WinnerState.cpp
)

target_link_libraries(test_state
    PRIVATE
        gtest_main
        state_lib
        NoQuarterState_lib
        SoldOutState_lib
        SoldState_lib
        winnerstate_lib
        gumballmachine_lib
)

target_include_directories(test_state PRIVATE
    ${CMAKE_SOURCE_DIR}/state_lib
    ${CMAKE_SOURCE_DIR}/NoQuarterState_lib
    ${CMAKE_SOURCE_DIR}/soldoutstate_lib
    ${CMAKE_SOURCE_DIR}/soldstate_lib
    ${CMAKE_SOURCE_DIR}/winnerstate_lib
    ${CMAKE_SOURCE_DIR}/gumballmachine_lib
    ${CMAKE_SOURCE_DIR}/HasQuarterState_lib
)

include(GoogleTest)
gtest_discover_tests(test_state)
