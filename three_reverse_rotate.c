#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 题目：请编写函数fun其功能是:移动字符串中的内容，移动的规则是把第1~m个字符，平移到字符串的最后，把第m+
// 1到最后的字符移到字符串的前部。
//  例如，字符串中原有的内容为"ABCDEFGHIK"，m的值为3，移动后，字符串中的内容应该是"DEFGHIJKABC"。

// 原码：void fun(char string[], int m);
// 优化：三次逆序法
void reverse(char string[], int start, int end);  // 字符逆序函数，将start与end之间的字符颠倒过来
void fun(char string[], int m);

int main(void)
{
    char arr[] = "ABCDEFGHIK";
    fun(arr, 4);
    printf("%s", arr);

    return 0;
}
void reverse(char string[], int start, int end)
{
    char temp;  // 定义一个空桶，在下面的交换中起承接string[srart]作用

    while (start < end)
    {
        temp = string[start];           // temp暂存string[start]值
        string[start++] = string[end];  // 将最后一个移动到首位，并使start下移
        string[end--] = temp;           // 将首位（暂存在temp中）移动到末尾
    }
}
void fun(char string[], int m)
{
    int str_len = strlen(string);     // 若m=4，string=ABCDEFGHIJK
    reverse(string, 0, m - 1);        // 第一次逆序：DCBA EFGHIJK
    reverse(string, m, str_len - 1);  // 第二次逆序：DCBA KJIHGFE
    reverse(string, 0, str_len - 1);  // 第三次逆序：EFGHIJK ABCD
}
/*原码：起
 void fun(char string[], int m)
 {
     // char* p = string; 定义一个指针用来遍历数组，求大小
     int N = 0;
     int j = 0;
     N=strlen(string);
 以下是用指针求字符数组的大小，现优化为字符串长度函数 strlen
     while (*p)
     {
         p++;
         N++;
     }

     char string_new[N];
     for (int i = 0; i < N; i++)
     {
         if (i >= m && i < N)//条件：m之后的元素先赋给string——new
         {
             // printf("%c", string[i]);
             string_new[j++] = string[i];
         }
     }
     for (int i = 0; i < m; i++)
     {  //m之前的元素后赋值给string——new
         //  printf("%c", string[i]);
         string_new[j++] = string[i];
     }
     string_new[j] = 0;
     printf("\n");
     printf("%s", string_new);
 } 终*/