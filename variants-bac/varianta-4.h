//
// Created by Tridev on 5/31/2020.
//

#ifndef UNTITLED_VARIANTA_4_H
#define UNTITLED_VARIANTA_4_H

namespace varianta4{
    void ex2( int n, int x ){
        if( x > n )
            std::cout  << 0;
        else if ( x % 4 <= 1 ) ex2( n, x + 1 );
        else {
            ex2( n, x + 3 );
            std::cout << 1;
        }
    } //se va afisa: 01111

    int ex4( int a, int b ){
        int aparitii = 0;
        while( a )
        {
            if( a % 10 == b )
                aparitii++;
            a /= 10;
        }
        return aparitii;
    }
}

#endif //UNTITLED_VARIANTA_4_H
