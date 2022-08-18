#include <iostream>
#include <cassert>

// Definición matemática:

// División de dos enteros: NxN ---> N/Div (a,b) =  {0                  b>a
//                                                  {1 + Div(a-b,b)     e.o.c
// siendo a=dividendo y b=divisor
// Dominio del divisor: NxN -{0}


//Prototipo
unsigned Div(unsigned, unsigned);
int main(){
//Pruebas
    
    //    assert (Div(1,0)==1; //Causa un error, porque un numero no se puede dividir por 0
    
    assert(Div(1,1)==1);
    assert(Div(17,17)); // Este assert no da error ya que la división entre un número por si mismo es igual a 1; el 1 equivale a verdadero.
    assert(Div(0,1)==0);
    assert(Div(4,2)==2);
    assert(Div(11,5)==2);
    assert(Div(5,7)==0);
    assert(Div(50'000,2)==25'000);
    assert(Div(15'000+15'000,300)==100);
    assert(Div(6748,231) == Div(29'345,1011)); // 29 == 29
    
    assert(Div(6,2)!= 2);
    assert(Div(6,2)!= Div(4,958));
    assert(Div(11,5)!= Div(84'745,342)); // 2 != 247
    assert(Div(Div(843,11),22)!=4); // 3 != 4
    
    assert(Div(Div(843,11),22)==3);
    assert(Div(9533, Div(345,83))==2383);
    assert(Div(Div(69'523,3),Div(88,13))==3862); // Div (23'174,6) == 3'862
    assert(Div(Div(88,13),Div(69'523,3))==0); // Div(6,23'174) == 0
    assert(Div(Div(8,2),2)==Div(8,4));

    assert(Div(50'000,2)<=25'001); // 25'000 <= 25'001
    assert(Div(15'000+15'000,300+30+33)<83); // 82 < 83
    assert(Div(Div(6'123,2),Div(345,83)<766)); // 765 < 766
    assert(Div(Div(69'523,3),Div(88,13))<=3'863); // 3'862 <= 3'863
    
    
    // Nuevo problema: determinar la división entera de dos números dados, aplicando la división recursiva.
    // Modelo IPO (Imput – Process – Output) 

    unsigned c, d;
    std::cin >> c >> d;
    std::cout << Div(c,d);
}

unsigned Div(unsigned a, unsigned b){
    return b > a    ?
                        0 :
                        1+ Div(a-b,b);
}
