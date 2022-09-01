#include <iostream>
#include <cassert>
#include <cmath>

/*
Problema: Distancia entre dos puntos en el plano 
*/


/*
 Punto = {(x,y)/x,yE R} = R^2
 Dis: Punto x Punto -> R / Dis( a , b ) = {raiz((ax-bx)^2+(ay-by)^2}


}
 */
bool AreNear(double, double, double = 0.1); //cambiando la tolerancia, tenemos que cambiar los resultados

struct point{
    double x,y;
};

double dist(point, point);
int main ()
{
    assert ( AreNear(Dis({0,0},{0,0}), 0.1)); //se puede poner 0 tmb, ya que en el prototipo la tolerancia es de 0.1
    assert ( AreNear(Dis({1,1},{1,1}),0));
    assert ( AreNear(Dis({-1,1},{1,-1}),2.8));
    assert ( AreNear(Dis({-1,0},{1,0}), 2));
    assert ( AreNear(Dis({0,-1}, {0,1}),2));
    assert ( AreNear(Dis({1.0,1.0},{-1.0,-1.0}),2.8));
    assert ( AreNear(Dis({3.2,1},{-4.5,3.2}),8));
    assert ( AreNear(Dis({-2.3,-1.6},{-4.3,-1.3}),2));
    assert ( AreNear(Dis({-2.3,1.6},{-4.3,1.3}),2));
    assert ( AreNear(Dis({-2.3,-1.6},{4.3,1.3}),7.11));
    assert ( AreNear(Dis({2.3,-1.6},{4.3,-1.3}),2));
}

bool AreNear (double a, double b, double c ) {return (a + c >= b) and (a - c) <= b;}

double Dis( Punto d, Punto e) {return sqrt (
                                           pow(d.x-e.x,2) + pow(d.y-e.y,2)
                                           );}  
