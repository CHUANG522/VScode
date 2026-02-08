#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
    double sum = 0;
    int temp = 0;
    int N = 11;
    for (int i = 1; i <= N; i++)
    {
        temp += i;
        sum += 1.0 / temp;
    }

    return 0;
}
