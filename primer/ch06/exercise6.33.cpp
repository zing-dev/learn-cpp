//
// Created by zing on 5/24/2020.
//
#include <iostream>
#include <vector>

using namespace std;

using IterInt = vector<int>::const_iterator;

void print(IterInt first, IterInt last) {
    if (first == last) {
        cout << "over!" << endl;
        return;
    }
    cout << *first << " ";
    print(++first, last);

}

int main() {
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    print(vec.cbegin(), vec.cend());
    return 0;
}