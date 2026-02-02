#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
    char string[] = "ABCDEFGHIJK";
    char* p = string;
    int N = 0;
    int m = 3;
    while (*p)
    {
        p++;
        N++;
    }
    char string_head[N];
    char string_finish[N];
    for (int i = 0; i < m; i++)
    {
        string_head[i] = string[i];
    }
    for (int i = m + 1; i > m && i < N; i++)
    {
        string_finish[i] = string[i];
    }
    for (int i = 0; i < N; i++)
    {
        if (i < m)
        {
            string[i] = string_head[i];
        }
        else if (i > m && i < N)
        {
            string[i] = string_finish[i];
        }
        printf("%c", string[i]);
    }
    return 0;
}
