#include <stdio.h>
#include <stdlib.h>
// 数组排列大小:冒泡排序法
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 2, 4, 5, 4, 5};
    int arr_len = sizeof(arr) / sizeof(arr[0]);
    int temp = 0;
    for (int i = 0; i < arr_len; i++)
    {
        int swar = 1;
        for (int j = 0; j < arr_len - 1 - i; j++)  // 每次都少循环一个数
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];    // 交换的步骤，先将A的值存到temp中
                arr[j + 1] = arr[j];  // 再将B的值赋给A
                arr[j] = temp;        // 最后将temp赋给B
                swar = 0;
            }
        }
        if (swar) break;  // 如果swar的值为1则说明没有进行交换，即数组已经排完序了，break
    }

    return 0;
}
