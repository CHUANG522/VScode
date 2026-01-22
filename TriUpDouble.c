#include <stdio.h>
// 对上三角元素进行×2的操作
int main(void)
{
    int a[][4] = {
        {1, 2, 3, 4},
        {
         5, 6,
         7, 8,
         },
        {9, 10, 11, 12},
        {
         13, 14,
         15, 16,
         }
    };

    //	printf("%d \n", a[1][1]);
    int i;
    int m = 0;
    for (i = 0; i < 4; i++)  // 行递增
    {
        for (m = i; m < 4; m++)  // 遍历列，且随行递增每次减少遍历一个列元素
        {
            a[i][m] *= 2;
            printf("%d \t", a[i][m]);
        }
    }

    return 0;
}
