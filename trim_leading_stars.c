#include <stdio.h>
#include <stdlib.h>
// 题目：规定输入的字符串中只包含字母和*号。请编写函数fun。其功能是:使字符串的前导*号不得多于n个，若多于n个，则删除多余的*号﹔若少于或等n个，则不做处理，字符串中间和尾部的*号不删除。
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void fun(int n, char string[]);

int main(void)
{
    char string[] = "*******A*BC*DEF*G****";
    int n = 3;
    fun(n, string);
    return 0;
}
void fun(int n, char string[])
{
    if (n <= 0 || string == NULL)
    {
        return string;  // 此处返回string数组，若参数不合理主函数后面使用string也不会出错
    }
    char *p, *t;  // 核心双指针移动，利用指针可以直接赋值指向对象
    int star_num = 0;

    p = t = string;
    while (*p == '*')
    {
        p++;
    }  // 优化：star_num的值用指针加减法的强制转换
    star_num = (int) (p - string);
    t = string + star_num;  // 将指针t指向A
    if (star_num >= n)
    {
        p = string + n;  // 将指针p指向前导的最后一个*处
        while (*t)
        {
            *p++ = *t++;
        }
        *p = '\0';  // 最后加个字符串结束符
    }
}