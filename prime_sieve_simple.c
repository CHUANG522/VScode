#include <stdio.h>
#include <stdlib.h>

// 题目：编写函数int fun(it lim, int a[MAX)，
// 其功能是求出小于或等于lmn的所有素数并放在aa数组中，并返回所求出的素数的个数。
int fun(int lim, int a[]);
// 函数的参数定义时只要类型即可；但二维数组必须要说明列数
int main(void)
{
    int lim = 500;

    int a[200] = {0};
    fun(lim, a);
    return 0;
}
int fun(int lim, int a[])
{
    int k = 2;
    int counter = 1;  // 计数同时赋数组值
    a[0] = 1;
    a[1] = 2;

    for (int i = 3; i <= lim; i++)
    {
        for (k = 2; k < i; k++)
        {
            if (i % k == 0)
            {
                break;  // 素数只要能被取余一次直接break，减少循环次数
            }
        }
        if (k == i)
        {  // 判定条件：如果前面没有break那么k最后自增到与i相等，即为素数
            counter++;
            a[counter] = i;
        }
    }
    for (int x = 0; x < (counter); x++)
    {
        printf("%d \t", a[x]);
    }
    printf("Prime number has %d", counter);
    return counter;
}