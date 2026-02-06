#include <stdio.h>
#include <stdlib.h>
// 题目：请编函数fim。，其功能是将一个数宇字符串转换成与其面值相同的长整型整数。
// 例如。在键盘输入字符串2345210，函数返回长整型数
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fun(char str[]);

int main(void)
{
    char string[] = "25456";
    printf("%d", fun(string));
    return 0;
}
int fun(char str[])
{
    int k = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        k = k * 10 + (str[i] - 48);  // 核心
    }  // 将独立字符1，2，3，4，合成1234，表达式： 上一个数*10 加下一个数（循环）
    return k;
}