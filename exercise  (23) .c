#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void fun(char string[], int m);

int main(void)
{
    char string[] = "ABCDEFGHIJK";
    fun(string, 4);
    return 0;
}
void fun(char string[], int m)
{
    char* p = string;
    int N = 0;
    int j = 0;

    while (*p)
    {
        p++;
        N++;
    }
    char string_new[N];
    for (int i = 0; i < N; i++)
    {
        if (i >= m && i < N)
        {
            // printf("%c", string[i]);
            string_new[j++] = string[i];
        }
    }
    for (int i = 0; i < m; i++)
    {
        //  printf("%c", string[i]);
        string_new[j++] = string[i];
    }
    string_new[j] = 0;
    printf("\n");
    printf("%s", string_new);
}