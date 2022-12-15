/*
Alumnos: Galgano, Aristia, Mosquera, Luberto
Solución para lectura de datos en forma binaria

Objetivo de entrega:

Recibir feedback si el proceso de lectura y escritura de datos es el correcto y coincide con lo solicitado por el docente.

*/
#include <iostream>
#include "BlockStream.h"

int main(){




    std::ofstream out("Traducido_B_T.txt");

    for(unsigned aux;ReadBlock(std::cin, aux);)
        out<<aux<<' ';

    out.close();


}
