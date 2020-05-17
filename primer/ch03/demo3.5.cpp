//
// Created by zing on 5/8/2020.
//

#include <vector>
#include <string>
#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {

    constexpr unsigned sz = 42;
    int arr[10];
    int *parr[sz];
    //string bad(sz);

    int arr2[sz] = {};
    int arr3[] = {1,2,3};
    cout << arr3[0] << endl;
    int(*p)[10] = &arr;
    return 0;
}
