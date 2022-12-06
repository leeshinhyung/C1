#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
typedef struct
{
	char cityname[100];
	char country[100];
	char popul[100];

}info;


int main()
{
	info city[3];
	int i;
	printf("Input three cities: \n");

	for (i = 0; i < 3; i++)
	{
		printf("Name>");
		fgets(city[i].cityname, 100, stdin);
		city[i].cityname[strlen(city[i].cityname) - 1] = '\0';

		printf("Country>");
		fgets(city[i].country, 100, stdin);
		city[i].country[strlen(city[i].country) - 1] = '\0';

		printf("Population>");
		fgets(city[i].popul, 100, stdin);
		city[i].popul[strlen(city[i].popul) - 1] = '\0';
	}

	printf("Printing the three cities:\n");

	for (i = 0; i < 3; i++)
	{
		printf("%d. %s in %s with a population of %s people\n", i + 1, city[i].cityname, city[i].country, city[i].popul);
	}
	return 0;
}