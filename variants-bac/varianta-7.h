//
// Created by Tridev on 5/31/2020.
//

#ifndef UNTITLED_VARIANTA_7_H
#define UNTITLED_VARIANTA_7_H

namespace varianta7{
    void ex1( long int n ){
        if( n ){
            if( n % 2 == 0 )
                std::cout << n % 10;
            ex1( n / 10 );
        }
    } //se va afisa: 42

    int f( int z ){
        if( z <= 5 )
            return z;
        return 2 * f( z - 1 );
    }

    int ex4( int n ){
        int a = 0;
        while( f( a ) <= n ) a++;
        return f( a - 1 );
    }
}

#endif //UNTITLED_VARIANTA_7_H
