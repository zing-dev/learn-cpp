//
// Created by zing on 4/21/2020.
//
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    unsigned u = 10, u2 = 42;
    cout << u2 - u << endl;
    cout << u - u2 << endl; //4294967264
    cout << "溢出" << endl;

    int i = 10, i2 = 42;
    cout << i2 - i << endl;
    cout << i - i2 << endl;

    cout << INT16_MAX << endl;
    cout << INT32_MAX << endl;
    cout << UINT32_MAX - (u - u2) << endl;
    cout << UINT32_MAX << endl; //4294967294
    cout << unsigned(1 - 2) << endl; //4294967294
    cout << unsigned(1 - 3) << endl; //2147483648

    cout << i - u << endl;
    cout << u - i << endl;
    return 0;
}
