//
// Created by Tridev on 5/31/2020.
//

#ifndef UNTITLED_VARIANTA_15_H
#define UNTITLED_VARIANTA_15_H

namespace varianta15 {
    long ex2_g( long x ){
        if( x > 9 ) return ( x / 10 + x % 10 );
        return x;
    }

    long ex2_f( int c ){
        if( c < 1 ) return 1;
        return ex2_g( c + ex2_f( c - 1 ) );
    } //se va afisa: 4
}

#endif //UNTITLED_VARIANTA_15_H
