// 题目：输入一个整数判断并输出该整数用到了哪些数字、各个数字出现的次数。 例如:输入 12234 输出 1:1次
// 2:2次 3:1次 4:1次

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>  // 必须包含这个头文件

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(void)
{
    SetConsoleOutputCP(65001);  // 输出编码：UTF-8
    SetConsoleCP(65001);        // 输入编码：UTF-8
    long long x = 0;
    if (scanf("%lld", &x) != 1) printf("输入错误");
    int counter[10] = {0};
    while (x != 0)
    {  // 优化：利用取余来确定个位数，从而使对应的counter值加加，避免使用switch和if else 级联

        if (x < 0) x = -x;
        counter[x % 10]++;
        x /= 10;
    }

    for (int i = 0; i <= 9; i++) printf("%d:%d次 \n", i, counter[i]);
    return 0;
}
