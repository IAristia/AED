#include <iostream>
#include <array>


// Venta* -> P -> Total
// Venta = N

int main () {

   std::array <unsigned,12> total{0}; // dim 1

   for (unsigned venta, mes; std::cin >> venta >> mes;)

        total.at(mes) += venta;

// std::cout << total << "\n" ; MAL, no se puede mostrar un arreglo

// for (int i{0}; i<12; ++i) // i++ = i = i+1
// std::cout << total.at(i) << "\n";  // funciona porque es un array de 1 dimensión.

    for (int totalDelMes : total)
        std::cout << totalDelMes << "\n";

}

