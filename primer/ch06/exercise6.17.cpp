//
// Created by zing on 5/19/2020.
//

#include <iostream>

using namespace std;

void lower(string &str) {
    for (auto &s : str) {
        if (isupper(s)) {
            s = tolower(s);
        }
    }
}

bool hasUpper(const string &str) {
    for (auto s : str) {
        if (isupper(s)) {
            return true;
        }
    }
    return false;
}


int main(int argc, char *argv[]) {

    cout << hasUpper("hello") << endl;
    cout << hasUpper("Hello") << endl;
    cout << hasUpper("") << endl;
    string str("Hello");
    lower(str);
    cout << str << endl;
    return 0;
}
