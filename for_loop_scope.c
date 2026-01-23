#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void abc(char* str)
{
    int a, b, i, j;
    for (i = j = 0; str[i] != '\0'; i++)
        if (str[i] != 'a') str[j++] = str[i];
    str[j] = '\0';
    printf("%c \n", str[j]);
}
int main(void)
{
    char str[] = "abcdef";
    abc(str);
    printf("str[]=%s", str);

    return 0;
}
