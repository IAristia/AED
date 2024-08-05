#include <iostream>
#include <array>

int main () {
    
std::array <std::array<unsigned,12>,3> total {};

for (unsigned venta, mes, vendedor; std::cin >> venta >> mes >> vendedor;) 

            total.at(vendedor).at(mes) += venta;

        for (auto vendedor : total) { // del arreglo total extrae un elemento (array de 12 unsigneds).
            for (auto totaldelmes : vendedor){ // del arreglo vendedor extrae un elemento (1 unsigned (suma de ventas de un vendedor específico en un mes en específico))
                std::cout << totaldelmes << '\t';}
             std::cout << "\n--------------------------------------------------------\n";

        }
    }
