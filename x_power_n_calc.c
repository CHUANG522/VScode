#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
    int x = 3;
    int n = 4;
    int sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum *= x;
    }
    printf("%d", sum);

    return 0;
}
