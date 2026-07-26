cmake_minimum_required(VERSION 3.10.2)
project(payload)

set(CMAKE_CXX_STANDARD 17)

add_library(payload SHARED
    src/payload.cpp
    src/lua_engine.cpp
    src/bypass.cpp
)

find_library(log-lib log)
target_link_libraries(payload ${log-lib})
