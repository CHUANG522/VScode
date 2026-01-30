#include <stdio.h>
#include <stdlib.h>
// 请编写一个函数fmn，它的功能是:
// 将ss所指字符串中所有下标为奇数位置的字母转换为大写(若该位置上不是字母，则不转换)。
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
    char string[] = "abc3 4sfad";
    int i = 0;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] < 'z' && string[i] > 'a' && i % 2 != 0)
        {                                // 大小写的范围直接用‘’表示即可
            string[i] = string[i] - 32;  // 大小的转化32值，因为大小写只有在第六位不同
        }  // 大写000000
    }  // 小写100000
    printf("%s", string);
    return 0;
}
