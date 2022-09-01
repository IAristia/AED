#include <iostream>
#include <cassert>
#include <cmath>

/*
Problema: Distancia entre dos puntos en el plano 
*/


/*
 Punto = {(x,y)/x,yE R} = R^2
 Dis: Punto x Punto -> R / Dis( a , b ) = {raiz((ax-bx)^2+(ay-by)^2}


 */
bool AreNear(double, double, double = 0.1); //cambiando la tolerancia, tenemos que cambiar los resultados

struct point{
    double x,y;
};

double dist(point, point);
int main ()
{

}

bool AreNear(double x, double y, double r=0.1)
{


}
double dist(point a, point b)
{
    return(sqrt((a.x-b.x)^2+(a.y-b.y)^2));
}