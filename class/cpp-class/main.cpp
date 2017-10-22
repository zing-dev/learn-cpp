//
// Created by zhangrongxiang on 2017/10/22 0:00
// File main
//

#include <iostream>
#include "point.h"
#include "box.h"

using namespace std;

void box();

void pointer();

void person();

int main() {
//    box();
//    pointer();
    person();
    return 0;
}

void person() {
    Person person("zing",23);
    cout << "name : " << person.getName() << endl;
    cout << "age : " << person.getAge() << endl;
    person.setAge(22);
    person.setName("zhangrongxiang");
    cout << "name : " << person.getName() << endl;
    cout << "age : " << person.getAge() << endl;

}

void pointer() {
    Point M;        //用定义好的类创建一个对象 点M
    M.setPoint(10, 20); //设置 M点 的x,y值
    M.printPoint();     //输出 M点 的信息
}

void box() {
    Box Box1;        // 声明 Box1，类型为 Box
    Box Box2;        // 声明 Box2，类型为 Box
    double volume;     // 用于存储体积
    // box 1 详述
    Box1.height = 5.0;
    Box1.length = 6.0;
    Box1.breadth = 7.0;

    // box 2 详述
    Box2.height = 10.0;
    Box2.length = 12.0;
    Box2.breadth = 13.0;

    // box 1 的体积
    volume = Box1.height * Box1.length * Box1.breadth;
    cout << "Box1 的体积：" << volume << endl;
    cout << "Box1 的体积：" << Box1.getVolume() << endl;

    // box 2 的体积
    volume = Box2.height * Box2.length * Box2.breadth;
    cout << "Box2 的体积：" << volume << endl;
}