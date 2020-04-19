//
// Created by zing on 4/19/2020.
//

#include <cassert>

int multiple(int a, int b) {
    int product = a * b;
    return product;
}

int main(int argc, char *argv[]) {
    assert(multiple(1,2) == 2);
    assert(multiple(2,2) == 4);
    assert(multiple(2, 2) != 5);
    return 0;
}
