// 题目：要用100块钱买100只鸡，且公鸡、母鸡、小鸡不少于1只，问公鸡、母鸡、小鸡各多少只？
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>  // 必须包含这个头文件
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
    SetConsoleOutputCP(65001);  // 输出编码：UTF-8
    SetConsoleCP(65001);        // 输入编码：UTF-8

    int _5_counter = 1, _3_counter = 1, _1_counter = 1;
    int remain_moneny;
    int way_counter = 0;
    for (; _5_counter <= 20; _5_counter++)
    {
        remain_moneny = 100 - _5_counter * 5;
        for (_3_counter = 1; _3_counter * 3 <= remain_moneny; _3_counter++)
        {
            _1_counter = 100 - _5_counter - _3_counter;

            if (_1_counter + _5_counter + _3_counter == 100 &&
                _1_counter * 1.0 / 3 + _5_counter * 5 + _3_counter * 3 == 100)
            {
                printf(" 方法%d \n", ++way_counter);
                printf("%d\t%d\t%d\t\n", _5_counter, _3_counter, _1_counter);
            }
        }
    }
    int counter = 0;

    return 0;
}