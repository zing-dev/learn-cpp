//
// Created by zing on 6/11/2020.
//
#include <iostream>
#include <string>

using namespace std;

//赋值
void test01() {
    string str1;
    str1 = "hello world";
    cout << "str1 = " << str1 << endl;

    string str2;
    str2 = str1;
    cout << "str2 = " << str2 << endl;

    string str3;
    str3 = 'a';
    cout << "str3 = " << str3 << endl;

    string str4;
    str4.assign("hello c++");
    cout << "str4 = " << str4 << endl;

    string str5;
    str5.assign("hello c++", 5);
    cout << "str5 = " << str5 << endl;


    string str6;
    str6.assign(str5);
    cout << "str6 = " << str6 << endl;

    string str7;
    str7.assign(5, 'x');
    cout << "str7 = " << str7 << endl;
}

//字符串拼接
void test02() {
    string str1 = "我";
    str1 += "爱玩游戏";
    cout << "str1 = " << str1 << endl;

    cout << "str1 = " << str1 << endl;
    string str2 = "LOL DNF";
    str1 += str2;
    cout << "str1 = " << str1 << endl;
    string str3 = "I";
    str3.append(" love ");
    str3.append("game abcde", 4);
    //str3.append(str2);
    str3.append(str2, 4, 3); // 从下标4位置开始 ，截取3个字符，拼接到字符串末尾
    cout << "str3 = " << str3 << endl;
}

//查找和替换
void find() {
    //查找
    string str1 = "abcdefgde";
    int pos = str1.find("de");
    if (pos == -1) {
        cout << "未找到" << endl;
    } else {
        cout << "pos = " << pos << endl;
    }
    pos = str1.rfind("de");
    cout << "pos = " << pos << endl;

}

void replace() {
    //替换
    string str1 = "abcdefgde";
    str1.replace(1, 3, "1111");
    cout << "str1 = " << str1 << endl;
}

//字符串比较
void compare() {
    string s1 = "hello";
    string s2 = "aello";
    int ret = s1.compare(s2);
    if (ret == 0) {
        cout << "s1 等于 s2" << endl;
    } else if (ret > 0) {
        cout << "s1 大于 s2" << endl;
    } else {
        cout << "s1 小于 s2" << endl;
    }
}

void at() {
    string str = "hello world";
    for (int i = 0; i < str.size(); i++) {
        cout << str[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < str.size(); i++) {
        cout << str.at(i) << " ";
    }
    cout << endl;

    //字符修改
    str[0] = 'x';
    str.at(1) = 'x';
    cout << str << endl;
}

//字符串插入和删除
void insert() {
    string str = "hello";
    str.insert(1, "111");
    cout << str << endl;

    str.erase(1, 3);  //从1号位置开始3个字符
    cout << str << endl;
}

//子串
void substr() {
    string str = "abcdefg";
    string subStr = str.substr(1, 3);
    cout << "subStr = " << subStr << endl;

    string email = "hello@sina.com";
    int pos = email.find("@");
    string username = email.substr(0, pos);
    cout << "username: " << username << endl;
}


int main() {
    test01();
    test02();
    find();
    replace();
    compare();
    at();
    insert();
    substr();
    return 0;
}