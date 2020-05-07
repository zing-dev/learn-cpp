//
// Created by zing on 5/7/2020.
//

#include <string>
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {

    string str("hello world");
    if(str.begin() != str.end()){
        auto s = str.begin();
        *s = toupper(*s);
    }
    cout << str << endl;

    string str2(str);
    for(auto it = str2.begin();it != str2.end() && !isspace(*it); ++it){
        *it = toupper(*it);
    }
    cout << str2 << endl;
    return 0;
}
