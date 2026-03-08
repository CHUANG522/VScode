#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// 题目：编写函数fun，其功能是:将所有大于1小于整数m的非素数存入xx所指数组中，非素数的个数通过k返回。
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fun(int m, int arr[]);
int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int* p = arr;
    int n = 4;
    int temp = 0;
    temp = arr[n];
    arr[n] = *p;
    *p = temp;
    return 0;
}
