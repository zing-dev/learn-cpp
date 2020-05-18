//
// Created by zing on 5/18/2020.
//

#include <iostream>

using namespace std;

int abs(int val){
    if(val < 0)
        return -1 *val;
    return val;
}

int main(int argc, char *argv[]) {
    cout << abs(1) << endl;
    cout << abs(0) << endl;
    cout << abs(-1) << endl;
    return 0;
}
