//
// Created by zing on 3/26/2020.
//

#include <iostream>
#include "functions.h"

using namespace std;

int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

//reference
void duplicate(int &a, int &b, int &c) {
    a *= 2;
    b *= 2;
    c *= 2;
}

int divide(int a, int b) {
    int r;
    r = a / b;
    return (r);
}


void odd(int x) {
    if ((x % 2) != 0) cout << x << " It is odd.\n";
    else even(x);
}

void even(int x) {
    if ((x % 2) == 0) cout << x << " It is even.\n";
    else odd(x);
}


long factorial(long a) {
    if (a > 1)
        return (a * factorial(a - 1));
    else
        return 1;
}