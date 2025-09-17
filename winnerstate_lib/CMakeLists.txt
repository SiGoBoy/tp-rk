
add_library(winnerstate_lib STATIC winnerstate.cpp)

target_include_directories(winnerstate_lib
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(winnerstate_lib
    PUBLIC
        state_lib
)
target_link_libraries(winnerstate_lib PUBLIC gumballmachine_lib)
