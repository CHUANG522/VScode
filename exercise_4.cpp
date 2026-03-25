#include <stdio.h>

int main(void)
{
    int a[][3] = {
        {
         1, 2,
         3, },
        {
         4, 5,
         6, },
        {7, 8, 9},
    };
    //	printf("%d \n", a[1][1]);
    int k, i;
    int m = 0;
    for (i = 0; i < 3; i++)
    {
        m = i;
        for (k = 0; k < 3 && m < 3; k++, m++)
        {
            a[i][m] *= 2;
            printf("%d \t", a[i][m]);
        }
    }

    return 0;
}
