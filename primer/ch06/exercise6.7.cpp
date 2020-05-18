//
// Created by zing on 5/18/2020.
//

#include <iostream>

using namespace std;

int increasing() {
    static int val = 0;
    return val++;
}

int main(int argc, char *argv[]) {

    cout << increasing() << endl;
    cout << increasing() << endl;
    cout << increasing() << endl;
    cout << increasing() << endl;
    cout << increasing() << endl;
    return 0;
}
