//
// Created by Tridev on 5/31/2020.
//

#ifndef UNTITLED_VARIANTA_3_H
#define UNTITLED_VARIANTA_3_H

namespace varianta3{
    void ex2( int x ){
        if( x > 0 )
            if( x % 4 == 0 ) {
                std::cout << 'x';
                ex2( x - 1 );
            }else{
                ex2( x / 3 );
                std::cout << 'y';
            }
    } //se va afisa: xyyy

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

#endif //UNTITLED_VARIANTA_3_H
