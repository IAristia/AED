#define NDEBUG
#include <iostream>
#include <cassert>

/*Especificacion mcd

 Mcd: Z x Z --> Z / Mcd(d,n)= {0      r = 0
                              {Mcd (b,r) si r != 0
 r = n%d
 r == resto de la division de n por d

*/

/*Prototipo*/
int mcd(int, int);

/*Assert*/
int main()
{
    assert(mcd(14, 2) == 2);
    assert(mcd(13, 7) == 1);
    assert(mcd(-14, 2) == 2);
    assert(mcd(0, 4) == 4);
    assert(mcd(-14, -2) == -2);
}

/*Implementación*/
int mcd(int a, int b) { return a % b == 0 ? b : mcd(b, a % b); }
