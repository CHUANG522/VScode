#include <math.h>
#include <stdio.h>
#include <stdlib.h>
// n的因子之和,1和自身不算入
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fun(long long n)
{
    int sum = 0;
    int sqrt_n = sqrt(n);  // 平方计算让循环条件到平方根即可
    int j = 0;
    for (int i = 2; i <= sqrt_n; i++)
    {
        if (n % i == 0)
        {
            j = n / i;       // 其对应的另一个因子就等于n/i
            sum += (i + j);  // 双因子之和
        }
    }
    return sum;
}
int main(void)
{
    printf("%d", fun(1000000000));
    printf("\n");
    printf("%d", sizeof(long long));
    return 0;
}
