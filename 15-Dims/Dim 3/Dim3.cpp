#include <iostream>
#include <array>
#include <fstream>
#include "Blockstream.h"

using std::array;

int main () {

    array<array<array<unsigned,4>,3>,12> total {};

    for (unsigned venta, mes, vendedor, region; std::cin >> venta >> mes >> vendedor >> region;)

        total.at(mes).at(vendedor).at(region) += venta;

        for (auto mes : total){
            for (auto vendedor : mes) {
                for (auto region: vendedor)
                    std::cout << region << '\t';
                std::cout << '\n';
            }
        std:: cout << "------------\n";
        }
    auto filename("totales");
    std::ofstream out(filename, std::ios::binary);
    WriteBlock(out, total);    
}
