#include <iostream>
#include <array>

int main () {
    
std::array <std::array<unsigned,3>,12> total; // ¿cuál array está adentro de cuál?

//using meses = std::array<unsigned,12>;

//std::array <meses,3> total{0}; // array de array

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

/* for (int i = 0; i < 12 ; i++){

    for (int j = 0; i < 3 ; j++) {

        std::cout << total[i][j] <<"\n";
}
}
*/

}
}
