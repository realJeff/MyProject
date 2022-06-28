cmake_minimum_required(VERSION 3.17)
project(MyProject)

enable_testing()

find_package( GTest 1.8.0 )
add_subdirectory( Algorithm )

set( CMAKE_CXX_STANDARD 14 )
set( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin )

add_executable( myproject main.cpp )
target_link_libraries( myproject PUBLIC algorithm )
target_include_directories( myproject PUBLIC "${PROJECT_SOURCE_DIR}" )
install(TARGETS myproject DESTINATION bin)


