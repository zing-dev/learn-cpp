//
// Created by zing on 3/23/2020.
//

#include <iostream>

using namespace std;

void if_and_else(int x) {
    if (x > 0)
        cout << "x is positive" << endl;
    else if (x < 0)
        cout << "x is negative" << endl;
    else
        cout << "x is 0" << endl;

}

void while_loop() {
    cout << "=============while_loop==============" << endl;
    int n = 10;
    while (n > 0) {
        cout << n << "\t";
        --n;
    }
    cout << "over!" << endl;
}

void do_while_loop() {
    cout << "=============do_while_loop==============" << endl;
    int i = 10;
    do {
        cout << i << "\t";
        i--;
    } while (i > 0);
    cout << endl;

//    do {
//        cout << "Enter text: ";
//        getline(cin, str);
//        cout << "You entered: " << str << '\n';
//    } while (str != "goodbye");
}

void for_loop() {
    cout << "=============for_loop==============" << endl;
    for (int n = 10; n > 0; n--) {
        cout << n << ", ";
    }
    cout << "over" << endl;
}

void range_loop() {
    cout << "=============range_loop==============" << endl;
    string str{"Hello!"};
    for (char c : str) {
        cout << "[" << c << "]";
    }
    cout << '\n';
}

void break_loop() {
    cout << "=============break_loop==============" << endl;
    for (int n = 10; n > 0; n--) {
        if (n == 5) continue;
        cout << n << ", ";
    }
    cout << "liftoff!\n";
}

void continue_loop() {
    cout << "=============continue_loop==============" << endl;
    for (int n = 10; n > 0; n--) {
        if (n == 5) continue;
        cout << n << ", ";
    }
    cout << "liftoff!\n";
}

void goto_loop() {
    cout << "=============goto_loop==============" << endl;
    int n = 10;
    label:
    cout << n << ", ";
    n--;
    if (n > 0) {
        goto label;
    }
    cout << "liftoff!\n";
}

void switch_case(int x) {
    switch (x) {
        case 1:
            cout << "x is 1" << endl;
            break;
        case 2:
            cout << "x is 2" << endl;
            break;
        case 3:
        case 4:
        case 5:
        case 6:
            cout << "x is more than 2;less than 7" << endl;
            break;
        default:
            cout << "value of x unknown" << endl;
    }
}