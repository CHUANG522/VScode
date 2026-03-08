#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fun(int n)
{
	int sum = 0;
	for (int i = 2; i < n; i++)
	{
		for (int j = 2; j < n; j++)
		{
			if ((double)n / i == (double)j)
			{
				sum += i;
			}
		}
	}
	return sum;
}
int main(void)
{
	printf("%d",fun(10));

	return 0;
}
