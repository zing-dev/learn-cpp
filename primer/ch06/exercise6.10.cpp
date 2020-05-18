//
// Created by zing on 5/18/2020.
//
#include <iostream>

using namespace std;

void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int main(int argc, char *argv[]) {
    int a = 10;
    int b = 11;
    cout << "a = " << a << ",b = " << b << endl;
    swap(&a, &b);
    cout << "a = " << a << ",b = " << b << endl;
    return 0;
}
