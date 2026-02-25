#include <stdio.h>
#include <stdlib.h>
// 斐波那契数列
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
    int f = 0, f1 = 1, f0 = 0;
    int t = 1000;
    do  // do  while结构
    {
        f = f0 + f1;  // 先求出前两项的和
        f0 = f1;      // 将后者值赋给前者
        f1 = f;       // 将和值赋给后者完成递推求和
    } while (f < t);
    printf("%d", f);
    return 0;
}
