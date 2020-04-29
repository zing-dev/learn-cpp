//
// Created by zing on 4/29/2020.
//

#include <string>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    string s1;
    cout << s1 << endl;
    string s2 = s1;
    cout << s2 << endl;
    string s3 = "hello"; //hello
    cout << s3 << endl;
    string s4(10,'a');//aaaaaaaaaa
    cout << s4 << endl;
    string s5("cpp"); //cpp
    cout << s5 << endl;
    string s6 = string("hello cpp"); //hello cpp
    cout << s6 << endl;

    string s7;
    cin >> s7;
    cout << s7 << endl;

    string s8;
    getline(cin,s8);

    string s9("hello world");
    cout << s9 <<endl;
    cout << s9.length() << endl;
    cout << s9.empty() << endl;
    cout << s9.size() << endl;
    return 0;
}
