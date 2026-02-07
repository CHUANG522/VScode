#include <stdio.h>
#include <stdlib.h>
// 请编写函数fun，该函数的功能是:将放在字符串数组中的M个字符串(每串的长度不超过N)，按顺序合并组成一个新的字符串。
// 例如，若字符串数组中的M个字符串为{“AAA4""BBBBBBB","CC"}则合并后的字符串内容应该是“AAAABBBBBBBCC".
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
    char string[][5] = {
        "AAAA",
        "BBBB",
        "CC"};  // 初始化注意：列大小是5，则字符串的字符数一定小于5，否则会将反义0截断，出现乱码或错误
    char str[15] = {0};
    // 初结构体数组外，一维数组与二维数组均可这样初始化，字符串数组是全反义0.指针数组是全置空，数字数组是全赋值0
    int j = 0;

    for (int i = 0; i < 3; i++)
    {
        char* p = string[i];
        // 二维数组的指针太复杂，直接将二维数组视为多个一维数组，定义一维指针，指向单个一维数组
        // 以下就是一维数组的遍历
        while (*p != '\0')
        {
            str[j++] = *p;
            p++;
        }
    }
    str[j] = '\0';
    // 最后勿忘为字符串数组加反义0
    printf("%s", str);
    return 0;
}
