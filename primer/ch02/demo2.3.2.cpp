//
// Created by zing on 4/25/2020.
//

#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    {
        int *ip1, *ip2;
        double dp, *dp2;

        int i = 42;
        int *p = &i;
        cout << *p << endl;

        double dval;
        double *pd = &dval;
        double *pd2 =  pd;
    }

    {
        int *p = nullptr;
        int *p2 = 0;
        int *p3 = NULL;
    }
    return 0;
}
