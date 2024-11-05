//
// Created by rania on 05/11/2024.
//

#include "calculo.h"
#include "parte 3/calculo.h"

double calcularPromedio(const double calificaciones[], int num_ejercicios) {
    double suma = 0.0;
    for (int i = 0; i < num_ejercicios; ++i) {
        suma += calificaciones[i];
    }
    return suma / num_ejercicios;
}
