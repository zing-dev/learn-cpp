//
// Created by zing on 4/2/2020.
//

#include <iostream>
#include <bitset>
#include <cstddef>

std::size_t getNumberOfBits() {
    return 3;
}

int main() {
    const std::size_t numberOfBits{3}; // Compile-time constant

    std::bitset<numberOfBits> b{};

    const std::size_t otherNumberOfBits{getNumberOfBits()}; // Run-time constant

    //std::bitset<otherNumberOfBits> b2{}; // Error

    constexpr double gravity{9.8}; // ok, the value of 9.8 can be resolved at compile-time
    constexpr int sum{4 + 5}; // ok, the value of 4 + 5 can be resolved at compile-time

    std::cout << "Enter your age: ";
    int age;
    std::cin >> age;
    //constexpr int myAge { age }; // not okay, age can not be resolved at compile-time

    return 0;
}