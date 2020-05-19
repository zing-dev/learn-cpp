//
// Created by zing on 5/19/2020.
//

#include <iostream>

using namespace std;

void swap(int &a, int &b) {
    int c = a;
    a = b;
    b = c;
}

int main(int argc, char *argv[]) {
    int a = 10;
    int &a1(a);
    int b = 11;
    int &b1(b);
    cout << "a = " << a << ",b = " << b << endl;
    swap(a1, b1);
    cout << "a = " << a << ",b = " << b << endl;
    return 0;
}
