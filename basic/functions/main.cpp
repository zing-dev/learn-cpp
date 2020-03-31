//
// Created by zing on 3/26/2020.
//

#include <iostream>
#include "functions.h"

using namespace std;

template<class T, class U>
bool are_equal(T a, U b) {
    return (a == b);
}

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

    cout << "================重载==============" << endl;
    cout << operate(1, 1) << endl;
    cout << operate(1.1, 1.2) << endl;

    cout << "================template==============" << endl;
    //int s = sum(1,2);
    //cout << s << endl;
    //cout << sum<int>(2, 3) << endl;
    //cout << sum<float>(1.1, 1.2) << endl;


    if (are_equal(10, 10.0))
        cout << "x and y are equal\n";
    else
        cout << "x and y are not equal\n";

    int x{};
    int y{1};
    int z{x + y};
    int z1{z * z + z + y};
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    cout << z1 << endl;
    return 0;

}