#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// 用指针统计字符串长度
int main(void)
{
    int N = 0;
    char string[] = "adf";
    char* p = string;
    while (*p)
    {
        N++;
        p++;
    }

    printf("%d", N);

    return 0;
}
