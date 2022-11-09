#include <stdio.h>

int main(void)
{
	int arr1[6] = { 1,2,3,4,5,6 };
	int arr2[6] = { 7,8,9,10,11,12 };

	int *prt1 = arr1;
	int *prt2 = arr2;
	int temp, i;
	
	printf("arr1:");
	for (i = 0; i < 6; i++)
		printf("%d ", arr1[i]);

	printf("\n");

	printf("arr2:");
	for (i = 0; i < 6; i++)
		printf("%d ", arr2[i]);

	printf("\n");


	for (i = 0; i < 6; i++)
	{
		temp = prt1[i];
		prt1[i] = prt2[i];
		prt2[i] = temp;
	}

	printf("\nafter swap\n");

	printf("arr1:");
	for (i = 0; i < 6; i++)
		printf("%d ", arr1[i]);

	printf("\n");

	printf("arr2:");
	for (i = 0; i < 6; i++)
		printf("%d ", arr2[i]);

	printf("\n");

	return 0;
}



	