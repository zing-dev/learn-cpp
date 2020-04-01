//
// Created by zing on 4/1/2020.
//

#include <iostream>

int main()
{
    std::cout << true << '\n'; // true evaluates to 1
    std::cout << !true << '\n'; // !true evaluates to 0

    bool b{false};
    std::cout << b << '\n'; // b is false, which evaluates to 0
    std::cout << !b << '\n'; // !b is true, which evaluates to 1

    std::cout << std::boolalpha; // print bools as true or false
    std::cout << true << '\n';
    std::cout << false << '\n';

    //bool b2{ 4 }; // error: narrowing conversions disallowed
    //std::cout << b2;

    bool b1 = 4 ; // copy initialization allows implicit conversion from int to bool
    std::cout << b1 << '\n';

    bool b2 = 0 ; // copy initialization allows implicit conversion from int to bool
    std::cout << b2 << '\n';

    return 0;
}

