/*
Alumnos: Galgano, Aristia, Mosquera, Luberto
Solución para lectura de datos en forma binaria

*/
#include <iostream>
#include "BlockStream.h"

int main(){




    std::ofstream out("traducido_B_T.txt");

    for(unsigned aux;ReadBlock(std::cin, aux);)
        out<<aux<<' ';

    out.close();


}
