//
// Created by zing on 4/25/2020.
//


int main(int argc, char *argv[]) {

    {
        const int ci = 0, &cj = ci;
        decltype(ci) x = 0;
        decltype(cj) y = x;
        //decltype(cj) z; //引用必须初始化
    }

    {
        int i = 42,*p = &i,&r = i;
        //decltype(r ) a;
        decltype(r + 0) b;
        //decltype(*p) c; //c是int& 必须初始化
        //decltype((i)) d; //引用
        decltype(i) e;

    }
    return 0;
}
