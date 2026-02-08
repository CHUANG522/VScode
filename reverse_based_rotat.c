#include <stdio.h>
#include <stdlib.h>
#define ARR_LEN(arr) (sizeof(arr) / sizeof(arr[0]))
// 题目：请编写函数fun,函数的功能是：移动一维数组中的内容，若数组中有n个整数，要求把下标从0-p的数组元素平移到数组的最后。
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void reverse(int arr[], int start, int end);  // 逆序函数:翻转数组中 [start, end] 区间的元素
void fun(int arr[], int start, int end, int arr_len);  // 内置三个逆序函数

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr_start = 0;
    int arr_end = 5;
    int arr_len = ARR_LEN(arr);  // 优化为宏定义
    fun(arr, arr_start, arr_end, arr_len);
    return 0;
}

void reverse(int arr[], int start, int end)
{
    if (start < end)
    {
        //  for (; start < end;),此处条件名确，直接用while循环
        while (start < end)
        {  // 此处参数是数组arr，但是在函数中修改数组值仍可对实参arr起作用，因为形参数组arr自动转为数组首地址，
           // 在函数内部的arr[3]等同于指针的解引用*(arr +3)故可修改实参数组值
            int temp = arr[end];
            arr[end--] = arr[start];
            arr[start++] = temp;
        }
    }
    else
        return;  // 增强鲁棒性
}

void fun(int arr[], int start, int end, int arr_len)
{
    if (arr != NULL && start < end)  // 条件检验
    {
        reverse(arr, start, end);          // 前段反转
        reverse(arr, ++end, arr_len - 1);  // 后段反转
        reverse(arr, start, arr_len - 1);  // 全反转
    }
    else
        return;
}