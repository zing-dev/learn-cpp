//
// Created by zing on 5/19/2020.
//

#include <iostream>

using namespace std;

void reset(int &i){
    i = 0;
}

int main(int argc, char *argv[]) {
    int i = 10;
    int &i2 = i;
    reset(i2);
    cout << i << endl;
    cout << i2 << endl;
    return 0;
}
