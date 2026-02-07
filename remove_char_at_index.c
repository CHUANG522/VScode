#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 题目： 删除字符串中指定下标的字符
// 编写函数fun其功能是:删除一个字符串中指定下标的字符。其中，a指向原字符串，删除指定字符后的宇符串存放在b所指的数组中，n中存指定的下标
//  例如，输入一个字符串world，然后输入3，则调用该函数后的结果为word。
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void fun(char string[], int m);
int main(void)
{
    char string[] = "world";
    fun(string, 4);
    return 0;
}

void fun(char string[], int member)
{
    char* a = string;
    int string_len = 0;
    while (*a)
    {
        a++;
        string_len++;
    }  // 指针遍历求数组大小
    if (member < 0 && member > string_len && string == NULL)
    {  // 判断一步member值增强鲁棒性，注意：在已得出的stringlen后判断，条件更准确
        return -1;
    }
    a = string;

    char b[string_len];
    memset(b, 0, string_len);
    int j = 0;
    for (int i = 0; string[i] != '\0'; i++, a++)
    {  // 删除指定字符需要另一自增变量j
        if (i != member)
        {
            b[j++] = *a;
        }
        else
        {
            b[j++] = *(++a);
        }  // 此处++a取a的下一个字符
    }
    b[j] = '\0';  // 勿忘最后的反义零，截断字符串
    printf("%s", b);
}