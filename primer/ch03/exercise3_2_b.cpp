//
// Created by zing on 4/28/2020.
//


#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
    string s;
    while (cin >> s) {
        if(s == "q"){
            break;
        }
        cout << s << endl;
    }
    return 0;
}