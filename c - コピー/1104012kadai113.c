#include<stdio.h>
main()
{
	char a[] = { "GameSoft" };
	int i;
	printf("������=");
	for (i = 0; a[i] != '\0'; i++)
	{
		printf("%c", a[i]);
	}
	printf("\n������=%d����", i);
}