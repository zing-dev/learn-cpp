//
// Created by zing on 5/18/2020.
//

#include <iostream>

using namespace std;

int fact(int val) {
    int ret = 1;
    while (val > 1) {
        ret = ret * val;
        val--;
    }
    return ret;
}

int main(int argc, char *argv[]) {
    int val = 0;
    cout << "please in put a number" << endl;
    cin >> val;
    cout << fact(val) << endl;
    return 0;
}
