#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
    double sum = 0;
    for (double i = 1, n = 100000; i <= n; i++)
    {
        sum += 1.0 / (i * i);
    }
    return 0;
}
