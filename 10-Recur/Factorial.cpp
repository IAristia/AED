#include <assert.h>
/**********FACTORIAL***********/
/*
fac: Z-->Z/ fac(a)={1  a =  0
                    a x fac(a-1) a>0}
*/
/*Prototipo*/
int fac(unsigned int);

int main() {
/*Pruebas*/
    assert ( fac (4) == 24);
    assert ( fac (0) == 1);
    assert ( fac (1) == 1);
    //assert (fac (-1) == 1);
    assert ( fac (2) == 2);
    //assert ( fac (-2) == 2);
    assert ( fac (10) == 3'628'800);
    //assert ( fac (-10) == 3'628'800);



}

// Implementacion
int fac (unsigned a){ return a==0 ? 1 :
                                  a * fac(a-1);}
