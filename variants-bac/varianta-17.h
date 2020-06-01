//
// Created by Tridev on 5/31/2020.
//

#ifndef UNTITLED_VARIANTA_17_H
#define UNTITLED_VARIANTA_17_H

#include <algorithm>

namespace varianta17{
    void ex1( long n ){
        if ( n > 9 ){
            std::cout << n / 100;
            ex1( n / 10 );
        }
    } //se afiseaza 1231210

    int ex3( int a[], int n ){
        const int numarMaxim = std::max( a[ 0 ], a[ n - 1 ] );
        const int numarMinim = std::min( a[ 0 ], a[ n - 1 ] );
        int numarDeElemente;
        for( int i =  0; i < n; ++i )
            if(a[i] < numarMaxim && a[i] > numarMinim)
                numarDeElemente ++;
        return numarDeElemente;
    }
}

#endif //UNTITLED_VARIANTA_17_H
