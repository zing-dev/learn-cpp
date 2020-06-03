//
// Created by zing on 6/3/2020.
//
#include <iostream>

using namespace std;

class Person {
public:
    //构造函数
    Person() {
        cout << "Person的构造函数调用" << endl;
    }

    //析构函数
    ~Person() {
        cout << "Person的析构函数调用" << endl;
    }

};

//1、构造函数分类
// 按照参数分类分为 有参和无参构造   无参又称为默认构造函数
// 按照类型分类分为 普通构造和拷贝构造

class Person2 {
public:
    //无参（默认）构造函数
    Person2() {
        cout << "无参构造函数!" << endl;
    }

    //有参构造函数
    Person2(int a) {
        age = a;
        cout << "有参构造函数!" << endl;
    }

    //拷贝构造函数
    Person2(const Person2 &p) {
        age = p.age;
        cout << "拷贝构造函数!" << endl;
    }

    //析构函数
    ~Person2() {
        cout << "析构函数!" << endl;
    }

public:
    int age;
};

//2、构造函数的调用
//调用无参构造函数
void test01() {
    Person p; //调用无参构造函数
}


void test02() {
    Person2 p;
}

//调用有参的构造函数
void test03() {

    //2.1  括号法，常用
    Person2 p1(10);
    //注意1：调用无参构造函数不能加括号，如果加了编译器认为这是一个函数声明
    //Person2 p2();

    //2.2 显式法
    Person2 p2 = Person2(10);
    Person2 p3 = Person2(p2);
    //Person(10)单独写就是匿名对象  当前行结束之后，马上析构

    //2.3 隐式转换法
    Person2 p4 = 10; // Person2 p4 = Person2(10);
    Person2 p5 = p4; // Person2 p5 = Person2(p4);

    //注意2：不能利用 拷贝构造函数 初始化匿名对象 编译器认为是对象声明
    //Person2 p5(p4);
}


int main() {
    test01();
    test02();
    test03();
    return 0;
}