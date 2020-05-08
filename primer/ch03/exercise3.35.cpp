//
// Created by zing on 5/8/2020.
//

#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    const int size = 10;
    int arr[size] = {1, 2, 3, 4};
    for (auto i : arr) {
        cout << i << endl;
    }
    cout << "======================================" << endl;
    for (auto ptr = arr; ptr != arr + size; ++ptr) {
        *ptr = 0;
    }

    for (auto i : arr) {
        cout << i << endl;
    }

    cout << "======================================" << endl;
    cout <<( &arr[0] != nullptr) << endl;
    cout <<( &arr[0] == nullptr) << endl;
    return 0;
}
