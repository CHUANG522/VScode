#include <stdio.h>
#include <stdlib.h>
// 题目：请编写函数fun，其功能是:将一个数字字符串转换为一个整数
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
    char string[] = "-41234";
    int sum = 0;
    if (string[0] == '-')
    {
        for (int i = 1; string[i] != '\0' || (string[i] <= '9' && string[i] >= '0'); i++)
        {
            sum = sum * 10 + string[i] - 48;
        }  // 字符数字转为数字减48
        sum = -sum;
    }
    else
    {
        for (int i = 0; string[i] != '\0' || (string[i] <= '9' && string[i] >= '0'); i++)
        {
            sum = sum * 10 + string[i] - 48;
        }  // 字符数字转为数字减48
    }
    printf("sum is %d", sum);
    return 0;
}
