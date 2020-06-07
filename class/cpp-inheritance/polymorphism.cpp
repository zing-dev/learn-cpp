//
// Created by zing on 6/7/2020.
//

#include <iostream>

using namespace std;

//抽象制作饮品
class AbstractDrinking {
public:
    //烧水
    virtual void Boil() = 0;

    //冲泡
    virtual void Brew() = 0;

    //倒入杯中
    virtual void PourInCup() = 0;

    //加入辅料
    virtual void PutSomething() = 0;

    //规定流程
    void MakeDrink() {
        Boil();
        Brew();
        PourInCup();
        PutSomething();
    }
};

//制作咖啡
class Coffee : public AbstractDrinking {
public:
    //烧水
    virtual void Boil() {
        cout << "煮农夫山泉!" << endl;
    }

    //冲泡
    virtual void Brew() {
        cout << "冲泡咖啡!" << endl;
    }

    //倒入杯中
    virtual void PourInCup() {
        cout << "将咖啡倒入杯中!" << endl;
    }

    //加入辅料
    virtual void PutSomething() {
        cout << "加入牛奶!" << endl;
    }
};

//制作茶水
class Tea : public AbstractDrinking {
public:
    //烧水
    virtual void Boil() {
        cout << "煮自来水!" << endl;
    }

    //冲泡
    virtual void Brew() {
        cout << "冲泡茶叶!" << endl;
    }

    //倒入杯中
    virtual void PourInCup() {
        cout << "将茶水倒入杯中!" << endl;
    }

    //加入辅料
    virtual void PutSomething() {
        cout << "加入枸杞!" << endl;
    }
};

//业务函数
void DoWork(AbstractDrinking *drink) {
    drink->MakeDrink();
    delete drink;
}

void test01() {
    DoWork(new Coffee);
    cout << "--------------" << endl;
    DoWork(new Tea);
}

//抽象CPU类
class CPU {
public:
    //抽象的计算函数
    virtual void calculate() = 0;
};

//抽象显卡类
class VideoCard {
public:
    //抽象的显示函数
    virtual void display() = 0;
};

//抽象内存条类
class Memory {
public:
    //抽象的存储函数
    virtual void storage() = 0;
};

//电脑类
class Computer {
public:
    Computer(CPU *cpu, VideoCard *vc, Memory *mem) {
        m_cpu = cpu;
        m_vc = vc;
        m_mem = mem;
    }

    //提供工作的函数
    void work() {
        //让零件工作起来，调用接口
        m_cpu->calculate();

        m_vc->display();

        m_mem->storage();
    }

    //提供析构函数 释放3个电脑零件
    ~Computer() {

        //释放CPU零件
        if (m_cpu != NULL) {
            delete m_cpu;
            m_cpu = NULL;
        }

        //释放显卡零件
        if (m_vc != NULL) {
            delete m_vc;
            m_vc = NULL;
        }

        //释放内存条零件
        if (m_mem != NULL) {
            delete m_mem;
            m_mem = NULL;
        }
    }

private:

    CPU *m_cpu; //CPU的零件指针
    VideoCard *m_vc; //显卡零件指针
    Memory *m_mem; //内存条零件指针
};

//具体厂商
//Intel厂商
class IntelCPU : public CPU {
public:
    virtual void calculate() {
        cout << "Intel的CPU开始计算了！" << endl;
    }
};

class IntelVideoCard : public VideoCard {
public:
    virtual void display() {
        cout << "Intel的显卡开始显示了！" << endl;
    }
};

class IntelMemory : public Memory {
public:
    virtual void storage() {
        cout << "Intel的内存条开始存储了！" << endl;
    }
};

//Lenovo厂商
class LenovoCPU : public CPU {
public:
    virtual void calculate() {
        cout << "Lenovo的CPU开始计算了！" << endl;
    }
};

class LenovoVideoCard : public VideoCard {
public:
    virtual void display() {
        cout << "Lenovo的显卡开始显示了！" << endl;
    }
};

class LenovoMemory : public Memory {
public:
    virtual void storage() {
        cout << "Lenovo的内存条开始存储了！" << endl;
    }
};


void test02() {
    //第一台电脑零件
    CPU *intelCpu = new IntelCPU;
    VideoCard *intelCard = new IntelVideoCard;
    Memory *intelMem = new IntelMemory;

    cout << "第一台电脑开始工作：" << endl;
    //创建第一台电脑
    Computer *computer1 = new Computer(intelCpu, intelCard, intelMem);
    computer1->work();
    delete computer1;

    cout << "-----------------------" << endl;
    cout << "第二台电脑开始工作：" << endl;
    //第二台电脑组装
    Computer *computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);;
    computer2->work();
    delete computer2;

    cout << "-----------------------" << endl;
    cout << "第三台电脑开始工作：" << endl;
    //第三台电脑组装
    Computer *computer3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);;
    computer3->work();
    delete computer3;

}


int main() {
    test01();
    test02();
    return 0;
}