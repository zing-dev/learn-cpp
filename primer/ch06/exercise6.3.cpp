//
// Created by zing on 5/18/2020.
//

#include <iostream>
using namespace std;

int fact(int val){
    int ret = 1;
    while (val > 1){
        ret *= val--;
    }
    return  ret;
}

int main(int argc, char *argv[]) {
    cout << fact(1) << endl;
    cout << fact(2) << endl;
    cout << fact(3) << endl;
    cout << fact(4) << endl;
    return 0;
}
