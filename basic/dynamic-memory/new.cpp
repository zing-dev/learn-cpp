//
// Created by zing on 4/4/2020.
//

#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    double *d = nullptr; // 初始化为 null 的指针
    d = new double;   // 为变量请求内存
    *d = 10;

    cout << *d << endl;//10
    double d2 = 11;
    d = &d2;
    cout << *d << endl;//11
    *d = 12;
    cout << *d << endl; //12
    cout << d2 << endl; // 12

    return 0;
}
