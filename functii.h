//
// Created by Tridev on 5/31/2020.
//

#ifndef UNTITLED_FUNCTII_H
#define UNTITLED_FUNCTII_H

bool prim(int target){
    if(target <= 1) return false;
    for(int i = 2; i* i <= target; ++i)
        if(target % i == 0) return false;
    return true;
}

#endif //UNTITLED_FUNCTII_H
