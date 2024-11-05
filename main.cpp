//
// Created by rania on 05/11/2024.
//

#include "main.h"
#include <iostream>
#include "parte 1/identificacion.h"
#include "parte 2/dia_semanal.h"
#include "parte 3/calculo.h"


int main()
{
    // Parte 1 del ejercicio
    int numero;
    std::cout << "Ingresa un numero entero: ";// Aquí debemos añdir unn número entero ya que es lo que nos pide el ejercicio, un ejemplo sería el 2 o el -22.
    std::cin >> numero;

    analizarNumero(numero);


    // Parte 2 del ejercicio, ayuda con Copilot
    int dia;
    std::cout << "Ingresa un número del 1 al 7: "; std::cin >> dia;

    imprimirDiaSemana(dia);


    // Parte 3 del ejercicio, fuente:copilot
    // Para el cálculo de este ejercicio hemos usado arrays y bucles, también añadimos constantes que es el número de ejercicios
    const int NUM_EJERCICIOS = 8;
    double calificaciones[NUM_EJERCICIOS];
    for (int i = 0; i < NUM_EJERCICIOS; ++i)
    {
        std::cout << "Ingresa la calificación del ejercicio " << (i + 1) << ": ";
        std::cin >> calificaciones[i];
        double promedio = calcularPromedio(calificaciones, NUM_EJERCICIOS); std::cout << "El promedio de las calificaciones es: " << promedio <<std::endl;


        return 0;
    }
}

