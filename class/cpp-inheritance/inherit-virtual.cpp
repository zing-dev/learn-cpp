//
// Created by zing on 6/7/2020.
//

#include <iostream>

using namespace std;

class Animal {
public:
    int m_Age;
};

//继承前加virtual关键字后，变为虚继承
//此时公共的父类Animal称为虚基类
class Sheep : virtual public Animal {
};

class Tuo : virtual public Animal {
};

class SheepTuo : public Sheep, public Tuo {
};

void test01() {
    SheepTuo st;
    st.Tuo::m_Age = 200;
    st.Sheep::m_Age = 100;

    cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
    cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
    cout << "st.m_Age = " << st.m_Age << endl;
}


class Animal2 {
public:
    //Speak函数就是虚函数
    //函数前面加上virtual关键字，变成虚函数，那么编译器在编译的时候就不能确定函数调用了。
    virtual void speak() {
        cout << "动物在说话" << endl;
    }
};

class Cat : public Animal2 {
public:
    void speak() {
        cout << "小猫在说话" << endl;
    }
};

class Dog : public Animal2 {
public:

    void speak() {
        cout << "小狗在说话" << endl;
    }

};
//我们希望传入什么对象，那么就调用什么对象的函数
//如果函数地址在编译阶段就能确定，那么静态联编
//如果函数地址在运行阶段才能确定，就是动态联编

void DoSpeak(Animal2 &animal) {
    animal.speak();
}
//
//多态满足条件：
//1、有继承关系
//2、子类重写父类中的虚函数
//多态使用：
//父类指针或引用指向子类对象

void test02() {
    Cat cat;
    DoSpeak(cat);

    Dog dog;
    DoSpeak(dog);
}

//普通实现
class Calculator {
public:
    int getResult(string oper) const {
        if (oper == "+") {
            return m_Num1 + m_Num2;
        } else if (oper == "-") {
            return m_Num1 - m_Num2;
        } else if (oper == "*") {
            return m_Num1 * m_Num2;
        }
        //如果要提供新的运算，需要修改源码
    }

public:
    int m_Num1;
    int m_Num2;
};

void test03() {
    //普通实现测试
    Calculator c;
    c.m_Num1 = 10;
    c.m_Num2 = 10;
    cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
    cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;
    cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;
}


//多态实现
//抽象计算器类
//多态优点：代码组织结构清晰，可读性强，利于前期和后期的扩展以及维护
class AbstractCalculator {
public :

    virtual int getResult() {
        return 0;
    }

    int m_Num1;
    int m_Num2;
};

//加法计算器
class AddCalculator : public AbstractCalculator {
public:
    int getResult() {
        return m_Num1 + m_Num2;
    }
};

//减法计算器
class SubCalculator : public AbstractCalculator {
public:
    int getResult() {
        return m_Num1 - m_Num2;
    }
};

//乘法计算器
class MulCalculator : public AbstractCalculator {
public:
    int getResult() {
        return m_Num1 * m_Num2;
    }
};


void test04() {
    //创建加法计算器
    AbstractCalculator *abc = new AddCalculator;
    abc->m_Num1 = 10;
    abc->m_Num2 = 10;
    cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
    delete abc;  //用完了记得销毁

    //创建减法计算器
    abc = new SubCalculator;
    abc->m_Num1 = 10;
    abc->m_Num2 = 10;
    cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
    delete abc;

    //创建乘法计算器
    abc = new MulCalculator;
    abc->m_Num1 = 10;
    abc->m_Num2 = 10;
    cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
    delete abc;
}


int main() {
    test01();
    test02();
    test03();
    test04();
    return 0;
}
