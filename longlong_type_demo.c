#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
    long long x = 1LL;
    int flog = 1;
    printf("%I64d \n", x);

    while (x > 0)
    {
        x++;

        if (x > 2147483647 && flog == 1)
        {
            printf("%I64d \n", x);
            flog = 0;
        }
    }
    x--;
    printf("%I64d", x);

    return 0;
}
