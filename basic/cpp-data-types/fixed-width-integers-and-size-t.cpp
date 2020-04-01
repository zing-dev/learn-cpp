//
// Created by zing on 4/1/2020.
//

#include <iostream>
#include <cstdint>

using namespace std;

int main() {

    cout << "fast 8:  " << sizeof(std::int8_t) * 8 << " bits\n";
    cout << "fast 8:  " << sizeof(std::uint8_t) * 8 << " bits\n";

    cout << "fast 8:  " << sizeof(std::int_fast8_t) * 8 << " bits\n";
    cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";
    cout << "fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits\n";

    cout << "least 8:  " << sizeof(std::int_least8_t) * 8 << " bits\n";
    cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
    cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";

    return 0;
}

