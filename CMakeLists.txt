cmake_minimum_required(VERSION 3.5)

PROJECT(i_wanna_fuck_u)


INCLUDE_DIRECTORIES(
  ${PROJECT_SOURCE_DIR}/include
)



##　Some propertys are initialized by the value of the variable below if it is set when a target is created.

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/ar)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/runtime)
set(COMPILE_PDB_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/compile_pod)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_PDB_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/pod)



## MESSAGE(STATUS ${PROJECT_SOURCE_DIR})
## MESSAGE(STATUS ${PROJECT_BINARY_DIR})

ADD_SUBDIRECTORY(src)
