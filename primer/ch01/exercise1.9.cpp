//
// Created by zing on 4/19/2020.
//
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int sum = 0;
    int i = 50;
    while (i < 101) {
        sum += i;
        i++;
    }
    cout << sum << endl;
    return 0;
}
