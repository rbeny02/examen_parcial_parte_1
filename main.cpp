//
// Created by rania on 05/11/2024.
//

#include "main.h"
#include <iostream>
#include "parte 1/identificacion.h"
#include "parte 2/dia_semanal.h"

int main() {
     // Parte 1 del ejercicio
    int numero;
    std::cout << "Ingresa un numero entero: ";// Aquí debemos añdir unn número entero ya que es lo que nos pide el ejercicio, un ejemplo sería el 2 o el -22.
    std::cin >> numero;

    analizarNumero(numero);


    // Parte 2 del ejercicio, ayuda con Copilot
    int dia;
    std::cout << "Ingresa un número del 1 al 7: "; std::cin >> dia;

    imprimirDiaSemana(dia);


    return 0;
}

