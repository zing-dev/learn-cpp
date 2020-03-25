//
// Created by zing on 3/25/2020.
//

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


