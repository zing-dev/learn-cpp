//
// Created by zing on 7/1/2020.
//
#include <tuple>
#include <iostream>

using namespace std;

tuple<int, string, bool> GetData(int DataId) {
    if (DataId == 1)
        return make_tuple(0, "Chloe", false);
    else if (DataId == 2)
        return make_tuple(1, "Bryan", true);
    else
        return make_tuple(2, "Zoey", false);
}

void SetData(const tuple<int, string, bool> &data) {
    cout << get<0>(data) << endl;
    cout << get<1>(data) << endl;
    cout << get<2>(data) << endl;
}

auto main() -> int {
    auto name = GetData(1);
    cout << "Details of Id 1" << endl;
    cout << "ID = " << get<0>(name) << endl;
    cout << "Name = " << get<1>(name) << endl;
    cout << "Gender = " << boolalpha << (get<2>(name) ? "Male" : "Female");
    cout << endl << endl;

    int i;
    string s;
    bool b;
    tie(i, s, b) = GetData(2);
    cout << "Details of Id 2" << endl;
    cout << "ID = " << i << endl;
    cout << "Name = " << s << endl;
    cout << "Gender = " << (b ? "Male" : "Female");
    cout << endl;

    SetData(GetData(1));
    SetData(GetData(2));
    SetData(GetData(3));
    return 0;
}
