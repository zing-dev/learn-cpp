//
// Created by zing on 2017/9/11.
//

#include <thread>
#include <iostream>

using namespace std;

void threadProc() {
    cout << "Thread ID: ";
    cout << this_thread::get_id() << endl;
}

auto main() -> int {
    cout << "hello world" << endl;
    thread thread1(threadProc);
    thread1.join();
    return 0;
}