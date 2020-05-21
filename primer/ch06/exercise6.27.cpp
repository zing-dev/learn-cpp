//
// Created by zing on 5/21/2020.
//

#include <iostream>

using namespace std;

int sum(initializer_list<int> list) {
    int sum = 0;
    for (auto i : list) {
        sum += i;
    }
    return sum;
}

string concat(initializer_list<string> const &list) {
    string sum;
    for (const auto &i : list) {
        sum += i + "\t";
    }
    return sum;
}


int main(int argc, char *argv[]) {
    cout << sum({1, 2, 3, 4}) << endl;
    cout << sum({11, 22, 33, 44}) << endl;
    cout << concat({"hello","world"}) << endl;
    return 0;
}
