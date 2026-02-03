#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char* argv[])
{
    int x = 0;

    printf("����һ����λ��: \n");
    //	scanf("%d", &x);
    for (x = 1; x < 1000; x++)
    {
        a = x % 10;
        b = x / 10 % 10;
        c = x / 100;
        //	printf("%d  ,%d,  %d \n", a, b, c);

        if (a * a * a + b * b * b + c * c * c == x)
        {
            printf("Yes!  %d\n", x);
        }
    }
    return 0;
}
