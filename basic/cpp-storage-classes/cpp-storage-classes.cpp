//
// Created by zhangrongxiang on 2017/9/12.
//

#include "static.h"
int count ;
extern void write_extern();
int main() {
//    staticDemo();
    count = 5;
    write_extern();
    return 0;
}

