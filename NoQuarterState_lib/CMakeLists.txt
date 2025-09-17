
add_library(NoQuarterState_lib STATIC noquarterstate.cpp)

target_include_directories(NoQuarterState_lib
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(NoQuarterState_lib
    PUBLIC
        state_lib
	gumballmachine_lib
)
