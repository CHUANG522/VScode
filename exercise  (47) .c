#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>
#define M 4
int fun(int a[][M])
{
    int *p, *t;
    p = t = &a[0][0];
    int max = a[0][0];

    while (p < t + (2 * M))
    {
        if (*p > max) max = *p;
        p++;
    }
    return max;
}
void main()
{
    int arr[2][M] = {5, 8, 3, 45, 76, -4, 12, 82};
    printf("max =%d\n", fun(arr));
}
