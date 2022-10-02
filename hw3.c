#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b;
	int num=5;
	for (a = 1; a <= num; a++)
	{
		for (b = 4; b >= a; b--)
			printf(" ");
	

	for (b = 1; b <= a*2-1; b++)
		printf("*");

	printf("\n");

	}
	return 0;
}

