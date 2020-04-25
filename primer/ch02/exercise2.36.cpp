//
// Created by zing on 4/25/2020.
//
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype((b)) d = a;
    auto e = a;
    auto f = &a;
    int g = a;
    ++c;
    ++d;
    cout << "a:" << a << endl;// 4??
    cout << "b:" << b << endl;// 4
    cout << "c:" << c << endl;// 4
    cout << "d:" << d << endl;// 4
    cout << "e:" << e << endl;// 3
    cout << "f:" << *f << endl;// 4
    cout << "g:" << g << endl;// 3
    return 0;
}
