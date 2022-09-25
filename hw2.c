#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double num;
	double result;
	printf("Please enter kilometers: \n");
	scanf("%lf", &num);

	result = num * 0.621371;
	printf("%.1f km is equal to %.1f miles.\n", num, result);
	return 0;
}