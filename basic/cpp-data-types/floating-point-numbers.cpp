//
// Created by zing on 4/1/2020.
//

#include <iostream>
#include <iomanip>

int main()
{
    std::cout << 5.0 << '\n';
    std::cout << 6.7f << '\n';
    std::cout << 9876543.21 << '\n';

    std::cout << 9.87654321f << '\n';
    std::cout << 987.654321f << '\n';
    std::cout << 987654.321f << '\n';
    std::cout << 9876543.21f << '\n';
    std::cout << 0.0000987654321f << '\n';

    // show 16 digits of precision
    std::cout << std::setprecision(16) << std::endl;

    //3.333333253860474
    std::cout << 3.33333333333333333333333333333333333333f <<'\n'; // f suffix means float

    //3.333333333333333
    std::cout << 3.33333333333333333333333333333333333333 << '\n'; // no suffix means double

    float f { 123456789.0f }; // f has 10 significant digits
    std::cout << std::setprecision(9); // to show 9 digits in f
    //123456792
    std::cout << f << '\n';

    double d{0.1};
    std::cout << d << '\n'; // use default cout precision of 6
    std::cout << std::setprecision(17);
    //0.10000000000000001
    std::cout << d << '\n';

    double d1(1.0);
    std::cout << d1 << std::endl;

    double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1); // should equal 1.0
    //0.99999999999999989
    std::cout << d2 << std::endl;

    double zero {0.0};
    double posinf { 5.0 / zero }; // positive infinity
    //inf
    std::cout << posinf << std::endl;

    double neginf { -5.0 / zero }; // negative infinity
    //-inf
    std::cout << neginf << std::endl;

    double nan { zero / zero }; // not a number (mathematically invalid)
    //-nan
    std::cout << nan << std::endl;
    return 0;
}