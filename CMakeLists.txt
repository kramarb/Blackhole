cmake_minimum_required(VERSION 3.5)
project("Blackhole")

set(SOURCE_DIR "${CMAKE_SOURCE_DIR}/src")

set(BLACKHOLE_SRCS "${SOURCE_DIR}/main.cpp")
message("Hello")
message(${BLACKHOLE_SRCS})
add_executable(blackhole_engine ${BLACKHOLE_SRCS})
