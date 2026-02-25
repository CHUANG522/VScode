#include <stdio.h>
#include <stdlib.h>
// 题目:定义了NxN的二维数组，并在主函数中自动赋值。请编写函数fun(int a[][N],int n)，
// 该函数的功能是:使数组左下半三角元素中的值乘以n。

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void fun(int k, int* num, int len);
int main(void)
{
    int num[3][3] = {
        {1, 9, 7},
        {2, 3, 8},
        {4, 5, 6}
    };
    int n = 3;
    int len = sizeof(num) / sizeof(num[0][0]);
    fun(3, &num[0][0], len);
    return 0;
}
void fun(int k, int* num, int len)
{
    if (num == NULL && len <= 0) return;
    for (int i = 2; i >= 0; i--)
    {
        for (int j = i; j >= 0; j--)
        {                             // j随着i变化
            *(num + i * 3 + j) *= k;  // 二维数组扁平化处理
        }
    }
    // num是传过来的首地址,在上面num的值没有被改变，仍为首地址
    // 故下面直接用num即可
    for (int i = 0; i < len; num++, i++)
    {
        printf("%3d", *num);  // 格式化输出
    }
}