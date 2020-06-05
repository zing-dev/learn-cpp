//
// Created by zing on 6/5/2020.
//

#include <iostream>

using namespace std;

class Person {

public:
    int m_A;
    int m_B;

    Person() {};

    Person(int a, int b) {
        this->m_A = a;
        this->m_B = b;
    }

    //成员函数实现 + 号运算符重载
    Person operator+(const Person &p) {
        Person temp;
        temp.m_A = this->m_A + p.m_A;
        temp.m_B = this->m_B + p.m_B;
        return temp;
    }
};

//全局函数实现 + 号运算符重载
//Person operator+(const Person& p1, const Person& p2) {
//	Person temp(0, 0);
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}

//运算符重载 可以发生函数重载
Person operator+(const Person &p2, int val) {
    Person temp;
    temp.m_A = p2.m_A + val;
    temp.m_B = p2.m_B + val;
    return temp;
}

void test() {

    Person p1(10, 10);
    Person p2(20, 20);

    //成员函数方式
    Person p3 = p2 + p1;  //相当于 p2.operaor+(p1)
    cout << "mA:" << p3.m_A << " mB:" << p3.m_B << endl;


    Person p4 = p3 + 10; //相当于 operator+(p3,10)
    cout << "mA:" << p4.m_A << " mB:" << p4.m_B << endl;

}

class Person2 {
    friend ostream &operator<<(ostream &out, Person2 &p);

public:
    Person2(int a, int b) {
        this->m_A = a;
        this->m_B = b;
    }

    //成员函数 实现不了  p << cout 不是我们想要的效果
    //void operator<<(Person& p){
    //}

private:
    int m_A;
    int m_B;
};

//全局函数实现左移重载
//ostream对象只能有一个
ostream &operator<<(ostream &out, Person2 &p) {
    out << "a:" << p.m_A << " b:" << p.m_B;
    return out;
}

void test2() {
    Person2 p1(10, 20);
    cout << p1 << "hello world" << endl; //链式编程
}


class MyInteger {
    friend ostream &operator<<(ostream &out, MyInteger myint);

public:
    MyInteger() {
        m_Num = 0;
    }

    //前置++
    MyInteger &operator++() {
        //先++
        m_Num++;
        //再返回
        return *this;
    }

    //后置++
    MyInteger operator++(int) {
        //先返回
        MyInteger temp = *this; //记录当前本身的值，然后让本身的值加1，但是返回的是以前的值，达到先返回后++；
        m_Num++;
        return temp;
    }

private:
    int m_Num;
};


ostream &operator<<(ostream &out, MyInteger myint) {
    out << myint.m_Num;
    return out;
}


//前置++ 先++ 再返回
void test01() {
    MyInteger myInt;
    cout << ++myInt << endl;
    cout << myInt << endl;
}

//后置++ 先返回 再++
void test02() {
    MyInteger myInt;
    cout << myInt++ << endl;
    cout << myInt << endl;
}


int main() {
    test();
    test2();
    test01();
    return 0;
}