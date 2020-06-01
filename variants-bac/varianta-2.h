//
// Created by Tridev on 5/31/2020.
//

#ifndef UNTITLED_VARIANTA_2_H
#define UNTITLED_VARIANTA_2_H

namespace varianta2 {
    void ex2( long n ){
        std::cout << n % 10;
        if( n ){
            ex2( n/100 );
            std::cout << n % 10;
        }
    } //se afiseaza: 5310135

    int ex4( int a ){
        int suma = 0, divizor = 2;
        while( a > 1 ){
            if( a % divizor == 0 ){
                suma++;
                a /= divizor;
            }
            else
                do{
                    divizor++;
                }while( !prim( divizor ) );
        }
        return suma;
    }
}

#endif //UNTITLED_VARIANTA_2_H
