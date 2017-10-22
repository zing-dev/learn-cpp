//
// Created by zhangrongxiang on 2017/10/22 13:51
// File box
//

#ifndef LEARN_CPP_BOX_H
#define LEARN_CPP_BOX_H
#include <iostream>

using namespace std;

class Box {
public:
    double length;   // 长度
    double breadth;  // 宽度
    double height;   // 高度
    double getVolume() {
        return length * breadth * height;
    }

private:
    double d;
};

#endif //LEARN_CPP_BOX_H
