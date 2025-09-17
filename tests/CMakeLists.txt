
set(TEST_LIBS
    gtest
    gtest_main
    state_lib
    HasQuarterState_lib
    NoQuarterState_lib
    gumballmachine_lib
    soldoutstate_lib
    soldstate_lib
    winnerstate_lib
)

function(add_project_test target src)
    add_executable(${target} ${src})
    target_link_libraries(${target} PRIVATE ${TEST_LIBS})
    add_test(NAME ${target} COMMAND ${target})
endfunction()

add_project_test(test_state test_state.cpp)
add_project_test(test_HasQuarterState test_HasQuarterState.cpp)
add_project_test(test_NoQuarterState test_NoQuarterState.cpp)
add_project_test(test_gumballmachine test_gumballmachine.cpp)
add_project_test(test_soldoutstate test_soldoutstate.cpp)
add_project_test(test_soldstate test_soldstate.cpp)
add_project_test(test_winnerstate test_winnerstate.cpp)
