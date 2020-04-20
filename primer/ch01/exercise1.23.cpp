//
// Created by zing on 4/19/2020.
//
#include <iostream>
#include "Sales_item.h"

using namespace std;

int main(int argc, char *argv[]) {
    Sales_item currItem, valItem;
    if (std::cin >> currItem) {
        int cnt = 1;
        while (std::cin >> valItem) {
            if (valItem.isbn() == currItem.isbn())
                ++cnt;
            else {
                std::cout << currItem << " occurs " << cnt << " times "<< std::endl;
                currItem = valItem;
                cnt = 1;
            }
        }

        std::cout << currItem << " occurs " << cnt << " times " << std::endl;
    }
    return 0;
}