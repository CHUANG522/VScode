#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void fun(int arr[3][3]);
int main(void)
{
    int a[3][3] = {
        {1, 2, 3},
        {
         4, 5,
         6, },
        {
         7, 8,
         9, }
    };

    fun(a);

    return 0;
}
void fun(int arr[3][3])
{
    int i, k;
    int empty[3][3] = {
        {0, 0}
    };

    for (i = 0; i < 3; i++)
    {
        for (k = 0; k < 3; k++)
        {
            empty[k][i] = arr[i][k];
            //  printf("arr[%d][%d] is %d \t", i, k, arr[i][k]);
            //    printf("empty[%d][%d] is %d \t", k, i, empty[k][i]);
            //  printf("empty[%d][%d] is %d \n", i, k, empty[i][k]);
        }
    }
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            printf("%d \t", empty[x][y]);
        }
    }
}
