cmake_minimum_required(VERSION 3.5)
project("Blackhole")
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/sdl2-cmake-scripts")
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/assimp/cmake-modules")


set(SOURCE_DIR "${CMAKE_SOURCE_DIR}/src")
set(ASSIMP_ROOT_DIR ${CMAKE_SOURCE_DIR}/assimp/install)
set(BLACKHOLE_SRCS "${SOURCE_DIR}/main.cpp")
find_package(SDL2 REQUIRED)
find_package(assimp REQUIRED)
find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)
set(INCLUDE_DEPS ${SDL2_INCLUDE_DIR} 
                 ${assimp_INCLUDE_DIRS}
                 ${OPENGL_INCLUDE_DIR}
                 ${GLEW_INCLUDE_DIR})
set(LIB_DEPS ${SDL2_LIBRARY} 
             ${assimp_LIBRARIES}
             ${OPENGL_gl_LIBRARY}
             ${OPENGL_glu_LIBRARY}
             ${GLEW_LIBRARY})
add_executable(blackhole_engine ${BLACKHOLE_SRCS})
target_include_directories(blackhole_engine PRIVATE ${INCLUDE_DEPS})
target_link_libraries(blackhole_engine ${LIB_DEPS})
