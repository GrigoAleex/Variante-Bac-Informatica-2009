//
// Created by Grigorescu Alexandru on 5/31/2020.
//

#ifndef UNTITLED_VARIANTA_1_H
#define UNTITLED_VARIANTA_1_H

namespace varianta1{
    void ex2( long n, int i ) {
        if (n && n % 3 > 0){
            std::cout << i;
            ex2( n/3, i+1 );
        }
    } //se afiseaza 12345

    int ex4( int v[], int n, int a ){
        int numareMaiMiciDecatA = 0;
        for( int i = 0; i < n; ++i )  if( v[i] < a )    numareMaiMiciDecatA++;
        return numareMaiMiciDecatA;
    }
}
#endif //UNTITLED_VARIANTA_1_H