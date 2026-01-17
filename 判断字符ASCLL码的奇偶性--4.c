#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

//	char a;
	char x;
	scanf(" %c", &x);
	if (x % 2 == 1) {
		printf("YES! \n ");
	} else {
		printf("It is not 偶数!");
	}
	return 0;
}
