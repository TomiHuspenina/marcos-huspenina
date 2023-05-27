cmake_minimum_required(VERSION 3.24)
project(Batalla_Naval)

set(CMAKE_CXX_STANDARD 17)

add_executable(Batalla_Naval main.cpp Jugador.h Jugador.cpp Maquina.h Maquina.cpp Humano.cpp Tablero.h Tablero.cpp Barcos.h Barcos.cpp)
