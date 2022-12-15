/*
Alumnos: Galgano, Aristia, Mosquera, Luberto
Solución para lectura de datos en forma binaria

Objetivo de entrega:

Recibir feedback si el proceso de lectura y escritura de datos es el correcto y coincide con lo solicitado por el docente.

*/
#include <iostream>
#include "BlockStream.h"
#include <cassert>
#include <array>

using std::array;
using Total = array<array<array<unsigned,12>,3>,4>;

/*Creamos estructura que es una venta mensual, asociada a un vendedor, región y mes.
Esta estructura la vamos a utilizar para leer y también la utilizamos para la construcción
de las muestras para las pruebas*/

void CargarDatos(Total&, std::ifstream&);
struct venta{
    unsigned monto;
    unsigned mes;
    unsigned vendedor;
    unsigned region;
    void print_f(std::ofstream&);
};

int main(){




    std::ofstream out("traducido_B_T.txt");

    for(unsigned aux;ReadBlock(std::cin, aux);)
        out<<aux<<' ';

    out.close();


}

void venta::print_f(std::ofstream& out){
    out<<monto<<' ';
    out<<mes<<' ';
    out<<vendedor<<' ';
    out<<region<<'\n';
}
