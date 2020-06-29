//
// Created by zing on 6/29/2020.
//

#include <iostream>

struct s{
    int id;
}S;
auto main() -> int {
    std::cout << "[auto.cpp]" << std::endl;

    // Creating several auto-type variables
    auto a = 1;
    auto b = 1.0;
    auto c = a + b;
    auto d = {b, c};
    auto e = "";
    auto f = S;
    // Displaying the preceding variables' type
    std::cout << "type of a: " << typeid(a).name() << std::endl; //i
    std::cout << "type of b: " << typeid(b).name() << std::endl; //d
    std::cout << "type of c: " << typeid(c).name() << std::endl; //d
    std::cout << "type of d: " << typeid(d).name() << std::endl; // St16initializer_listIdE
    std::cout << "type of d: " << typeid(e).name() << std::endl; // PKc
    std::cout << "type of d: " << typeid(f).name() << std::endl; // 1s
    return 0;
}
