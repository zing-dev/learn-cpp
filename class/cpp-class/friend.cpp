//
// Created by zing on 6/5/2020.
//

#include <iostream>

using namespace std;

// 全局函数做友元
class Building {
    //告诉编译器 goodGay全局函数 是 Building类的好朋友，可以访问类中的私有内容
    friend void goodGay(Building *building);

public:
    Building() {
        this->m_SittingRoom = "客厅";
        this->m_BedRoom = "卧室";
    }

public:
    string m_SittingRoom; //客厅

private:
    string m_BedRoom; //卧室
};


void goodGay(Building *building) {
    cout << "好基友正在访问： " << building->m_SittingRoom << endl;
    cout << "好基友正在访问： " << building->m_BedRoom << endl;
}


void test01() {
    Building b;
    goodGay(&b);
}

//类做友元
class Building2;

class goodGay {
public:
    goodGay();

    void visit();

private:
    Building2 *building;
};


class Building2 {
    //告诉编译器 goodGay类是Building类的好朋友，可以访问到Building类中私有内容
    friend class goodGay;

public:
    Building2();

public:
    string m_SittingRoom; //客厅
private:
    string m_BedRoom;//卧室
};

Building2::Building2() {
    this->m_SittingRoom = "客厅";
    this->m_BedRoom = "卧室";
}

goodGay::goodGay() {
    building = new Building2;
}

void goodGay::visit() {
    cout << "好基友正在访问" << building->m_SittingRoom << endl;
    cout << "好基友正在访问" << building->m_BedRoom << endl;
}

void test02() {
    class goodGay gg;
    gg.visit();

}

//成员函数做友元
class Building3;

class goodGay3 {
public:

    goodGay3();

    void visit(); //只让visit函数作为Building的好朋友，可以发访问Building中私有内容
    void visit2();

private:
    Building3 *building;
};


class Building3 {
    //告诉编译器  goodGay类中的visit成员函数 是Building好朋友，可以访问私有内容
    friend void goodGay3::visit();

public:
    Building3();

public:
    string m_SittingRoom; //客厅
private:
    string m_BedRoom;//卧室
};

Building3::Building3() {
    this->m_SittingRoom = "客厅";
    this->m_BedRoom = "卧室";
}

goodGay3::goodGay3() {
    building = new Building3;
}

void goodGay3::visit() {
    cout << "好基友正在访问" << building->m_SittingRoom << endl;
    cout << "好基友正在访问" << building->m_BedRoom << endl;
}

void goodGay3::visit2() {
    cout << "好基友正在访问" << building->m_SittingRoom << endl;
    //cout << "好基友正在访问" << building->m_BedRoom << endl;
}

void test03() {
    goodGay3 gg;
    gg.visit();

}

int main() {
    test01();
    test02();
    test03();
    return 0;
}