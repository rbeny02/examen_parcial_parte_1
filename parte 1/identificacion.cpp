//
// Created by rania on 05/11/2024.
//

#include "identificacion.h"
#include <iostream>

// Para solucionar este parte del ejercicio usaremos un if, es decir, una condicional.
void analizarNumero(int numero) // Añadimos la función de analizarNumero para saber de que tipo de número trata

{
    if (numero>0)
    {
        std::cout << "el numero es posistivo" << std::endl;

    } else if (numero<0) {
        std::cout << "El número es negativo." << std::endl; }

    else { std::cout << "El número es cero." << std::endl; }
    }

