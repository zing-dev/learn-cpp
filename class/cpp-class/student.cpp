//
// Created by zing on 6/3/2020.
//
#include <iostream>

using namespace std;

//学生类
class Student {
public:
    void setName(const string& name) {
        m_name = name;
    }

    void setID(int id) {
        m_id = id;
    }

    void showStudent() {
        cout << "name:" << m_name << " ID:" << m_id << endl;
    }

public:
    string m_name;
    int m_id{};
};

int main() {
    Student stu;
    stu.setName("德玛西亚");
    stu.setID(250);
    stu.showStudent();
    return 0;
}