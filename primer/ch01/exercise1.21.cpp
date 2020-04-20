//
// Created by zing on 4/19/2020.
//
#include <iostream>
#include "Sales_item.h"

using namespace std;

int main(int argc, char *argv[]) {

    Sales_item item, item1;
    cin >> item >> item1;

    if (item.isbn() == item1.isbn()) {
        cout << item + item1 << endl;
    } else {
        cerr << "Data must refer to Same ISBN" << endl;
        return -1;
    }
    return 0;
}
