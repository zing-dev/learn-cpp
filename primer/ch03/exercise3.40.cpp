//
// Created by zing on 5/17/2020.
//

#include <iostream>
#include <cstring>

using namespace std;

const char cstr1[] = "Hello";
const char cstr2[] = "world!";

int main() {
    char cstr3[100]("");
    strcat(cstr3, cstr1);
    strcat(cstr3, " ");
    strcat(cstr3, cstr2);

    std::cout << cstr3 << std::endl;
    cout << "你好"<< endl;
}