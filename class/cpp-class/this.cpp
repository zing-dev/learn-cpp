//
// Created by zing on 6/4/2020.
//
#include <iostream>

using namespace std;

class Person {
public:
    Person() {
        mA = 0;
    }

    //非静态成员变量占对象空间
    int mA;
    //静态成员变量不占对象空间
    static int mB;

    //函数也不占对象空间，所有函数共享一个函数实例
    void func() {
        cout << "mA:" << this->mA << endl;
    }

    //静态成员函数也不占对象空间
    static void sfunc() {
    }
};

class Person2 {
public:
    Person2(int age) {
        //1、当形参和成员变量同名时，可用this指针来区分
        this->age = age;
    }

    Person2 &PersonAddPerson(Person2 p) {
        this->age += p.age;
        //返回对象本身
        return *this;
    }

    int age;
};

void test01() {
    Person2 p1(10);
    cout << "p1.age = " << p1.age << endl;

    Person2 p2(10);
    Person2 p3 = 10;
    p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);
    cout << "p2.age = " << p2.age << endl;
}

//空指针访问成员函数
class Person3 {
public:

    void ShowClassName() {
        cout << "我是Person类!" << endl;
    }

    void ShowPerson() {
        if (this == NULL) {
            return;
        }
        cout << mAge << endl;
    }

public:
    int mAge;
};

void test03()
{
    Person3 * p = NULL;
    p->ShowClassName(); //空指针，可以调用成员函数
    p->ShowPerson();  //但是如果成员函数中用到了this指针，就不可以了
}

int main() {
    cout << sizeof(Person) << endl;
    test01();
    test03();
    return 0;
}