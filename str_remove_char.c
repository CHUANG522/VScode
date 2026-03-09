//  题目：编写函数fun，其功能是:从字符串中删除指定的字符。
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

char* fun(char string[], char x);  // 返回值时地址
int main(void)
{
    char string[] = "abcdefgh";

    printf("%s", fun(string, 'b'));
    return 0;
}
char* fun(char string[], char x)
{
    if (string == NULL) return -1;
    char* p = string;
    char* t = string;  // 两个指针获取字符首地址

    while (*p)
    {
        if (x != *p) *t++ = *(p);
        p++;
    }
    *t = '\0';      // 处理完字符串后最后添加一个反义零
    return string;  // 返回数组的首地址
}