//
// Created by zhangrongxiang on 2017/10/20 17:25
// File main
//

#include <cstdlib>
#include <iostream>
#include <iomanip>


using namespace std;
using std::setw;

double getAverage(const int arr[], int size);
int * getRandom();

int main() {
    int n[10]; // n 是一个包含 10 个整数的数组
    // 初始化数组元素
    for (int i = 0; i < 10; i++) {
        n[i] = i + 100; // 设置元素 i 为 i + 100
    }
    cout << "Element" << setw(13) << "Value" << endl;
    // 输出数组中每个元素的值
    for (int j = 0; j < 10; j++) {
        cout << setw(7) << j << setw(13) << n[j] << endl;
    }

    int a[3][4] = {
            {0, 1, 2,  3},   /*  初始化索引号为 0 的行 */
            {4, 5, 6,  7},   /*  初始化索引号为 1 的行 */
            {8, 9, 10, 11}   /*  初始化索引号为 2 的行 */
    };
    for (int k = 0; k < 3; ++k) {
        for (int i = 0; i < 4; ++i) {
            cout << "a[" << k << "][" << "[" << i << "] == " << a[k][i] << endl;
        }
    }

    cout << "---------------------------------------------------" << endl;
    // 带有 5 个元素的整型数组
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    double *p;
    p = balance;
    // 输出数组中每个元素的值
    cout << "使用指针的数组值 " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "*(p + " << i << ") : ";
        cout << *(p + i) << endl;
    }
    cout << "使用 balance 作为地址的数组值 " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "*(balance + " << i << ") : ";
        cout << *(balance + i) << endl;
    }

    /* 输出数组中每个元素的值 */
/*
    printf("使用指针的数组值\n");
    for (int i = 0; i < 5; i++) {
        printf("*(p + %d) : %f\n", i, *(p + i));
    }
    printf("使用 balance 作为地址的数组值\n");
    for (int i = 0; i < 5; i++) {
        printf("*(balance + %d) : %f\n", i, *(balance + i));
    }
    */
    cout << "getAverage(n,5) : " << getAverage(n, 5) << endl;

    int *pInt = getRandom();
    for (int l = 0; l < 10; ++l) {
        cout << " random is :" << *(pInt + l) << endl;
    }
    return 0;
}


double getAverage(const int arr[], int size) {
    int i, sum = 0;
    double avg;
    for (i = 0; i < size; ++i) {
        sum += arr[i];
    }
    avg = double(sum) / size;
    return avg;
}

// 要生成和返回随机数的函数
int * getRandom()
{
    static int  r[10];

    // 设置种子
    srand( (unsigned)time( nullptr ) );
    for (int & i : r)
    {
        i = rand();
        cout << i << endl;
    }

    return r;
}