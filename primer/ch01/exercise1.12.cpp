//
// Created by zing on 4/19/2020.
//
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int sum = 0;
    for (int i = -100; i <= 100; i++) {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}
