#include <iostream>
#include <array>

int main () {
    
std::array <std::array<unsigned,3>,12> total; // ¿cuál array está adentro de cuál?


for (unsigned venta, mes, vendedor; std::cin >> venta >> mes >> vendedor;) {

if (vendedor == 1)

total.at(mes).at(vendedor) += venta; 
// total.at(vendedor).at(mes) += venta; // cuál es la diferencia con la línea 16?

if (vendedor == 2)

total.at(mes).at(vendedor) += venta;

else

total.at(mes).at(vendedor) += venta;


//for (int totalDelMes : total) { // problema : recorrer el array del array e ir mostrando los valores.
//std::cout << total;


}
}
