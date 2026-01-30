#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
    char string[] = "abc";
    int arr_len = sizeof(string);
    printf("%c \n", string + 1);
    printf("%c \n", &string + 1);
    return 0;
}
