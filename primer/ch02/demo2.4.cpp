//
// Created by zing on 4/25/2020.
//


int main(int argc, char *argv[]) {

    {
        const int i = 0;

        extern const int a;

        const int b = 1024;
        const int &b1 = b;
    }
    return 0;
}
