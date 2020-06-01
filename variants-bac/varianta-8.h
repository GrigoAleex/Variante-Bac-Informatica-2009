//
// Created by Tridev on 5/31/2020.
//

#ifndef UNTITLED_VARIANTA_8_H
#define UNTITLED_VARIANTA_8_H

namespace varianta8{
    void ex2( int n ){
        if( n ) {
            if ( n % 2 == 0 )
                std::cout << n << ' ';
            ex2( n - 1 );
            std::cout << n << ' ';
        }
        else std::cout << "\n";
    }/** se va afisa
     * 2
     *  1 2 3
     * */

//    void ex4( int n, int m, int a[], int b[] ){
//
//        int i =
//
//    }
}

#endif //UNTITLED_VARIANTA_8_H
