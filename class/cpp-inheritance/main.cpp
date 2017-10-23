//
// Created by zhangrongxiang on 2017/10/22 22:22
// File main
//

#include "main.h"
#include <ctime>
#include <cstdlib>
#include <zconf.h>

using namespace std;

void countdown();

int main() {
    Rectangle Rect;
    Rect.setWidth(5);
    Rect.setHeight(7);
    // 输出对象的面积
    cout << "Total area: " << Rect.getArea() << endl;

    cout << "Hello World!" << endl;
    C c;   //D, B, A ,C
    cout << sizeof(c) << endl;

    cout << "-------------------------------------------------" << endl;
    int i = 39;
    int j = 20;
    cout << "Max(i, j): " << Max(i, j) << endl;
    while (1) {
        countdown();
        usleep(1000000);
    }
    return 0;
}

void countdown() {
    time_t timer;
    struct tm toyear = {0}, *info;
    double seconds;
    time(&timer);
//    info = gmtime(&timer);
    info = localtime(&timer);
    toyear.tm_hour = 0;
    toyear.tm_min = 0;
    toyear.tm_sec = 0;
    toyear.tm_year = info->tm_year + 1;
    toyear.tm_mon = 0;//info->tm_mon;
    toyear.tm_mday = 1;//info->tm_mday;
    seconds = difftime(mktime(&toyear), timer);
    if (seconds < 0)
        seconds += 3600 * 24;
    int d = (int) seconds / 3600 / 24;
    int h = (int) (seconds - d * 24 * 3600) / 3600;
    int m = (int) ((seconds - d * 24 * 3600 - h * 3600) / 60);
    int s = (int) seconds % 60;
    /*
    printf("北京时间：%d年%d月%d日%d时%d分%d秒\n",
           info->tm_year + 1900,
           info->tm_mon + 1,
           info->tm_mday,
           info->tm_hour,
           info->tm_min,
           info->tm_sec
    );
     */
    if ((int) seconds % 3600 == 0) {
//        printf("还剩%d小时下班了!\n", h);
    } else {
//        printf("还剩%d天%d小时%d分钟%d秒下班了!\n",d, h, m, s);
        cout << "还剩" << d << "天" << h << "小时" << m << "分钟" << s << "秒元旦!" << endl;
    }
}