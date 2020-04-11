//
// Created by zing on 4/11/2020.
//

#include <iostream>

using namespace std;

class Shape {
protected:
    int width, height;
public:
    explicit Shape(int a = 0, int b = 0) {
        width = a;
        height = b;
    }

    virtual void area(){}
};

class Rectangle : public Shape {
public:
    explicit Rectangle(int a = 0, int b = 0) : Shape(a, b) {}

    void area() override {
        cout << "Rectangle class area :" << (width * height) << endl;
    }
};

class Triangle : public Shape {
public:
    explicit Triangle(int a = 0, int b = 0) : Shape(a, b) {}

    void area() override {
        cout << "Triangle class area :" << (width * height / 2) << endl;
    }
};

// 程序的主函数
int main() {
    Shape *shape;
    Rectangle rec(10, 7);
    Triangle tri(10, 5);

    // 存储矩形的地址
    shape = &rec;
    // 调用矩形的求面积函数 area
    shape->area();

    // 存储三角形的地址
    shape = &tri;
    // 调用三角形的求面积函数 area
    shape->area();

    return 0;
}