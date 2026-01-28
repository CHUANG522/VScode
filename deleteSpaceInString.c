#include <stdio.h>
#include <stdlib.h>
// 题目：请编写一个函数，用来删除字符串中的所有空格。
/* run this  program using the console pauser or add your own getch, system("pause") or input loop
 */

int main(void)
{
    int i = 0;
    int j = 0;
    char string[] = "Hello World wang chuang !";
    while (string[i] != '\0')  // while循环
    {
        if (string[i] != ' ')
        {
            string[j++] = string[i];  // 数组中的j++可改为string【j】
                                      // j++，只有if成立j才下移
        }
        i++;  // 注意此处的i++不能写在if中，i是一定要自增的，循环结束的条件
    }
    string[j] = '\0';
    j = 0;
    while (string[j] != '\0')
    {
        printf("%c", string[j]);
        j++;  // while循环最后一定勿忘j++以结束循环
    }

    return 0;
}
