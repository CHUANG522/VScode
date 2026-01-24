#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
    int a = 0;

    int i = 1;
    int x = 4;
    scanf("%d", &x);
    for (a = 3; a <= x; a++)
    {
        int K = 1;
        for (i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                K = 0;
                break;
            }
        }
        if (K == 1)
        {
            printf("%d\n", a);
        }
    }

    // �ж��Ƿ�������ʱ,���������������ȽϺ��ж�,�����������������ж�,��ô��������01��,ʹ�ò���������������0,���
    // ��if�ж�K�Ƿ�Ϊ1,���ж���������.
    return 0;
}
