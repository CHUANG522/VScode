#include <stdio.h>
#include <stdlib.h>
// 题目：请编写函数fun，该函数的功能是:将M行N列的二维数组中的字符数据，按列的顺序依次放到一个字符串中。
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void fun(int arr_row, int arr_column, char string[][arr_column]);
int main(void)
{
    char arr[][5] = {"WWWW", "SSSS", "HHHH"};
    // 优化：sizeof求二维数组的行列数
    int arr_row =
        sizeof(arr) / sizeof(arr[0]);  // 用sizeof求行，总大小除行大小=行数，如果自己算的话勿忘\0
    int arr_coulmn = sizeof(arr[0]) / sizeof(arr[0][0]);  // 用sizeof求列，行大小除单个大小=列数
    fun(arr_row, arr_coulmn, arr);

    return 0;
}
void fun(int arr_row, int arr_column, char string[][arr_column])
{                                          // 二维数组做参数时，列数是确定的
    int arr_len = arr_row * (arr_column);  // 数组大小
    char str[arr_len];
    int k = 0;
    for (int i = 0; i < arr_column; i++)
    {
        for (int j = 0; j < arr_row; j++)
        {
            if (string[j][i] != '\0')
            {
                str[k++] = string[j][i];
            }
        }
    }
    str[k] = '\0';  // 这一步是防止str没有被完全赋值而导致后面垃圾值的出现，也是对str字符串收尾
    printf("%s", str);
}