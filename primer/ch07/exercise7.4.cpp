//
// Created by zing on 5/24/2020.
//

#include <iostream>

using namespace std;

struct Person {
    string name;
    int age;
    string address;

    Person(const string &name, int age, const string &address) {
        this->name = name;
        this->age = age;
        this->address = address;
    }

    int getAge() {
        return this->age;
    }

    string getName() {
        return this->name;
    }
};

class Student {
public:
    string name;
    int age;
    string address;

    Student(const string &name, int age, const string &address) {
        this->name = name;
        this->age = age;
        this->address = address;
    }

    int getAge() {
        return this->age;
    }

    string getName() {
        return this->name;
    }
    string getAddress();
};

string Student::getAddress() {
    return this->address;
}
int main(int argc, char *argv[]) {
    const Person &person = Person("zing", 25, "wuxi");
    cout << person.name << endl;
    cout << person.age << endl;
    cout << person.address << endl;

    Student student = Student("zing", 25, "wuxi");
    cout << student.getName() << endl;
    cout << student.getAddress() << endl;
    return 0;
    
}
