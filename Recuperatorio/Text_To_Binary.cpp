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

    

int main(){



    std::ofstream out("traducido_T_B.bin", std::ios::binary);
   
    for(unsigned aux;std::cin>>aux;)
        WriteBlock(out, aux);
    
    out.close();

    
}

