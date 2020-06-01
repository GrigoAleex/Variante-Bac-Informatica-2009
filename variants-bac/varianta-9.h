//
// Created by Tridev on 5/31/2020.
//

#ifndef UNTITLED_VARIANTA_9_H
#define UNTITLED_VARIANTA_9_H

namespace varianta9{
    int ex1( long n, int k ){
        if( n && n % 10 == k ) return 1 + ex1( n / 10, k );
        return 0;
    } //se va afisa: 3

    void ex3( int n, int k){
        n = n * k;
        while( n >= k ) {
            std::cout << n << ' ';
            n -= k;
        }
    }
}

#endif //UNTITLED_VARIANTA_9_H
