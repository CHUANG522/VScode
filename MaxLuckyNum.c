#include <stdio.h>
#include <stdlib.h>
// 题目：给定一个整数数组，定义幸运数为：
// 数组中的最大值，且该最大值在数组中出现的次数恰好等于其数值本身
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
    int arr[] = {1, 2, 3, 5, 5, 5, 5, 1, 2};
    int max = arr[0];
    int counter = 1;
    int arr_len = sizeof(arr) / sizeof(arr[0]);  // 计算数组长度直接用sizeof函数即可
    // 而且这种计算可以用另一个变量表示，更加直观
    for (int i = 0; i < arr_len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            counter = 1;  // 优化：仅使用一次循环
        }  // 每次找到最大数都将counter置1
        else if (arr[i] == max)  // 再找到最大数后将它与后面出现的最大数相等就将counter++
        {
            counter++;
        }
    }

    if (counter == max)
    {
        printf("The max lucky number is %d", counter);
    }
    else
    {
        printf("-1");
    }

    return 0;
}
