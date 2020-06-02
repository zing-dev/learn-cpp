//
// Created by zing on 4/4/2020.
//

#include <iostream>

using namespace std;

void new1() {
    double *d = nullptr; // 初始化为 null 的指针
    d = new double;   // 为变量请求内存
    *d = 10;

    cout << *d << endl;//10
    double d2 = 11;
    d = &d2;
    cout << *d << endl;//11
    *d = 12;
    cout << *d << endl; //12
    cout << d2 << endl; // 12

}

int *func() {
    int *a = new int(10);
    return a;
}

int new2() {
    int *p = func();
    cout << *p << endl;
    cout << *p << endl;
    //利用delete释放堆区数据
    delete p;
    //cout << *p << endl; //报错，释放的空间不可访问
    return 0;
}

//堆区开辟数组
int new_array() {
    int *arr = new int[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = i + 100;
    }

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << endl;
    }
    //释放数组 delete 后加 []
    delete[] arr;
    return 0;
}


int main(int argc, char *argv[]) {
    new1();
    new2();
    new_array();
    return 0;
}
