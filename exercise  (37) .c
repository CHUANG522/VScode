#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
    char string[] = "****A*BC*DeF*G*****";
    int arr_len = sizeof(string) / sizeof(string[0]);
    int j = 0;
    // int i=0;
    char* p = string;
    while (*p == '*')
    {
        p++;
        i++;
    }
    while (*p != '*' && *p != '\0')
    {
        string[i] = *p;
    }
    return 0;
}
