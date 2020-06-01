//
// Created by Tridev on 5/31/2020.
//

#ifndef UNTITLED_VARIANTA_6_H
#define UNTITLED_VARIANTA_6_H

namespace varianta6{

    int ex2( int a, int b ){
        if( b < 1 ) return -1;
        if( a % b == 0 ) return  1 + ex2( a/b, b );
        return 0;
    } //se vor afisa: 0 si 7

}


#endif //UNTITLED_VARIANTA_6_H
