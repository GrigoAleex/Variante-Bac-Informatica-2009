//
// Created by Tridev on 5/31/2020.
//

#ifndef UNTITLED_VARIANTA_10_H
#define UNTITLED_VARIANTA_10_H

namespace varianta10{
    int ex1( int n, int y ){
        if( n ){
            y++;
            return y + ex1( n - 1, y );
        }
        return 0;
    } //se afiseaza 9

    void ex3( int n, int &a, int &b ){
        int numerePrimeGasite = 0;
        while ( numerePrimeGasite != 2 ){
            n--;
            if( prim(n) )
                switch (numerePrimeGasite) {
                case 0:
                    b = n;
                    numerePrimeGasite++;
                    break;
                case 1:
                    a = n;
                    numerePrimeGasite++;
                    break;
                }

        }
    }
}

#endif //UNTITLED_VARIANTA_10_H
