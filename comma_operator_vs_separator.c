#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// 逗号运算符与参数分隔符
int main(void)
{
    int a = 1;
    int b = 2;
    printf("%d", a, b);
    printf("%d", (a, b));
    return 0;
}
