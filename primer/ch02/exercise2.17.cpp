//
// Created by zing on 4/21/2020.
//

#include <iostream>

using namespace std;

//右值引用
int main(int argc, char *argv[]) {
    int i, &pi = i;
    i = 5;
    pi = 10;
    cout << i << " = " << pi << endl;
    return 0;
}
