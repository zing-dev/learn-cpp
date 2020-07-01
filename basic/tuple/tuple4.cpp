//
// Created by zing on 7/1/2020.
//

#include <tuple>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    tuple<int, float, string> t(1, 2, "");
    tuple<int, float, string> t2 = make_tuple(1, 2, "");
    const tuple<int, float, string> &t3(t2);
    cout << get<1>(t) << endl;

    tuple<int, int, int, int> a(2, 3, 1, 4);
    size_t Num = tuple_size<tuple<int, int, int, int>>::value;
    cout << "Num = " << Num << endl;
    cout << "Num = " << tuple_size<decltype(a)>::value << endl;

    tuple<int, int, int, int> a2(2, 3, 1, 4);
    tuple_element<1, decltype(a2)>::type tt = get<0>(a2);
    cout << "t = " << tt << endl;

    tuple<int, int, int, int> aa(2, 3, 1, 4);
    tuple<int, int, int, int> bb(2, 3, 1, 4);
    tuple<int, int, int, int> cc(2, 3, 1, 4);

    auto TT = tuple_cat(aa, bb, cc);
    return 0;
}
