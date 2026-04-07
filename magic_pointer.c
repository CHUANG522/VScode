// 题目:
/*
给定一个长度为 n 的字符串 a，其中每个字符都是 '0' 到 '9' 之间的数字。
初始时，一个“魔法指针”位于第 1 位（即下标 1，1-based）。
接着给出一个长度为 m 的字符串 s，称为咒语串；s 中每个字符属于以下四种之一：
'L'：魔法指针向左移动一格（若已在最左端，则无效）；
'R'：魔法指针向右移动一格（若已在最右端，则无效）；
'U'：将当前指针所指位置的数字加 1；若原为 '9'，则变为 '0'（模 10 加法）；
'D'：将当前指针所指位置的数字减 1；若原为 '0'，则变为 '9'（模 10 减法）。
任务：执行完所有咒语指令后，输出最终的字符串 a
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 重点：多组数据输入，动态分配数组free，scanf输入检验
int main(void)
{
    int N;
    if (scanf("%d", &N) != 1)
    {
        printf("输入错误,不是有效整数");
        return -1;
    }
    for (int t = 1; t <= N; t++)
    {
        int n1, n2;
        scanf("%d %d", &n1, &n2);
        if (scanf("%d %d", &n1, &n2) != 2)
        {
            printf("输入错误,不是有效整数");
            return -1;
        }
        char const* string = (char*) malloc(sizeof(char) * n1 + 1);
        char const* a = (char*) malloc(sizeof(char) * n2 + 1);
        // const在数据类型内部表示指针指向的地址不能变
        // 注意这里申请内存的首地址string和a不要动他们的位置(const)，因为归还free时要首地址归还
        if (a == NULL || string == NULL)
        {
            perror("malloc错误原因:");
            free(string);
            free(a);
            exit(1);
        }
        scanf("%s", string);
        scanf("%s", a);

        char* p = string;
        char* t = a;
        // 这里再用两个指针指向两块内存，而不是直接用string，a来操作
        while (*t)
        {
            if (*t == 'L')
            {
                if (p > string) p--;
            }
            else if (*t == 'R')
            {
                if (p < &string[n1]) p++;
            }

            else if (*t == 'U')
            {
                if (*p == '9')
                    *p = '0';
                else
                    *p += 1;
            }

            else if (*t == 'D')
            {
                if (*p == '0')
                    *p = '9';
                else
                    *p -= 1;
            }
            t++;
        }
        printf("%s \n", string);
        free(string);
        free(a);
        // 释放时一定是首地址
    }
    return 0;
}
