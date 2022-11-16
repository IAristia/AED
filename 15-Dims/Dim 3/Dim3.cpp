#include <iostream>
#include <array>


using std::array;

int main () {

    array<array<array<unsigned,12>,3>,4> total {};
    
     for (unsigned venta, mes, vendedor, region; std::cin >> venta >> mes >> vendedor >> region;)

        total.at(mes).at(vendedor).at(region) += venta;
}
