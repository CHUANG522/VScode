#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 请编写函数fmn，该函数的功能是:判断字符串是否为回文
// 若是，则函数返回1，主函数中输出"YES"，否则返回0，主函数中输出No
void fun(char a[]);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
    char string[] = "12346321";
    char string_2[] = "love";
    fun(string);
    return 0;
}

void fun(char a[])
{
    int i = 0;
    int k = 1;
    for (i = 0; i < strlen(a); i++)
    {
        if (a[i] != a[strlen(a) - i - 1])
        {
            k = 0;  // 1，0 判断值
            break;  // 减少循环次数
        }
    }  // 除用函数计算字符长度外，while指针计算
    // while(*string){
    //   N++  ;  string ++  ;
    //  }
    //   字符串的最后一个\0 的ASCII为0，while的条件只要不是0就执行
    printf(k ? "YES!" : "NO!");
    /*重点：三目printf写法
        if (k == 1)
        {
            printf("YES!");
        }
        else
        {
            printf("NO!");
        }*/
    // 三目运算printf(k?"YES!":"NO!")    作用与if else相同
}