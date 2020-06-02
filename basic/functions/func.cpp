//
// Created by zing on 6/2/2020.
//

#include <iostream>

using namespace std;

int func(int a, int b = 10, int c = 10) {
    return a + b + c;
}

//1. 如果某个位置参数有默认值，那么从这个位置往后，从左向右，必须都要有默认值
//2. 如果函数声明有默认值，函数实现的时候就不能有默认参数
int func2(int a = 10, int b = 10);

int func2(int a, int b) {
    return a + b;
}

void seat(int, int);

//函数占位参数 ，占位参数也可以有默认参数
void seat(int a, int) {
    cout << "this is seat function" << endl;
}

//函数重载需要函数都在同一个作用域下
void overload() {
    cout << "overload 的调用！" << endl;
}

void overload(int a) {
    cout << "overload (int a) 的调用！" << endl;
}

void overload(double a) {
    cout << "overload (double a)的调用！" << endl;
}

void overload(int a, double b) {
    cout << "overload (int a ,double b) 的调用！" << endl;
}

void overload(double a, int b) {
    cout << "overload (overload a ,int b)的调用！" << endl;
}

//函数重载注意事项
//1、引用作为重载条件

void overload_ref(int &a) {
    cout << "overload_ref (int &a) 调用 " << endl;
}

void overload_ref(const int &a) {
    cout << "overload_ref (const int &a) 调用 " << endl;
}


int main(int argc, char *argv[]) {
    cout << "ret = " << func(20, 20) << endl;
    cout << "ret = " << func(100) << endl;
    cout << "ret = " << func2(100, 2) << endl;
    seat(1, 1);
    overload();
    overload(10);
    overload(3.14);
    overload(10, 3.14);
    overload(3.14, 10);
    int a = 10;
    overload_ref(a); //调用无const
    overload_ref(10);//调用有const
    return 0;
}
