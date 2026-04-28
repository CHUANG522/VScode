// 题目：将整数转换为任意进制
#include <stdio.h>
#include <windows.h>  // 必须包含这个头文件
int main()
{
    SetConsoleOutputCP(65001);  // 输出编码：UTF-8
    SetConsoleCP(65001);        // 输入编码：UTF-8
    int N, R;
    int counter[200] = {0}, i = 0;
    if (scanf("%d %d", &N, &R) != 2) printf("输入错误");

    while (N != 0)
    {
        counter[i] = N % R;
        N /= R;
        i++;
    }
    while (i >= 0)
    {
        printf("%d", counter[i--]);
    }
    printf("\n");
    return 0;
}
