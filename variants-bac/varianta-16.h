//
// Created by Tridev on 5/31/2020.
//

#ifndef UNTITLED_VARIANTA_16_H
#define UNTITLED_VARIANTA_16_H

namespace varianta16{
    int ex1( int n ){
        if( n <= 1 ) return 1;
        return 2 * ex1( n - 1 ) + 2 * ex1( n - 2);
    } //se afiseaza 10

    int ex3( int a[], int n, int k ){
        int numarDeElemente = 0;
        for( int i = 0; i < n; ++i ){
            if( a[i] % 10 == k && a[i] % k == 0 )
                numarDeElemente++;
        }
        return numarDeElemente;
    }
}

#endif //UNTITLED_VARIANTA_16_H
