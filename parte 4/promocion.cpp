//
// Created by rania on 05/11/2024.
//

#include "promocion.h"
#include "algorithm"

double calcularTotalPromocion(double precio1, double precio2, double precio3) {

    double max1 = std::max(precio1, std::max(precio2, precio3));
    double min1 = std::min(precio1, std::min(precio2, precio3));
    double max2 = (precio1 + precio2 + precio3) - max1 - min1;


    return max1 + max2;
}
