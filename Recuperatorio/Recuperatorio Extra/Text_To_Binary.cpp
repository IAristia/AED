/*
Alumnos: Galgano Juan Pablo, Aristia Iñaki, Mosquera Alfaro Francisco, Luberto Ezequiel

Solución para lectura de datos en forma binaria

 */
#include <iostream>
#include "BlockStream.h"

int main(){

    std::ofstream out("Traducido_T_B.bin", std::ios::binary);

    for(unsigned aux;std::cin>>aux;)
        WriteBlock(out, aux);

    out.close();


}
