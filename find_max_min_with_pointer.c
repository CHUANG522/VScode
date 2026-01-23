#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void min_max(int* a, int length, int* min, int* max);

int main(int argc, char* argv[])
{
    int a[] = {
        7, -2, 3, 4, 5, 8, 999, 368, 564, 654, 56, 654, 654, 64, 56, 46, 46, 54, 89, 74, 175356, 7,
    };
    int min = 0;
    int max = 0;
    int length = sizeof(a) / sizeof(a[0]);
    printf("����ĳ�����%d\n", length);
    min_max(a, length, &min, &max);
    printf("min is %d\n", min);
    printf("max is %d\n", max);

    return 0;
}
void min_max(int* a, int length, int* min, int* max)
{
    *min = a[0];
    *max = a[0];

    int i = 0;
    for (i = 0; i < length; i++)
    {
        if (a[i] < *min)
        {
            *min = a[i];
        }
        if (a[i] > *max)
        {
            *max = a[i];
        }
    }
}
