//
// Created by zing on 5/20/2020.
//

#include <iostream>

using namespace std;

void print(const int i) {
    cout << i << endl;
}

void print(const int arr[], int length) {
    for (auto i = 0; i < length; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

void print(const int *start, const int *end) {
    while (start != end){
        cout << *start++ << "\t";
    }
    cout << endl;
}

void print(int (&arr)[2]) {
    for(auto i : arr){
        cout << i << "\t";
    }
    cout << endl;
}


int main(int argc, char *argv[]) {
    int i = 10, j[2] = {1, 2};
    print(i);
    print(j, 2);
    print(begin(j),end(j));
    print(j);
    return 0;
}
