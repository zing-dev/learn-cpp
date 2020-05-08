//
// Created by zing on 5/8/2020.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {

    int arr[10];
    vector<int> vec;
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        arr[i] = i;
        cout << arr[i] << endl;
        vec.push_back(i);
    }

    cout << "====================" << endl;
    cout << "size:" << vec.size() << endl;
    for (auto i : vec) {
        cout << i << endl;
    }
    return 0;
}
