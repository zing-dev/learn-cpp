//
// Created by zing on 4/1/2020.
//

#include <iostream>

int main() {
    char ch{'a'};
    char ch2('b');
    std::cout << ch << '\n';
    //静态强制转换：
    //static_cast <新类型>（表达式）
    std::cout << static_cast<int>(ch) << '\n';
    std::cout << ch << '\n';
    std::cout << static_cast<char>(98) << '\n';
    std::cout << int(ch) << '\n';
    std::cout << ch2 << '\n';
    return 0;
}

