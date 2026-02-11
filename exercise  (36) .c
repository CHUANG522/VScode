#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 2, 4, 5, 4, 5};
    int arr_len = sizeof(arr) / sizeof(arr[0]);
    int temp = 0;
    for (int i = 0; i < arr_len; i++)
    {
        for (int j = 0; j < arr_len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    return 0;
}
