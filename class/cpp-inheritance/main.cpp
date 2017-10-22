//
// Created by zhangrongxiang on 2017/10/22 22:22
// File main
//

#include "main.h"

using namespace std;

int main() {
    Rectangle Rect;
    Rect.setWidth(5);
    Rect.setHeight(7);
    // 输出对象的面积
    cout << "Total area: " << Rect.getArea() << endl;

    cout << "Hello World!" << endl;
    C c;   //D, B, A ,C
    cout << sizeof(c) << endl;
    return 0;
}