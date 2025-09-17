
add_library(HasQuarterState_lib STATIC hasquarterstate.cpp)

target_include_directories(HasQuarterState_lib
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(HasQuarterState_lib
    PUBLIC
        state_lib
	gumballmachine_lib
)
