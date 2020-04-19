//
// Created by zing on 4/19/2020.
//
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int sum = 0, value = 0;

    while (std::cin >> value) {
        sum += value;
    }

    std::cout << sum << std::endl;
    return 0;
}
