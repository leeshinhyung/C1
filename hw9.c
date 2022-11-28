#include <stdio.h>

char Change(char * ch)
{
	const int diff = 'a' - 'A';
	for (int i = 0; i < strlen(ch); i++)
	{
		if (ch[i] >= 'A' && ch[i] <= 'Z')
			ch[i] += diff;
		else if (ch[i] >= 'a' && ch[i] <= 'z')
			ch[i] -= diff;
		else
			return 0;
	}
}


int main()
{
	char str[50];
	printf("Input> ");
	fgets(str, sizeof(str), stdin);

	Change(str);
	printf("Output> %s", str);

	return 0;
}