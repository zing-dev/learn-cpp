//
// Created by zhangrongxiang on 2017/10/22 0:27
// File point
//

#ifndef LEARN_CPP_POINT_H
#define LEARN_CPP_POINT_H

#include <iostream>

using namespace std;

class Point {
public:
    void setPoint(int x, int y); //在类内对成员函数进行声明
    void printPoint();

    Point() {
        cout << "this is 构造函数" << endl;
    }

    ~ Point() {
        cout << "this is 析构函数" << endl;
    }

private:
    int xPos;
    int yPos;
};

void Point::setPoint(int x, int y) //通过作用域操作符 '::' 实现setPoint函数
{
    xPos = x;
    yPos = y;
}

void Point::printPoint()       //实现printPoint函数
{
    cout << "x = " << xPos << endl;
    cout << "y = " << yPos << endl;
}

//int main() {
//    Point M;        //用定义好的类创建一个对象 点M
//    M.setPoint(10, 20); //设置 M点 的x,y值
//    M.printPoint();     //输出 M点 的信息
//
//    return 0;
//}


class Person {
public:
    string name;
    int age;

    Person(string name = "zrx", int age);

    ~Person();

    void setName(string name);

    string getName();

    void setAge(int age);

    int getAge();
};

Person::Person(string name, int age) {
    cout << "这是构造函数" << endl;
    this->name = name;
    this->age = age;
}

Person::~Person() {
    cout << "这是析构函数" << endl;
}

void Person::setName(string name) {
    this->name = name;
}

string Person::getName() {
    return this->name;
}

int Person::getAge() {
    return this->age;
}

void Person::setAge(int age) {
    this->age = age;
}

#endif //LEARN_CPP_POINT_H
