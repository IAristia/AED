
#include <iostream>
#include <cassert>
int main() {
    assert (2 == 1 + 1);
    assert (true);
    assert (false==false);
    assert (false!=true);
    assert (not false);
    assert (false == not true);
    assert (true and true);
    assert (false or true);
    assert ((false and false) == false);
    assert (2.0==1.0+1.0);
    assert (1.0==0.1*10.0);
    assert (1.0!=0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1);
   
    }
