//
// Created by zing on 5/7/2020.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {

    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(auto i = vec.begin();i != vec.end();i++){
        *i *=2;
    }
    for(auto i = vec.begin();i != vec.end();i++){
        cout << *i << " ";
    }

    for(auto &i : vec){
        i *=3;
    }
    cout << endl;
    for(auto &i : vec){
        cout << i << " ";
    }
    return 0;
}
