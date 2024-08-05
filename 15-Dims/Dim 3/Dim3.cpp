#include <iostream>
#include <array>


using std::array;

int main () {

    array<array<array<unsigned,12>,3>,4> total {};
    
     for (unsigned venta, mes, vendedor, region; std::cin >> venta >> mes >> vendedor >> region;){

        total.at(mes).at(vendedor).at(region) += venta;
}
    for (auto region : total){ // extrae una region del array total.
        for (auto vendedor : region) { // extrae un vendedor del array region.
            for (auto totaldelmes: vendedor) // extrae el total de un mes del array vendedor.
                std::cout << totaldelmes << '\t';
            std::cout << '\n';
        }
        std:: cout << "-----------------------------------------------------\n";}

}
