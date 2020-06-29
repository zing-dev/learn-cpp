//
// Created by zing on 6/29/2020.
//

#include <array>
#include <iostream>

using namespace std;

auto arr1() -> void {
    cout << "[array.cpp]" << endl;
    // Initializing an array containing five integer elements
    array<int, 10> arr = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Displaying the original elements of the array
    cout << "Original Data   : ";
    for (auto a : arr)
        cout << a << " ";
    cout << endl;

    // Modifying the content of
    // the 1st and 3rd element of the array
    arr[1] = 9;
    arr[3] = 7;

    // Displaying the altered array elements
    cout << "Manipulated Data: ";
    for (auto a : arr)
        cout << a << " ";
    cout << endl;

    cout << arr.at(2) << endl;
    cout << arr.size() << endl;
    cout << arr.front() << endl;
    cout << arr.back() << endl;

}

void arr2() {
    cout << "==================================================" << endl;
    array<string, 10> arr = {"aa", "bb", "cc", "dd"};
    cout << arr.size() << endl;
    cout << arr.at(1) << endl;
    cout << arr.empty() << endl;
    for (auto &s : arr) {
        cout << s << endl;
    }
}

auto main() -> int {
    arr1();
    arr2();
    return 0;
}
