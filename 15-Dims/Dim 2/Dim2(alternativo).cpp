#include <iostream>
#include <array>

int main () {
    
std::array <std::array<unsigned,3>,12> total {};

for (unsigned venta, mes, vendedor; std::cin >> venta >> mes >> vendedor;) 
            total.at(mes).at(vendedor) += venta;

        for (auto vendedor: total) {
            for (auto totaldelmes : vendedor){
                std::cout << totaldelmes << '\n';}
             std::cout << "-----------\n";

        }
    }
