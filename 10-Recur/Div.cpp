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
    assert(Div(1,1)==1);
    assert(Div(17,17)); // Este assert no da error ya que la división entre un número por si mismo es igual a 1 ;el 1 equivale a verdadero.
    assert(Div(0,1)==0);
    assert(Div(4,2)==2);
    assert((Div(5,2))==2);
    assert(Div(5,7)==0);
    assert(Div(11,5)==2);
    assert(Div(50'000,2)==25'000);
    assert(Div(15'000+15'000,300)==100);
    assert(Div(Div(8,2),2)==2);
    assert(Div(9, Div(6,2))==3);
    assert(Div(Div(6,2),Div(8,4))==1);
    assert(Div(Div(843,11),22)==3);
    assert(Div(9533, Div(345,83))==2383);
    assert(Div(Div(69'523,3),Div(88,13))==3'862);
    assert(Div(Div(88,13),Div(69'523,3))==0);
    assert(Div(1,1)<4);
    assert(Div(9,3)>1);
    assert(Div(6,14)<4);
