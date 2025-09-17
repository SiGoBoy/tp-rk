# tests/CMakeLists.txt

file(GLOB TEST_SRC *.cpp)

add_executable(test_all ${TEST_SRC})

target_link_libraries(test_all
    PRIVATE
        gtest_main
        state_lib
        HasQuarterState_lib
        NoQuarterState_lib
        gumballmachine_lib
        soldoutstate_lib
        soldstate_lib
        winnerstate_lib
        gumballmachine_lib
)

target_include_directories(test_all PRIVATE
    ${CMAKE_SOURCE_DIR}/state_lib
    ${CMAKE_SOURCE_DIR}/HasQuarterState_lib
    ${CMAKE_SOURCE_DIR}/NoQuarterState_lib
    ${CMAKE_SOURCE_DIR}/gumballmachine_lib
    ${CMAKE_SOURCE_DIR}/soldoutstate_lib
    ${CMAKE_SOURCE_DIR}/soldstate_lib
    ${CMAKE_SOURCE_DIR}/winnerstate_lib
)

include(GoogleTest)
gtest_discover_tests(test_all)
