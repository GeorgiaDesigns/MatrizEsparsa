cmake_minimum_required(VERSION 3.12)
project(MatrixEsparsa)

set(CMAKE_CXX_STANDARD 14)

add_executable(MatrixEsparsa main.cpp matriz.h Elementos.cpp Elementos.h)