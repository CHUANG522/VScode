#include <stdio.h>
#include <stdlib.h>
// 字符串逆序
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
    char string[] = "ABCDEFG";
    char* p = string;
    char* t = string;  // 首指针

    char temp;
    while (*p) p++;
    p = p - 1;
    while (p != t)
    {
        temp = *t;
        *t++ = *p;
        *p-- = temp;
        if (p == t && p == (t + 1)) break;
    }

    return 0;
}
