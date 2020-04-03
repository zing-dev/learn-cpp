//
// Created by zhang on 4/3/2020.
//


#include <string>
#include <iostream>
#include <utility>

using namespace std;

class Student {
public:
    string name;
    int age{};

    int getAge();

    string getName();

    Student();

    Student(int age, string name);

    ~Student();
};

int Student::getAge() {
    return this->age;
}

string Student::getName() {
    return this->name;
}

Student::Student() {
    cout << "create....." << this->name << endl;
}

Student::Student(int age, string name) {
    this->age = age;
    this->name = std::move(name);
    cout << "create....." << endl;
}

Student::~Student() {
    cout << "over....." << this->name << endl;
}


int main(int argc, char *argv[]) {

    cout << "=================================" << endl;
    Student stu;
    stu.age = 20;
    stu.name = "C";
    cout << stu.getAge() << endl;
    cout << stu.getName() << endl;

    cout << "=================================" << endl;
    auto *stu2 = new Student(22, "Cpp");
    cout << stu2->getAge() << endl;
    cout << stu2->getName() << endl;
    delete stu2;
//    delete (stu2);

    cout << "=================================" << endl;
    Student stu3 = Student(22, "Java");
    cout << stu3.getAge() << endl;
    cout << stu3.getName() << endl;

    return (0);
}
