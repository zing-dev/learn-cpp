//
// Created by zing on 5/8/2020.
//

#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int arr[10];

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        arr[i] = i;
    }

    for (auto i : arr) {
        cout << i << endl;
    }

    return 0;
}
