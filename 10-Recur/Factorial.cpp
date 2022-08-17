
int main() {

    assert ( fac (4) == 24);
    assert ( fac (0) == 1);
    assert ( fac (1) == 1);
    assert (fac (-1) == 1);
    assert ( fac (2) == 2);
    assert ( fac (-2) == 2);
    assert ( fac (10) == 3'628'800);
    assert ( fac (-10) == 3'628'800);



}

// Implementacion
unsigned fac (unsigned a){ return a==0 ? 1 :
                                  a * fac(a-1);}
