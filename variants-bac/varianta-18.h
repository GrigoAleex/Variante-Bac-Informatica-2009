//
// Created by Tridev on 5/31/2020.
//

#ifndef UNTITLED_VARIANTA_18_H
#define UNTITLED_VARIANTA_18_H

namespace varianta18{
    void ex1( long n, int i ){
        if( i < n % 10 ){
            std::cout << n % 10;
            ex1( n / 10, i + 1);
        }
    } //se afiseaza: 543

    int ex3( float a[], int n ){
        float medieAritmetica = 0;
        int numarDeElemente = 0;
        for( int i = 0; i < n; i++) medieAritmetica += a[i];
        medieAritmetica /= n;
        for( int i = 0; i < n; i++)
            if( a[ i ] >= medieAritmetica )
                numarDeElemente++;

        return numarDeElemente;
    }
}

#endif //UNTITLED_VARIANTA_18_H
