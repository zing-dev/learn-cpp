//
// Created by zing on 5/20/2020.
//
#include <iostream>

using namespace std;

void reset(int &a){
    a = 0;
}
void swap(int *&lft, int *&rht) {
    auto tmp = lft;
    lft = rht;
    rht = tmp;
}

int main() {
    int i = 42, j = 99,k = 200;
    auto lft = &i;
    auto rht = &j;
    int *kk = &k;
    swap(lft, rht);
    cout << *lft << " " << *rht << endl;
    swap(lft, kk);
    cout << *lft << " " << *kk << endl;
    reset(k);
    cout << *lft << " " << *kk << endl;
    return 0;
}