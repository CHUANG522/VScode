#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
    char string[] = "Hwllo Wrold ni hao";
    int i = 0, j = 0;
    while (string[i] != '\0')
    {  // i遍历整个原字符串
        if (string[i] != ' ')
        {                             // 只有当前字符不是空格时
            string[j++] = string[i];  // 先把string[i]赋值给string[j]，然后j自增1
        }
        i++;  // 不管是不是空格，i每次都自增（继续遍历下一个字符）
    }
    string[j] = '\0';  // 给新字符串加结束符

    return 0;
}
