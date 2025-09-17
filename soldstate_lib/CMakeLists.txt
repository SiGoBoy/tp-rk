add_library(soldstate_lib STATIC SoldState.cpp)

target_include_directories(soldstate_lib
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(soldstate_lib
    PUBLIC
        state_lib
)
