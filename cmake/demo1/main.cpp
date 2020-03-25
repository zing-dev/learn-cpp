//
// Created by zing on 3/25/2020.
//

#include <cstdio>
#include <cstdlib>

/**
 * power - Calculate the power of number.
 * @param base: Base value.
 * @param exponent: Exponent value.
 *
 * @return base raised to the power exponent.
 */
double power(double base, int exponent) {
    double result = base;
    int i;

    if (exponent == 0) {
        return 1;
    }

    for (i = 1; i < exponent; ++i) {
        result = result * base;
    }

    return result;
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: %s base exponent \n", argv[0]);
        return 1;
    }
    double base = strtol(argv[1], (char **) nullptr, 10);
    int exponent = strtol(argv[2], (char **) nullptr, 10);
    double result = power(base, exponent);
    printf("%g ^ %d is %g\n", base, exponent, result);
    return 0;
}