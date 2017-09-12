//
// Created by zhangrongxiang on 2017/9/12.
//

#include "extern.h"
#include <iostream>

extern int count;

void write_extern()
{
    std::cout << "Count is " << count << std::endl;
}