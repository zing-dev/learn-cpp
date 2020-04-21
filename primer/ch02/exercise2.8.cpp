//
// Created by zing on 4/21/2020.
//

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    cout << '\n' << endl;
    cout << '\a' << endl;
    cout << '\\' << endl;
    cout << '\x4c' << endl;//M
    cout << '\x4d' << endl;//M
    cout << L'哈' << endl;//21704

    //
    cout << "2M" <<endl;
    cout << 'M' <<endl;

    cout << 2 << "\t\115\012";
    cout << "2\n\x4d\n" <<endl;
    return 0;
}
