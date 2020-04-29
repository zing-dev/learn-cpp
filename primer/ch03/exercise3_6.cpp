//
// Created by zing on 4/29/2020.
//
#include <string>
#include <iostream>
#include <cctype>

using namespace std;
int main(int argc, char *argv[]) {
    string str;
    getline(cin,str);
    for(auto &c : str){
        if (isalpha(c)){
            c = 'X';
        }
    }
    cout << str << endl;
    return 0;
}
