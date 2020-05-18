//
// Created by zing on 5/18/2020.
//

#ifndef LEARN_CPP_EXERCISE6_8_H
#define LEARN_CPP_EXERCISE6_8_H

#include <iostream>
using namespace std;
void print(){
    cout << "hello world"<< endl;
}
int fact(int val){
    int ret = 1;
    while (val > 1){
        ret *= val--;
    }
    return  ret;
}

#endif //LEARN_CPP_EXERCISE6_8_H
