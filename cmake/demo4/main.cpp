//
// Created by zing on 3/25/2020.
//

#include <cstdio>
#include <cstdlib>
#include <config.h>

#ifdef USE_MY_MATH
#include <my-math.h>
#else
#include <math.h>
#endif


int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: %s base exponent \n", argv[0]);
        return 1;
    }

    double base = strtol(argv[1], (char **) nullptr, 10);
    int exponent = strtol(argv[2], (char **) nullptr, 10);

#ifdef USE_MY_MATH
    printf("Now we use our own Math library. \n");
    double result = power(base, exponent);
#else
    printf("Now we use the standard library. \n");
    double result = pow(base, exponent);
#endif

    printf("%g ^ %d is %g\n", base, exponent, result);
    return 0;
}