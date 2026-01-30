#include <stdio.h>
#include <stdlib.h>
// 题目：将s所指字符串中下标为偶数同时ASCII值为奇数的字符删除，
//  s所指串中剩余的字符形成的新串放在t所指的数组中。
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// 问：怎么对数组进行删除元素的操作
int main(void)
{
    char string[] = "qwertyuiop";

    int string_len = sizeof(string) / sizeof(string[1]) - 1;
    char t[string_len];
    int i = 0;
    int j = 0;

    for (i = 0; i < string_len; i++)
    {
        if (!(string[i] % 2 != 0 && i % 2 == 0))
        {                        // 本质是进行覆盖，将不满足删除条件的元素留下，即对删除条件取反！
            t[j++] = string[i];  // 再设置一个自增变量j让新数组往下走
        }
    }
    t[j] = '\0';  // 若为字符数组最后一定要加反义零作为数组结束的标志

    printf("%s", t);  //%s占位符，可以直接打印整个字符串
    return 0;
}
