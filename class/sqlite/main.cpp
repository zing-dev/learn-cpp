//
// Created by zhangrongxiang on 2017/10/23 13:28
// File main
//

#include <iostream>
#include <cstdlib>
#include <sqlite3.h>
using namespace std;
int main(int argc, char* argv[])
{
    sqlite3 *db;
    char *zErrMsg = 0;
    int rc;

    rc = sqlite3_open("test.db", &db);

    if( rc ){
        cerr << "Can't open database: " << sqlite3_errmsg(db) << endl;
        exit(-1);
    }else{
        cout << "Opened database successfully" << endl;
    }
    sqlite3_close(db);
}