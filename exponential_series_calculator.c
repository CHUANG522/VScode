#include <stdio.h>
#include <stdlib.h>
// 题目：计算级数公式：S = 1 + x + x^2/2! + x^3/3! + ... + x^n/n!的n项和
// 其中x与n为双变量自己输入
// 解答核心：x的n次方怎么求
int main(void)
{
    int i = 0;
    double x = 2;
    int n = 10;
    double sum = 1;                // 注意最初赋值操作，不要无脑赋0；那么下面的连×就一直是0了
    double numerator = 1;          // 分子数值
    unsigned int denominator = 1;  // 分母数值
    printf("请输入X N 的值");
    scanf("%f %d", &x, &n);   // 勿忘scanf函数取地址才可以输入
    for (i = 1; i <= n; i++)  // for循环的变量值i最好能在循环中定义使用
    {                         // 注意：一定要考虑i之后是否还用的着
        numerator *= x;
        denominator *= i;
        sum += numerator / denominator;
    }
    printf("numerator is %f \n", numerator);
    printf("denominator is %d\n", denominator);  // 打印函数的占位符一定与变量类型对应
    printf("sum is %f", sum);                    // 否则显示的值不对
    return 0;
}
