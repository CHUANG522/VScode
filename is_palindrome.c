#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
            k = 0;
            break;
        }
    }
    printf(k ? "YES!" : "NO!");
    /*
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