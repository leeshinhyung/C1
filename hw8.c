#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double func(double arr[])
{
	double deno = 0;
	double average = 0;
	double result;
	for (int i = 0; i < 5; i++)
		average += arr[i];
	average = average / 5; 

	for (int i = 0; i < 5; i++)
		deno += pow(arr[i] - average, 2);

	result = sqrt(deno/5);
	printf("Standard Deviation = %.3lf", result);
}


int main()
{
	double num;
	int i;
	double arr[5];
	printf("Enter 5 real numbers: ");

	for (i = 0; i < 5; i++)
	{
		scanf("%lf", &num);
		arr[i] = num;
	} 

	func(arr);
	
	return 0;
}


