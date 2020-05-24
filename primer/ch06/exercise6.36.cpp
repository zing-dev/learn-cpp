//
// Created by zing on 5/24/2020.
//

#include <iostream>

using namespace std;

string print();


//todo
string (&function())[10] {
    string arr[10] = {"A", "B", "B", "B", "B", "B", "B"};
    auto &a = arr;
    return a;
}

//返回数组的引用并且该数组包含10个string对象
int main(int argc, char *argv[]) {
    auto arr = function();
    cout << arr->size() << endl;
    for (auto s : *arr) {
        cout << s << "\t";
    }
    return 0;
}
