//
// Created by zing on 5/20/2020.
//

#include <iostream>

using namespace std;

int max(int a, const int *b) {
    cout << a << ":" << *b << endl;
    return a > *b ? a : *b;
}

int main(int argc, char *argv[]) {
    int a(10);
    int c(a);
    int *b(&c);
    cout << max(a - 1, b) << endl;
    cout << max(a, b) << endl;
    cout << max(a + 1, b) << endl;
    return 0;
}
