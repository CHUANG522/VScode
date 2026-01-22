#include <stdio.h>
#include <stdlib.h>
// 题目： N×N 的二维数组
//  求出数组周边元素的平均值并作为函数值返回给主函数中的 s

// 方法：二维数组的扁平化处理（强制转换）
// 本质是数组元素地址的连续排列
double fun(int* flat_arr, int N);  // 定义接受一维数组，以及边界N
int main(void)
{
    int counter = 0;
    int a[][4] = {
        {
         1, 2,
         3, 4,
         },
        {
         5, 6,
         7, 8,
         },
        {
         9, 10,
         11, 12,
         },
        {13, 14, 15, 16}
    };

    printf("Average is %f", fun((int*) a, 4));  // 强制转换为一维数组，扁平化
    return 0;
}
double fun(int* flat_arr, int N)
{
    int i, k;

    double sum = 0;
    int counter = 0;
    for (i = 0; i < N; i++)
    {
        for (int k = 0; k < N; k++)
        {
            if (i == 0 || i == N - 1 || k == 0 || k == N - 1)
            {  // 条件由来：边界元素，只要符合首行，首列，尾行，尾列即可
                sum += flat_arr[i * N + k];  // 访问方式：按照一维数组形式访问
                counter++;                   // i*N 表示行数
            }
        }
    }
    return sum / counter;
}