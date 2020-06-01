//
// Created by Tridev on 5/31/2020.
//

#ifndef UNTITLED_VARIANTA_5_H
#define UNTITLED_VARIANTA_5_H

namespace varianta5{
    void ex2( int a, int b ){
        if( a <= b ) {
            ex2( a + 1, b - 2 );
            std::cout << '*';
        }
        else
            std::cout << b;
    } //se va afisa: 7*****

    int ex4( int a ){
        int divizor = 2;
        while( a % divizor != 0 && prim( divizor ) )
            divizor++;
        return divizor;
    }
}

#endif //UNTITLED_VARIANTA_5_H
