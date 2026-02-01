#include <math.h>
#include <stdio.h>
#include <stdlib.h>
// 题目：编写函数fun，它的功能是:求小于形参n同时能被3与7整除的所有自然数之和的平方根，并作为函数值返回。

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
    int n = 103454;
    double sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (i % 3 == 0 && i % 7 == 0)
        {
            sum += i;
        }
    }
    printf("%f", sqrt(sum));
    return 0;
}
