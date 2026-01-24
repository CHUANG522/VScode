#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char* argv[])
{
    srand(time(0));
    int a = rand();
    int x = a % 100;
    int P = 0;
    int count = 0;

    do
    {
        count++;
        printf("��������Ĳ��룺");
        scanf("%d", &P);
        if (P > x)
        {
            printf("��´���\n");
        }
        else if (P < x)
        {
            printf("���С��\n");
        }
    } while (P != x);
    printf("��ϲ��¶��ˣ������%d��", count);

    return 0;
}
