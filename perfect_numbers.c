// 题目：完数是指一个数的因子之和等于它本身。例如，6的因子有1、2、3，且1+2+3=6，所以6是一个完数。同样地，28的因子有1、2、4、7、14，且1+2+4+7+14=28，所以28也是一个完数

#include <math.h>
#include <stdio.h>
#include <windows.h>  // 必须包含这个头文件

int main()
{
    SetConsoleOutputCP(65001);  // 输出编码：UTF-8
    SetConsoleCP(65001);        // 输入编码：UTF-8
    int counter = 1;
    for (int i = 2; i <= 1000; i++)
    {
        int sum = 0;
        // 这种找因数的遍历到sqrt(i)即可
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                if (i == j / i)
                    sum += j;
                else
                    sum += j + i / j;
            }
        }
        if (sum + 1 == i)
        {
            printf("完数%d is %d \n", counter++, i);
        }
    }

    return 0;
}
