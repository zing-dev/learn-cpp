//
// Created by zhangrongxiang on 2017/10/21 20:37
// File main
//

#include <iostream>
#include <cstring>

using namespace std;
int main() {
    char ch[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char ch2[15];
    cout << ch << endl;
    cout << sizeof(ch) << endl;
    cout << "strlen(ch) : " << strlen(ch) << endl;
    strcpy(ch2,ch);
    cout << ch2 << endl;
    strcat(ch2,ch);
    cout << ch2 << endl;
    cout << "------------------------------------------------" << endl;
    string str = "hello world";
    cout << str << endl;
    cout << str.size() << endl;
    cout << str.compare(str) << endl;
    cout << str.compare("H") << endl;
    cout << str + str << endl;

    cout << str.append(" world ") << endl;
}