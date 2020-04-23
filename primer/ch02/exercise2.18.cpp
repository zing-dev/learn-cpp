//
// Created by zing on 4/21/2020.
//

#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int i = 1, *pi;
    int *&r = pi; //地址引用
    pi = &i;
    cout << i << endl;
    cout << r << endl; //地址
    cout << *r << endl;
    cout << pi << endl; //地址
    cout << *pi << endl;

    *pi = 11;
    cout << i << endl;
    cout << pi << endl; //地址
    cout << *pi << endl;

    return 0;
}
