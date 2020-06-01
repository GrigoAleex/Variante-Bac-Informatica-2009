#include <iostream>
#include "solutii.h"

int main() {
   /**
    * Pentru a putea accesa testele / solutiile folositi comanda:
    * varianta *numar varianta* :: ex *numar exercitiu* (parametrii)
    * e.x.
    * -> varianta18::ex1( 12345, 0 );
    */
    int v[] = { 0, 0, 4, 8, 0, 3};
    varianta20::ex3( v, 6 );
    for( int i = 0; i < 6; i++)
        std::cout << v[i] << " ";
}
