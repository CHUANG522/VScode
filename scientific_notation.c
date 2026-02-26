#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
    int w = 1;
    int n = 2;
    w = w * 1e2;    // 正确
    w = w * (1en);  // 错误e后必须是一个确定的显式整数1，2，3，-1，-2等
    return 0;
}
