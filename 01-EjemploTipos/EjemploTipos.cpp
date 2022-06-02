#include <iostream>
#include <string>
#include <cassert>

int main() {

    //booleano
    assert (true); // V
    assert (not false); // ~ F
    assert (not (not true)); // ~ (~ V)
    assert (not (not (not false))); // ~ (~ ( ~ F)
    assert (false==false); // (F = F))
    assert ((false and false)==false); // (F ^ F) = F
    assert ((false and true)!= not false); // (F ^ V) ≠ ~ F
    assert (false!=true); // F ≠ V
    assert (false!=(true or false)); // F ≠ (V v F)
    assert (false == not true); // (F = ~ V)
    assert (true and true); // V ^ V
    assert (false or true or false); // F v V v F
    assert (false or not true or false or false or (not (not true)) or not true); // F v ~ V v F v F v ~ (~ V) v ~ V
    assert ((false and false) == false); // (F ^ F) = F
    assert ((true and false) == not true); // (V ^ F) = ~ V
    assert ((true and true) == (not (false and true))); // (V ^ V) = (~ (F ^ V))
    assert ((true and false) != ((not false) and true)); // V ^ F ≠ (~ F ^ V) 
    assert ((false or not false) and (true and (not (not true)))); // (F v ~ F) ^ (V ^ ~ ( ~ V))
    assert (not (false and false)); // ~ (F ^ F)
    assert (not (false or not true or false or (not (not (not true))))); // ~ [(F v ~ V v F v ~ (~ (~ V)))]


    //caracteres
    assert ('i'=='i');    
    assert ('a'!= 'b');
    assert ('c'+'d' == 199);
    assert ('c'+'d' != 200);
    assert ('d'-'c' == 1); // calculo al distancia entre d y c (ASCII).
    assert ('d'-'c' != 5); 
    assert ('c'+ 2 == 'e');
    assert ('c'+ 2 != 'j');
    assert ('c'- 2 == 'a');
    assert ('c'- 2 != 'A');
    assert ('a'+'b' != 'c');
    assert ('a'<'b');
    assert (('a'+'b'-'V') > 'g');
    assert (('a'+'b'-'V') < 'w'); 
    assert ('w' >= 'g');
    assert (('a'+'b'-'V') == 109);
    assert ('m' == 109);
    assert (('a'+'b'-'V') == 'm');
    assert (('a'+'b'-'V') <= 'm');
    assert (('a'+'b'-'V') <= 'z'); // z vale 122 (ASCII).
    assert (('a'+'b'-'V') >= 'm');
    assert (('a'+'b'-'V') >= 'k'); // k vale 107 (ASCII).
    assert (('o'+'p'-'r') == 'm');
    assert (('a'+'b'-'V') == ('o'+'p'-'r'));
    assert (('a'+'b'-'V') != ('o'+'p'-'R'));
    assert ('a' / 'a'); // toma el 1 como verdadero, si fuera 0, a la hora de ejecutar, sale con código distinto a 0.
    assert ('b' - 'a'); // toma el 1 como verdadero, si fuera 0, a la hora de ejecutar, sale con código distinto a 0.
    assert (('1' * '0' - '0' * '0') == 48);
    assert (('1' * '0' - '0' * '0') >= 48);
    assert (('1' * '0' - '0' * '0') <= 48);
    assert ('z' / '=' == 2);
    assert ('z' / '=' == 'Z' / '-');
    assert ('}' > '#' + '$' );
    assert ((('d' + 'F') * 2) < (('w' / 'w') + ('"' * ('T' - 'J'))));
    assert ((('d' - 'F') * 5) > ('2' * 2 + (('(' + 'n')/ 3) - (('I' / 'I') + ('x' * 0))));    


    //int (enteros)
    assert (2 == 1 + 1);
    assert (5 - 2 == 3);
    assert (23 + 2 == 25);
    assert (101 - 10 != 90);
    assert (1'000'000 == 999'999 + 1);
    assert (202-2 == 200);
    assert (5000 != 5012);
    assert (202-10 != 200);
    assert (202-2 != 200+2);
    assert (2'000'000 > 1);
    assert (2'000 < (2'000 + 1));
    assert ((200 - 30) * 2 == 340);
    assert ((200 - 30) * 2 != 400);
    assert ((200 - 30) * 5 == 850);
    assert ((200 - 30) * 5 != 900);
    assert ((200 - 30) * 2 < 350);
    assert ((200 - 30) * 5 > 700);
    assert (((800 / 800) + 340 == 341));
    assert ((800 + (150 / 3) - ((25 / 25) + (1'000 * 0))) == 849);
    assert (((200 - 30) * 2) < ((800 / 800) + 340));
    assert (((200 - 30) * 5) > (800 + (150 / 3) - ((25 / 25) + (1'000 * 0))));
    assert ((10 + 55 - 5) == 60);
    assert ((10 + 55 - 5) != (1+1+1+1+1) * 15);
    assert ((10 + 55 - 5) <= 4 * 15);
    assert ((10 + 55 - 5) <= (2 * 5 * 10)); 
    assert ((10 + 55 - 5) >= 6 * 10);
    assert ((10 + 55 - 5) >= 125 / 5);
    assert ((20 - 10 + 50) == 60);
    assert ((10 + 55 - 5) == (20 - 10 + 50));
    assert ((10 + 55 - 5) != (30 - 10 + 50));
    assert ((202 - 2) / 100 == 2);
    assert ((2 * (202-2) - 398) == 2);
    assert ((234 - 34) * 2 == 400);
    assert ((234 - 34) * 5 != 1001);
    assert (1); // toma el 1 como verdadero, si fuera 0, a la hora de ejecutar, sale con código distinto a 0.
    assert (222); // 222 es distinto a 0, es decir, es distinto a falso.
    assert ((25 + 2 - 7) / 20); // el resultado es 1 y lo toma como verdadero.
    assert ((25 + 2 - 7) / ((2+2+2+2+2)*2)); // el resultado es 1 y lo toma como verdadero.


    //punto flotante (números reales) pruebo[double], otros tipos de punto flotante son [float] [long double]
    assert (1.0); // toma el 1 como verdadero.
    assert (-55); // -55 es distinto a 0, es decir, es distinto a falso.
    assert (2.0 == 1.0 + 1.0);
    assert (2.0 + 1 == 3.0); // uso dos tipos de datos, double y entero.
    assert (1.0 == 0.1 * 10.0);
    assert (1.0 != (0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1)); // no da igual porque la pc trabaja con aproximaciones.
    assert ((0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1) == 0.999999999999999889); // 0.999999999999999889 es la aproximación con la que trabaja la pc.
    assert (0.999999999999999889 != 1.0);
    assert (0.999999999999999889 + 0.000000000000000111 == 1.0);
    assert (1.0 - 0.000000000000000111 ==  0.999999999999999889);
    assert (-100.0 + 0.3 == -99.7);
    assert (100.0 - 0.3 != 99.9);
    assert (-100.0 - 0.3 == -90.5 - 10.2 + 0.4);
    assert (2.0 < 2.1);
    assert (2.0 > 2.1 - 1.7);
    assert (2.0 < 2.1);
    assert (2.0 < 1.5 + 0.6);
    assert (10.0 / -2.0 == -5.0);
    assert (10.0 / -5.0 != 2.5);
    assert (10.0 / 2.5 == 4.0);
    assert (10.0 / 2.5 == 0.03 + (1.0 + 1.0) * 3.0 - 8.000 + 1.0 * 2.0 + 3.97);
    assert (10.0 / 2.5 <= 4.0);
    assert (10.0 / 2.5 <= 1.4 + 2.6);
    assert (-10.0 / -2.5 <= 5.7);
    assert (10.0 / 2.5 >= 4.0);
    assert (10.0 / 2.5 >= 3.9 + 0.1);
    assert (10.0 / 2.5 >= (1.111111 * 2));
    assert (3.9 + 0.1 == 1.4 + 2.6);
    assert (-12.0000 / -3.0000 - 3.0000);
    assert (-12.0000 / 3.0000 + 5.0000);
    assert (12.0 / 0.25 == 24.0 * 2.0);
    assert (1.0 / 0.25 == 2.0 + 2.0);
    assert (-99.0 / -0.3 == (30.5 + 2.5) * (3.0 / 0.3));
    assert ((4.25 / 10.50) < 1.00);
    assert (0.12612 == 1.12347 - 0.99735);
    assert (0.12612 == -1.12347 + 1.24959);
    assert (10.0 - 11.0 == -1.0);
    assert (3e2 == 3E2); // 3e2 significa 3x10^2 (notación científica).
    assert (3e2 == 3*10*10);
    assert (3e2 != 3*10*11);
    assert (3e2 == 300.0); 
    assert (3e6 == 3000000.0); 
    assert (3e6 == 3'000'000.0); // el apostrofe es simplemente para referencia propia, no afecta al número.
    assert (3e6 == 3'0'00'00'0.0); // el apostrofe es simplemente para referencia propia, no afecta al número.
    assert (3e2 != -300.0);    
    assert (-3e2 == -300.0);    
    assert (3e2 >= 300.0);    
    assert (3e2 >= 299.9999);    
    assert (3e2 <= 300.0);    
    assert (3e2 <= 300.0001);    
    assert (2e1 < (20.1 - 10.0 + (2.5 * 4.0)));
    assert ((3e2 - (2e2 / 0.25)) < -((20.1 - 10.0 + (2.5 * 4.0))));
    assert (((2e2 / 0.25) - 3e2) < ((20.1 - 20.0 + (2.5 * 200.0))));


    //unsigned (sin signo, naturales)
    assert (22u==22u); // el sufijo "u" indica que es un tipo de dato unsigned.
    assert (2u == 1u + 1u);
    assert (5u - 2u == 1u + 1u +1u);
    assert (23u + 2u >= 25);
    assert (101u - 10u != 80u + (5u)*2u);
    assert (100'000u == 99'999u + 1u);
    assert (202u-2u == 200u);
    assert (1000u != 1012u - 11u);
    assert (202u-10u != 200u);
    assert (1000u < (2000u + 1u));
    assert ((200u - 30u) * 2u == 340u);
    assert ((200u - 30u) * 2u != 400u);
    assert ((200u - 30u) * 5u == 850u);
    assert ((200u - 30u) * 5u != 900u);
    assert ((200u - 30u) * 2u < 350u);
    assert ((200u - 30u) * 5u > 700u);
    assert (((200u / 200u) + 140u == 141u));
    assert ((800u + (150u / 3u) - ((25u / 25u))) == 849u);
    assert ((200u - 30u) * 2u < ((800u / 800u) + 340u));
    assert ((200u - 30u) * 5u > (800u + (100u / 2u) - ((1'000'000'000u / 1'000'000'000u))));
    assert (10u + 55u - 5u == 60u);
    assert (10u + 55u - 5u != (1u+2u+3u+4u+5u) * 15u);
    assert (10u + 55u - 5u <= 4u * 15u);
    assert (10u + 55u - 5u <= 2u * 5u * 10u); 
    assert (10u + 55u - 5u >= 6u * 10u);
    assert (10u + 55u - 5u >= 125u / 5u);
    assert (20u - 10u + 50u == 60u);
    assert (10u + 55u - 5u == 20u - 10u + 50u );
    assert (1000u + 55u - 5u != 1000u - 10u + 50u);
    assert ((202u - 2u) / 100u == 2u);
    assert (2u * (202u-2u) - 398u == 2u);
    assert ((100u - 60u) * 10u == (2u * 2u * 5u * 5u * (100u / 25u)));
    assert ((2222u - 333u) * 5u != 12345u);
    assert (1u); // toma el 1 como verdadero, si fuera 0, a la hora de ejecutar, sale con código distinto a 0.
    assert (22u); // 22u es distinto a 0, es decir, es distinto a falso.
    assert ((25u + 2u - 7u) / 20u); // el resultado es 1 y lo toma como verdadero.
    assert ((25u + 2u - 7u) / ((2u+2u+2u+2u+2u)*2u)); // el resultado es 1 y lo toma como verdadero.


    //string

    using namespace std::string_literals; // para poder trabajar con strings.

    // la "s" indica que es una cadena de C++ (string) y no de C (arreglo de caracteres constantes).

    assert ("concatenacion"s == "conca"s + "tenacion"s); //concatenación; une strings.
    assert ("concatenación"s != "conca"s + "tenacion"s);
    assert ("con"s + "ca"s + "te"s + "na"s + "cion"s == "concatenacion"s);
    assert ("con"s + "ca"s + "te"s + "na"s + "ción"s != "concatenacion"s);
    assert (12 == "Las Palabras"s.length());// .length da como resultado el valor de la longitud del string.
    assert (10 != "Las Palabras"s.length()); 
    assert (12 == "12caracteres"s.length());
    assert (10 != "12caracteres"s.length());
    assert ("12caracteres"s.length() == "Las Palabras"s.length());
    assert ("12caracteres"s.length() - "Las Palabras"s.length() == 0);
    assert ("12caracteres"s.length() - "Las Palabras"s.length() != 12);
    assert ("12caracteres"s.length() + "Las Palabras"s.length() == 24);
    assert ("12caracteres"s.length() + "Las Palabras"s.length() != 12);
    assert ("13 caracteres"s.length() != "Las Palabras"s.length());
    assert (5 == "cinco"s.length());
    assert (4 == "diez"s.length());
    assert (10 != "diez"s.length());
    assert ("cinco"s.length() > "diez"s.length());
    assert (4 >= "diez"s.length());
    assert (4 <= "diez"s.length());
    assert (3 < "diez"s.length());
    assert ("concatenacion"s.length() == 13);
    assert ("concatenación"s.length() == 14); // da 1 más que la longitud de concatenacion porque ó ocupa dos espacios.
    assert ("ó"s.length() == 2); // ó == Ã³
    assert (("con"s + "ca"s + "te"s + "na"s + "cion"s).length() == 13); // concatenación + .length
    assert (("con"s + "ca"s + "te"s + "na"s + "ción"s).length() == 14); 
    assert ("concatenacion"s.length() < "concatenación"s.length());
    assert ("1"s.length()); // el valor de la longitud de "1" es 1, por lo tanto lo toma como verdadero.
    assert (" "s.length()); // el valor de la longitud de " " es 1, por lo tanto lo toma como verdadero.
    assert ("cuatro"s.length() - "cinco"s.length());
    assert ("concatenacion"s[0] == 'c'); // [] posición de caracter dentro del string (empieza en 0).
    assert ("concatenacion"s[1] == 'o');
    assert ("concatenacion"s[11] == 'o');
    assert ("concatenacion"s[11] != 'O');
    assert ("concatenacion"s[10] == "algoritmos"s[5]); // 'i' == 'i'
    assert ("concatenacion"s[4] == "algoritmos"s[0]); // 'a' == 'a'
    assert ("concatenacion"s[4] == "concatenacion"s[8]); //'a' == 'a'
    assert ("substraccion"s.substr (4,8) == "traccion"s);// .substr extrae una subcadena del string.
    assert ("substraccion"s.substr (8,4) == "cancion"s.substr(3,4));
    assert ("substraccion"s.substr (10,1) == "o");
    assert (("substraccion"s.substr (10,1)).length() == 1); //.substr + .length
    assert ("substraccion"s.substr (6,6) == "accion");
    assert (("substraccion"s.substr (6,8)).length() == 6); //.substr + .length
    assert (("con"s + "ca"s + "te"s + "na"s + "cion"s).substr (7,6) == "nacion"); //concatenación + .substr
    assert (("in"s + "ter"s + "na"s + "cio"s + "nal"s).substr (0,5) + ("con"s + "ca"s + "te"s + "na"s + "cion"s).substr (7,6) == "internacion");
    assert ((("con"s + "ca"s + "te"s + "na"s + "cion"s).substr (7,6)).length() == 6); // concatenación + .substr + .length


    //EXTRA: Cantidad de bits que ocupa en memoria cada tipo de dato.
    //using std::cout;
    //using std::endl;

    //bool
    assert (sizeof bool (false) == 1); // en ambos casos, bool = 1
    assert (sizeof bool (true) == 1);
    //cout << "Bool (false): " << sizeof bool (false) << endl;
    //cout << "Bool (true): " << sizeof bool (true) << endl;

    // char
    assert (sizeof 'z' == 1); // char = 1
    //cout << "Char: " << sizeof 'z' << endl;

    //int
    assert (sizeof 99 == 4); // int = 4
    //cout << "Int: " << sizeof 99 << endl;

    //double
    assert (sizeof -104.55 == 8); // double = 8
    //cout << "Double: " << sizeof -104.55 << endl;

    //unsigned
    assert (sizeof 13u == 4); // unsigned = 4
    //cout << "Unsigned: " << sizeof 13u << endl;

    //string
    assert (sizeof "Hola Mundo, hola a todos"s == 24); // string = 24
    //cout << "String: " << sizeof "Hola Mundo, hola a todos"s << endl;
    
    }