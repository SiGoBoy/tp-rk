
add_library(gumballmachine_lib STATIC gumballmachine.cpp)

target_include_directories(gumballmachine_lib
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(gumballmachine_lib
    PUBLIC
        state_lib
        HasQuarterState_lib
        NoQuarterState_lib
        soldoutstate_lib
        soldstate_lib
        winnerstate_lib
)
