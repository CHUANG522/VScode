#include <stdio.h>
#include <stdlib.h>
// 题目：根据公式求🥧值
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
    double result = 1;
    //   double numerator = 1;
    //  double denominator = 1;
    double temp = 1;
    for (int i = 1; temp > 5e-4; i++)
    {
        //    numerator *= i;
        //  denominator *= (2 * i + 1);
        // 优化避免大数阶乘
        temp *= (double) i /
                (2 * i + 1);  // 这里定义的i是整型，他的运算也是整型运算，要把它转化成double
        result += temp;
    }

    result *= 2;
    return 0;
}
