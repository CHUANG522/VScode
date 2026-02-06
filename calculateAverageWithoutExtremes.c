#include <stdio.h>
#include <stdlib.h>
// 题目：请编写函改数fun其功能是。将一组得分中，去掉一个最高分和一个最低分，
// 然后求平均值，并通过函数返回。函数形参a指向存放得分的数组，形参na中存放得分个数

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void fun(double score[], int N);

int main(void)
{
    double score[] = {9.9, 8.5, 7.6, 8.5, 9.3, 9.5, 8.9, 7.8, 8.6, 8.4};
    int N = 10;
    fun(score, N);
    return 0;
}
void fun(double score[], int N)
{  // 优化：边界处理：有效分数不足时返回1
    if (N <= 2)
    {
        return 1;
    }
    double max = score[0], min = score[0];
    double sum = 0;
    for (int i = 0; i < N; i++)
    {                     // 优化：一次遍历完成求和，找最大最小值
        sum += score[i];  // 先将所有值加上求出总sum
        if (max < score[i])
        {
            max = score[i];
        }
        if (min > score[i])
        {
            min = score[i];
        }
    }  // 在上面已经求出了max和min，直接让sum减去即可
    sum = sum - max - min;
    printf("%f", sum / (N - 2));
}