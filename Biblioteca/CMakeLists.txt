cmake_minimum_required(VERSION 3.13)
project(Biblioteca)

set(CMAKE_CXX_STANDARD 17)

add_executable(Biblioteca main.cpp Biblioteca.cpp Biblioteca.h Volumen.cpp Volumen.h Libro.cpp Libro.h Revista.cpp Revista.h)