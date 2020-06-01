//
// Created by Tridev on 5/31/2020.
//

#ifndef UNTITLED_VARIANTA_14_H
#define UNTITLED_VARIANTA_14_H

namespace varianta14{
    long ex2_f1( int c ){
        if( c % 2 == 1 ) return 1;
        return 2;
    }// se afiseaza: 1

    long ex2_f2( long n ){
        if( !n ) return 0;
        return ex2_f1( n % 10 ) + ex2_f2( n / 10 );
    }// se afiseaza: 8
}

#endif //UNTITLED_VARIANTA_14_H
