//
// Created by zing on 3/26/2020.
//

#include <iostream>
#include "functions.h"

using namespace std;

int main() {
    cout << "================addition=================" << endl;
    cout << addition(1, 2) << endl;
    cout << addition(3, 4) << endl;

    cout << "================subtraction=================" << endl;
    cout << subtraction(3, 4) << endl;
    cout << subtraction(10, 4) << endl;

    cout << "================duplicate=================" << endl;
    int a = 10;
    int b = 2;
    int c = 5;
    duplicate(a, b, c);
    cout << a << "," << b << "," << c << endl;

    cout << "================divide=================" << endl;
    cout << divide(12) << '\n';
    cout << divide(20, 4) << '\n';

    cout << "================odd=================" << endl;
    int i = 0;
    do {
        odd(i);
        i++;
    } while (i < 10);

    long number = 9;
    cout << number << "! = " << factorial(number) << endl;
    cout << 2 << "! = " << factorial(2) << endl;
    cout << 3 << "! = " << factorial(3) << endl;
    cout << 4 << "! = " << factorial(4) << endl;
    cout << 5 << "! = " << factorial(5) << endl;
    return 0;

}