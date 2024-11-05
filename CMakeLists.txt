cmake_minimum_required(VERSION 3.29)
project(examen_parcial_parte_1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(examen_parcial_parte_1
    main.cpp
    main.h
        "parte 1/identificacion.h"
        "parte 1/identificacion.cpp"
        "parte 2/dia_semanal.h"
        "parte 2/dia_semanal.cpp"
        "parte 3/calculo.h"
        "parte 3/calculo.cpp"
        "parte 4/promocion.h"
        "parte 4/promocion.cpp")
