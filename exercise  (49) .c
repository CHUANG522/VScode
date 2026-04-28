#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
    int n, a;
    long long sum = 0;
    int temp = 0;
    if (scanf("%d %d", &n, &a) != 2) printf("输入错误！");
    for (int i = 1; i <= n; i++)
    {
        temp = (long long) temp * 10 + a;
        sum += temp;
    }
    printf("%lld\n", sum);
    return 0;
}
