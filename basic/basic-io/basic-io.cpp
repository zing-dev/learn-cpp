//
// Created by zing on 3/24/2020.
//
#include <iostream>

using namespace std;

void output(int x) {
    cout << "Output sentence" << endl; // prints Output sentence on screen
    cout << 120 << endl;               // prints number 120 on screen
    cout << x << endl;

    cout << "This " << " is a " << "single C++ statement" << endl;
}

void input() {
    int i;
    cout << "Please enter an integer value: ";
    cin >> i;
    cout << "The value you entered is " << i;
    cout << " and its double is " << i * 2 << ".\n";
}

void input_strings() {
    string str;
    cout << "What's your name? ";
    getline(cin, str);
    cout << "Hello " << str << ".\n";
    cout << "What is your favorite team? ";
    getline(cin, str);
    cout << "I like " << str << " too!\n";
}

/*
void string_stream() {
    string str;
    float price = 0;
    int quantity = 0;

    cout << "Enter price: ";
    getline(cin, str);
    stringstream(str) >> price;
    cout << "Enter quantity: ";
    getline(cin, str);
    stringstream(str) >> quantity;
    cout << "Total price: " << price * quantity << endl;
}*/
