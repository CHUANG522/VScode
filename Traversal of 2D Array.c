#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 字符串数组陷阱：字符个数一定是下标减一，否则编译器截断字符，导致反义0消失
// 二维数组的遍历
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
    char string[][4] = {"AAA", "BB", "CCC"};
    int m = 3;  // 二维数组行数
                // int string[m][4];
                //  memset(string, 0, sizeof(string));
                // 变长数组初始化：先定义不赋值，利用memset函数赋值
    char* p = string[0];

    for (int i = 0; i < m; i++)
    {
        for (int k = 0; string[i][k] != '\0'; k++, p++)
        {
            *(p) = string[i][k];
            printf("%c\t%c\n", *p, string[i][k]);
        }
    }

    return 0;
}
