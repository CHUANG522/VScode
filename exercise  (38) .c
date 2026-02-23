#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
    char string[] = "123456";
    char *p, *t;
    p = t = string;
    p = p + 3;
    printf("%d", (int) (p - t));

    return 0;
}
