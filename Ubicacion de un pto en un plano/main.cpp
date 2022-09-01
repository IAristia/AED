#include <iostream>
#include <cassert>
#include <iostream>

/*
Problema: Ubicacion de un punto en un plano 
*/
/*
  Punto = {(x,y)/x,yE R} = R^2
*/
struct Punto{ double x,y;};

enum struct Sector { Origen, CuadranteI, CuadranteII, CuadranteIII, CuadranteIV, semiejexpos, semiejexneg, semiejeypos, semiejeyneg};

Sector Donde(Punto); // int Donde(double, double);

int main(){
    assert ( Donde ({0,0}) == Sector::Origen);
    assert ( Donde ({1,1}) == Sector::CuadranteI);
    assert ( Donde ({-1,1}) == Sector::CuadranteII);
    assert ( Donde ({-1,-1}) == Sector::CuadranteIII);
    assert ( Donde ({1,-1}) == Sector::CuadranteIV);
    assert ( Donde ({1,0}) == Sector::semiejexpos);
    assert ( Donde ({0,1}) == Sector::semiejeypos);
    assert ( Donde ({-1,0}) == Sector::semiejexneg);
    assert ( Donde ({0,-1}) == Sector::semiejeyneg);
    assert ( Donde ({-0.0,-0.0}) == Sector::Origen);
    assert ( Donde ({4.67,2.675}) == Sector::CuadranteI);
    assert ( Donde ({-2.65,23}) == Sector::CuadranteII);
    assert ( Donde ({-3,-4}) == Sector::CuadranteIII);
    assert ( Donde ({4.2,-3.8}) == Sector::CuadranteIV);
    assert ( Donde ({1745.3,0}) == Sector::semiejexpos);
    assert ( Donde ({0,4.3}) == Sector::semiejeypos);
    assert ( Donde ({0,-34.8}) == Sector::semiejeyneg);
    assert ( Donde ({-1.3,0}) == Sector::semiejexneg);
    assert ( Donde ({54.7,23.5}) == Sector::CuadranteI);
    assert ( Donde ({-32.4,9.0}) == Sector::CuadranteII);
    assert ( Donde ({-8.32,-4.5}) == Sector::CuadranteIII);
    assert ( Donde ({7.34,-12.2}) == Sector::CuadranteIV);
    assert ( Donde ({14.2,0}) == Sector::semiejexpos);
    assert ( Donde ({0,86.2}) == Sector::semiejeypos);
    assert ( Donde ({0,-98.2}) == Sector::semiejeyneg);
    assert ( Donde ({-41.2,0}) == Sector::semiejexneg);
    //assert ( Donde ({1/3,5}) == Sector::CuadranteI); Da error porque dividir 1/3 como enteros da como resultado 0; queda Donde (0.0,5.0), que no es CuadranteI sino que semiejeypos.
    assert ( Donde ({1/3,5}) == Sector::semiejeypos);
    assert ( Donde ({1.0/3,5}) == Sector::CuadranteI);
}
Sector Donde(Punto p){  return
                        p.x>0 and p.y>0 ? Sector::CuadranteI	:
                        p.x<0 and p.y>0 ? Sector::CuadranteII	:
                        p.x<0 and p.y<0 ? Sector::CuadranteIII	:
                        p.x>0 and p.y<0 ? Sector::CuadranteIV 	:
                        p.x>0 and p.y==0 ? Sector::semiejexpos 	:
                        p.x<0 and p.y==0 ? Sector::semiejexneg 	:
                        p.x==0 and p.y>0 ? Sector::semiejeypos 	:
                        p.x==0 and p.y<0 ? Sector::semiejeyneg 	:
                                             Sector::Origen	  	;	 // EOC
                     }
