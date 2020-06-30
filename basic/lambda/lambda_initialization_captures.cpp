//
// Created by zing on 6/30/2020.
//
/* lambda_initialization_captures.cpp */
#include <iostream>

using namespace std;

auto main() -> int {
    cout << "[lambda_initialization_captures.cpp]" << endl;

    // Initializing a variable
    int a = 5;
    cout << "Initial a = " << a << endl;

    // Initializing value to lambda using the variable
    auto myLambda = [x = a]() mutable {
        x += 2;
        return x;
    };

    auto myLambda2 = [&x = a]() {
        x += 2;
        return x;
    };

    // Executing the Lambda
    cout << "myLambda   =  " << myLambda() << endl;
    cout << "myLambda2  =  " << myLambda2() << endl;
    // Displaying a new value of the variable
    cout << "New a     = " << a << endl;

    return 0;
}
