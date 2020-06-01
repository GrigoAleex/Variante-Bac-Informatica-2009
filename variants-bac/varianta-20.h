//
// Created by Tridev on 5/31/2020.
//

#ifndef UNTITLED_VARIANTA_20_H
#define UNTITLED_VARIANTA_20_H

namespace varianta20{
    int ex1( int x ) {
        if ( x )
            return x + ex1( x - 1 );
        return x;
    } //se va afisa: 15

    void ex3( int a[], int n) {
        int i = 0;
        while (i < n - 1){
            if( a[ i ] == 0 ) {
                for (int j = i; j < n - 1; j++) {
                    std::swap(a[j], a[j + 1]);
                }
            }
            else i++;
        }
    }
}

#endif //UNTITLED_VARIANTA_20_H
