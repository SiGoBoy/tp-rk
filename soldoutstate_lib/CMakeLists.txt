
add_library(soldoutstate_lib STATIC soldoutstate.cpp)

target_include_directories(soldoutstate_lib
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(soldoutstate_lib
    PUBLIC
        state_lib
)
