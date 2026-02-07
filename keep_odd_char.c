#include <stdio.h>
#include <stdlib.h>
// 题目：
// 编写函数fun。其功能是﹔将s所指字符串中除了下标为奇数同时ASCI值也为奇数的字符之外，其余的所有字符全部册除，

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
    char s[] = "ABCDEFG12345";
    int j = 0;
    for (int i = 1; s[i] != '\0'; i += 2)
    {  // 注意：此处的步长不要写成i+=2 ；如果有奇数个字符那么条件的‘\0'读不到
        if (s[i] % 2 == 1)
        {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';      // 对于删除字符串，一定勿忘最后加反义0，表示字符结束
    printf("%s", s);  //%s，一直打印直到碰到'\0'
    return 0;
}
