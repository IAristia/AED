/*
Alumnos: Galgano, Aristia, Mosquera, Luberto
Solución para lectura de datos en forma binaria

*/
#include <iostream>
#include "BlockStream.h"
#include <cassert>
#include <array>



    /*Creamos estructura que es una venta mensual, asociada a un vendedor, región y mes.
    Esta estructura la vamos a utilizar para leer y también la utilizamos para la construcción
    de las muestras para las pruebas*/


int main(){



    
   std::ofstream out("header_B_T.bin");
   out<<"binary"<<'\n';
   out<<"binary"<<'\n';
    for(unsigned aux;ReadBlock(std::cin, aux);)
        WriteBlock(out,aux);
      
    
    out.close();
    

}

