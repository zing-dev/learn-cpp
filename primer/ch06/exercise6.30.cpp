//
// Created by zing on 5/21/2020.
//

#include <iostream>

using namespace std;

bool sub_string(const string &str1, const string &str2) {
    if (str1.size() == str2.size()) {
        return str1 == str2;
    }
    auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();

    for (decltype(size) i = 0; i != size; ++i) {
        if (str1[i] != str2[i]) {
            return false;
        }
    }
    return true;
}

int main(int argc, char *argv[]) {

    cout << sub_string( "123","321")<< endl;
    return 0;
}
