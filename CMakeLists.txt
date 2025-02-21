cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(main src/main.cpp src/utils.cpp)
add_executable(solver src/solver.cpp)

add_custom_target(run_main
    COMMAND main
    DEPENDS main
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
)

add_custom_target(run_solver
    COMMAND solver
    DEPENDS solver
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
)