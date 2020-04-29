//
// Created by zing on 4/29/2020.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {

    string str, total;
    cout << "please input some strings:" << endl;
    while (cin >> str) {
        cout << str;
        total += str;
    }
    cout << total << endl;
    return 0;
}
