#include <iostream>
#include <cassert>

// Especificación matemática
// Fibonacci N ---> N/Fibonacci (n)={n                                   si n<2
//                                  {Fibonacci (n-1) + Fibonacci (n-2)   e.o.c


//Prototipo

unsigned Fibonacci(unsigned);

int main(){

//std::cout<<Fibonacci(47);
//Pruebas
        assert(Fibonacci(0)==0);
        assert(Fibonacci(1)==1);
        assert(Fibonacci(4)==3);
        assert(Fibonacci(24)==46368);
        assert(Fibonacci(1)==Fibonacci(2));
        assert(Fibonacci(8)>Fibonacci(2));
        assert(Fibonacci(4)+Fibonacci(3)==Fibonacci(5));
        assert(Fibonacci(8)>=Fibonacci(2));
        assert(Fibonacci(17)!=Fibonacci(2));
        assert(Fibonacci(Fibonacci(4))==2);
        assert(Fibonacci((Fibonacci((Fibonacci((Fibonacci(4)))))))==1);
        assert(Fibonacci((Fibonacci((Fibonacci((Fibonacci(4)))))))==Fibonacci(1));
        assert(Fibonacci((Fibonacci((Fibonacci((Fibonacci(5)))))))==Fibonacci(5));
        assert(Fibonacci((Fibonacci((Fibonacci((Fibonacci(5)))))))==5);
         assert((Fibonacci((Fibonacci((Fibonacci(6))))))==10946);
        assert(Fibonacci(45)+Fibonacci(46)==Fibonacci(47));



    //assert(Fibonacci(48)==4807526976); a partir del Fibonacci 48 comienza a fallar, por trabajar con valores demasiado grandes, trabajando con datos de tipo long long podemos solucionar este problema pero definiendo las pre-condiciones de que los valores ingresados sean naturales.

}
unsigned Fibonacci(unsigned a){
    return a==0 ? 0
                : a==1 ? 1
                        : a==2 ? 1
                                : a==3 ? 2
                                        : a==4 ? 3
                                                :a==5 ? 5
                                                      : a==6 ? 8
                                                             : a==7 ? 13
                                                                    : a==8 ? 21
                                                                            : a==9 ? 34
                                                                                    : a==10 ? 55
                                                                                            : a==11 ? 89
                                                                                                    : a==12 ? 144
                                                                                                            : a==13 ? 233
                                                                                                                    : a==14 ? 377
                                                                                                                            : a==15 ? 610
                                                                                                                                    : a==16 ? 987
                                                                                                                                            : a==17 ? 1597
                                                                                                                                                    : a==18 ? 2584
                                                                                                                                                            : a==19 ? 4181
                                                                                                                                                                    : a==20 ? 6765
                                                                                                                                                                            : a==21 ? 10946
                                                                                                                                                                                    : a==22 ? 17711
                                                                                                                                                                                            : a==23 ? 28657
                                                                                                                                                                                                    : a==24 ? 46368
                                                                                                                                                                                                            :a==25 ? 75025
                                                                                                                                                                                                                    : a==26 ? 121393
                                                                                                                                                                                                                            : a==27 ? 196418
                                                                                                                                                                                                                                    : a==28 ? 317811
                                                                                                                                                                                                                                            : a==29 ? 514229
                                                                                                                                                                                                                                                    : a==30 ? 832040
                                                                                                                                                                                                                                                            :a==31 ? 1346269
                                                                                                                                                                                                                                                                    :a==32 ? 2178309
                                                                                                                                                                                                                                                                            :a==33 ? 3524578
                                                                                                                                                                                                                                                                                    : a==34 ? 5702887
                                                                                                                                                                                                                                                                                            : a==35 ? 9227465
                                                                                                                                                                                                                                                                                                    : a==36 ? 14930352
                                                                                                                                                                                                                                                                                                            : a==37 ? 24157817
                                                                                                                                                                                                                                                                                                                    : a==38 ? 39088169
                                                                                                                                                                                                                                                                                                                            : a==39 ? 63245986
                                                                                                                                                                                                                                                                                                                                    : a==40 ? 102334155
                                                                                                                                                                                                                                                                                                                                            : a==41 ? 165580141
                                                                                                                                                                                                                                                                                                                                                    : a==42 ? 267914296
                                                                                                                                                                                                                                                                                                                                                            : a==43 ? 433494437
                                                                                                                                                                                                                                                                                                                                                                    : a==44 ? 701408733
                                                                                                                                                                                                                                                                                                                                                                            : a==45 ? 1134903170
                                                                                                                                                                                                                                                                                                                                                                                    : a==46 ? 1836311903
                                                                                                                                                                                                                                                                                                                                                                                            : a== 47 ? 2971215073
                                                                                                                                                                                                                                                                                                                                                                                                    : a==48 ? 4807526976
                                                                                                                                                                                                                                                                                                                                                                                                            : a== 49 ? 7778742049 
                                                                                                                                                                                                                                                                                                                                                                                                                    : a==50 ? 12586269025
                                                                                                                                                                                                                                                                                                                                                                                                                                : Fibonacci(a-1) + Fibonacci(a-2);
}
