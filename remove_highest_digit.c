#include <stdio.h>
#include <stdlib.h>
// 题目：编写函数fun，w是一个大于10的无符号整数，若w是n(>=2)位的整数，则函数求出w的后n-1位的数作为函数值返回。例如，w值为5923，则函数返回923;若w值为923，则函数返回23。
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fun(int w);
int main(void)
{
    int w = 12345;
    fun(w);
    return 0;
}
int fun(int w)
{
    if (w < 10) return -1;  // 输入检验
    int n = 0;
    int temp = w;
    int power = 1;
    while (temp != 0)
    {  // 优化在一个循环中完成求n和power*10操作
        temp /= 10;
        n++;
        power *= 10;
    }
    if (n > 1)
        w %= power / 10;  // 去位操作：%是去从左开始去，/是从右开始去
    else
        return -1;
    printf("%d", w);
    return w;
}