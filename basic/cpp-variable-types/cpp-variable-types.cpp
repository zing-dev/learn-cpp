//
// Created by zhang on 2017/9/11.
//

#include <iostream>

using namespace std;

// 变量声明
extern int a, b;
extern int c;
extern float f;

int main() {
    // 变量定义
    int a, b;
    int c;
    float f;

    // 实际初始化
    a = 10;
    b = 20;
    c = a + b;

    cout << c << endl;

    f = 70.0 / 3.0;
    cout << f << endl;

    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

    /**
     * enum 枚举名{
     * 标识符[=整型常数],
     * 标识符[=整型常数],
     *  ...
     * 标识符[=整型常数]
     * } 枚举变量
     */
    enum days {
        one = 1, two = 2, three = 3
    } day;
    day = one;
    days days1;
    days1 = two;
    cout << "days1 is " << days1 << endl;
    switch (day) {
        case one:
            cout << "one" << endl;
            break;
        case two:
            cout << "two" << endl;
            break;
        default:
            cout << "three" << endl;
            break;
    }


    typedef int INT;
    cout << "INT sizeof is " << sizeof(INT);
    return 0;
}