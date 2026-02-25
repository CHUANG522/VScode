#include <stdio.h>
#include <stdlib.h>
// 题目：规定输入的字符串中只包含字母和*号。请编写函数fun,其功能是。使字符串中尾部的*号不多于n个若多于n个则珊除多余的*号
//  ﹔若少于或等于你个则不做任何操作

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void fun(char string[], int n);

int main(void)
{
    char string[] = "ABC*******";
    int n = 289;
    fun(string, n);
    return 0;
}
void fun(char string[], int n)
{  // 在函数中利用指针来操作减少因为形参传递的错误
    if (string == NULL && n <= 0)
    {
        return;
    }
    char *p, *t;
    int counter;
    t = p = string;
    while (*p)
    {
        p++;
    }
    t = p;  // 将p的位置赋值给t，不让t也参与++了
    p = p - 1;
    while (*p == '*')
    {
        p--;
    }
    counter = (int) (t - 1 - p);           // 利用指针差来计算*数量，注意++之后指针的位置
    if (counter > n) *(p + n + 1) = '\0';  // 删除*直接给指定位置加个\0截断即可
    printf("%s", string);
}