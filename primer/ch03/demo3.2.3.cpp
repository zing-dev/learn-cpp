//
// Created by zing on 4/29/2020.
//

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(int argc, char *argv[]) {
    string str = "hello world!!!!!!";
    decltype(str.size()) punctuation = 0, alpha = 0;
    for (auto s :str) {
        if (ispunct(s)) {
            punctuation++;
        }
        if (isalpha(s)) {
            alpha++;
        }
    }

    cout << punctuation << " punctuation characters in " << str << endl;
    cout << alpha << " alpha characters in " << str << endl;

    for (auto &c :str) {
        c = toupper(c);
    }
    cout << str << endl; //HELLO WORLD!!!!!!

    if (!str.empty()) {
        cout << str[0] << endl;
    }
    for (decltype(str.size()) index = 0; index < str.size() && !isspace(str[index]); index++) {
        str[index] = tolower(str[index]);
    }
    cout << str << endl;//hello WORLD!!!!!!
    return 0;
}
