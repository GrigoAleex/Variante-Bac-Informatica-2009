//
// Created by Tridev on 5/31/2020.
//

#ifndef UNTITLED_VARIANTA_11_H
#define UNTITLED_VARIANTA_11_H

namespace varianta11{
    int ex2( int n ){
        int c;
        if( n == 0 ) return 9;
        else {
            c = ex2( n / 10 );
            if( n % 10 < c ) return n % 10;
            return c;
        }
    } //se va afisa: 1

//   EXERCITIUL 4 int sum( x );
}

#endif //UNTITLED_VARIANTA_11_H
