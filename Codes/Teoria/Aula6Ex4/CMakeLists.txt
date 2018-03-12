cmake_minimum_required(VERSION 3.7)
project(Testes)

set(CMAKE_CXX_STANDARD 11)
include_directories(${LIBRARY_OUTPUT_PATH}Lib)
set(SOURCE_FILES "Aula6Ex4.cpp" Lib/Funcionario.cpp Lib/Funcionario.h)

add_executable(Testes ${SOURCE_FILES} Lib/Funcionario.cpp Lib/Funcionario.h)