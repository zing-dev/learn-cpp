//
// Created by zing on 4/19/2020.
//
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int a, b;
    cout << "输入两个整数:" << endl;
    cin >> a >> b;
    if (a > b) {
        int c = b;
        b = a;
        a = c;
    }
    int i = a + 1;
    while (a < i && i < b) {
        cout << i++ << endl;
    }
    return 0;
}
