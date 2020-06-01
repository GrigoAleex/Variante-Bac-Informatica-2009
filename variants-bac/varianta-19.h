//
// Created by Tridev on 5/31/2020.
//

#ifndef UNTITLED_VARIANTA_19_H
#define UNTITLED_VARIANTA_19_H

namespace varianta19{
    int ex1( int x ){
        if( x <= 1 ) return x;
        return x + ex1( x - 2 );
    } // se afiseaza: 90

    void ex3( float a[], int n ){
        std::sort( a, a + n );
        for(  int i = 0; i < n ; i++)
            std::cout << a[i] << ' ';
    }
}

#endif //UNTITLED_VARIANTA_19_H
