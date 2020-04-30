//
// Created by zing on 4/30/2020.
//

#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    vector<int> vec1;
    vector<int> vec2(vec1);
    vector<int> vec3 = vec2;
    vector<int> vec4(10, -1);
    vector<string> language = {"cpp", "rust", "java"};
    cout << language.size() << endl;
    vector<string> language2{"cpp", "rust", "java"};
    vector<string> str(10, "hi");

    vector<string> l;
    l.push_back("cpp");
    l.push_back("rust");
    cout << l.size() << endl;
    cout << l.empty() << endl;
    cout << l[0] << endl;
    cout << l[1] << endl;

    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8};
    for (auto &i:v) {
        i *= i;
    }
    for (auto i:v) {
        cout << i << endl;
    }
    return 0;
}
