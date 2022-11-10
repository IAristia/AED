#include <iostream>
#include <array>
#include <fstream>

using std::array;

using Total = struct array<array<array<unsigned,4>, 3 >, 12 >; //renombramos el conjunto de arrays por "Total"
enum struct Mes { enero, febrero, marzo, abril, mayo, junio, julio, agosto, septiembre, octubre, noviembre, diciembre};
enum struct Region { n, s, e, o};
enum struct Vendedor { vendedor1, vendedor2, vendedor3};
/*
Especificación
GetPromedio Total(RxRxR)---->Unsigned(R) / GetPromedio(total) = sumatoria total(mes)(vendedor)(región) / size of(mes)*size of(vendedor)*size of(region)
                                        /              Estos irían cada uno de: mes=(0,11)               En este caso sería (12*3*4)
                                                                            vendedor(0,2)
                                                                              región(0,3)
*/
unsigned GetPromedio(Total); //o const Total&

unsigned GetPromedio(const Total& total){
    unsigned suma;

    for(auto Vendedor : total)
        for(auto Region : Vendedor)
            for(auto totalMes : Region)
                suma += totalMes;

    return suma/(
            total.size() *
            total.at(0).size() *
            total.at(0).at(0).size()
    ) ;

}
int main() {
            Total total {};
    for (unsigned venta, mes, vendedor, region; std::cin >> venta >> mes >> vendedor >> region;)
        total.at(mes).at(vendedor).at(region) += venta;

    for (auto mes : total){
        for (auto vendedor : mes) {
            for (auto region: vendedor)
                std::cout << region << '\t';
            std::cout << '\n';
        }
        std:: cout << "-------------------------\n";
    }

//    std::cout << "El promedio de ventas es" << GetPromedio(total) ;
//    std::cout << GetPromedio();
}
//Falta retocar y mejorar.
