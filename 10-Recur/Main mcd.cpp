#define NDEBUG
#include <iostream>
#include <cassert>


//Especificacion mcd

// Mcd: Z x Z --> Z / Mcd(d,n)= {0      r = 0
//                              {Mcd (b,r) si r != 0
// r = n%d
// r == resto de la division de n por d


//Prototipo

int mcd (int, int);

