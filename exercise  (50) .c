// 题目：求两个数的最大公约数,欧几里得算法
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(void)
{
    int x, y;
    int min, max = 1;
    int flag = 0;
    printf("请输入两个正整数：\n");
    scanf("%d %d", &x, &y);
    // xy的值大小不需要比较出来
    while (y)
    {
        int temp = y;
        y = x % y;  //
        x = temp;
    }

    printf("max is %d", x);
    return 0;
}
