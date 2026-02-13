#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
    char string[] = "****A*BC*DeF*G*****";
    int arr_len = sizeof(string) / sizeof(string[0]);
    int j = 0;
    for (int i = 0; i < arr_len; i++)
    {
        if (string[i] <= 'z' && string[i] >= 'a' && string[i] <= 'Z' && string[i] >= 'A' &&
            string[i - 1] == '*' && string[i + 1] == '*')
        {
        }
    }
    return 0;
}
