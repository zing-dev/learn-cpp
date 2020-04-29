//
// Created by zing on 4/29/2020.
//

#include <string>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    string s1, s2;
    cout << "please input two strings:" << endl;
    cin >> s1 >> s2;

    if (s1.length() == s2.length()) {
        cout << "s1 == s2" << endl;
    } else if (s1.length() > s2.length()) {
        cout << " s1 > s2 " << endl;
        cout << s1 << " > " << s2 << endl;
    } else {
        cout << " s1 < s2 " << endl;
        cout << s1 << " < " << s2 << endl;
    }
    return 0;
}
