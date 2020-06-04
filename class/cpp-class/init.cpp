//
// Created by zing on 6/4/2020.
//

#include <iostream>

using namespace std;


class Person {
public:

    ////传统方式初始化
    //Person(int a, int b, int c) {
    //	m_A = a;
    //	m_B = b;
    //	m_C = c;
    //}

    //初始化列表方式初始化
    Person(int a, int b, int c) : m_A(a), m_B(b), m_C(c) {}

    void PrintPerson() {
        cout << "mA:" << m_A << endl;
        cout << "mB:" << m_B << endl;
        cout << "mC:" << m_C << endl;
    }

private:
    int m_A;
    int m_B;
    int m_C;
};


class Phone {
public:
    Phone(string name) {
        m_PhoneName = name;
        cout << "Phone构造" << endl;
    }

    ~Phone() {
        cout << "Phone析构" << endl;
    }

    string m_PhoneName;
};


class Person2 {
public:

    //初始化列表可以告诉编译器调用哪一个构造函数
    Person2(string name, string pName) : m_Name(name), m_Phone(pName) {
        cout << "Person构造" << endl;
    }

    ~Person2() {
        cout << "Person析构" << endl;
    }

    void playGame() {
        cout << m_Name << " 使用" << m_Phone.m_PhoneName << " 牌手机! " << endl;
    }

    string m_Name;
    Phone m_Phone;
};

void test01() {
    //当类中成员是其他类对象时，我们称该成员为 对象成员
    //构造的顺序是 ：先调用对象成员的构造，再调用本类构造
    //析构顺序与构造相反
    Person2 p("张三", "苹果X");
    p.playGame();

}


int main() {
    Person p(1, 2, 3);
    p.PrintPerson();

    test01();
    return 0;
}