//
// Created by zing on 5/18/2020.
//


#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ofstream outfile;
    outfile.open(R"(learn-cpp\linux\fstream\open.cpp)");
    if (outfile.fail()) {
        cout << "open file err" << endl;
    } else {
        cout << "open file success" << endl;
        cout << outfile.is_open() << endl;
        cout << outfile.eof() << endl;
        cout << outfile.good() << endl;
        cout << outfile.bad() << endl;
    }
    outfile.close();
}