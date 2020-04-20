//
// Created by zing on 4/19/2020.
//
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int curVal = 0, val = 9;

    if (cin >> curVal) {
        int cnt = 1;
        while (cin >> val) {
            if (val == curVal) {
                cnt++;
            } else {
                cout << curVal << " occurs " << cnt << " times " << endl;
                curVal = val;
                cnt = 1;
            }
        }
        cout << curVal << " occurs " << cnt << " times " << endl;
    }
    return 0;
}
