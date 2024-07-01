#include<stdio.h>
main()
{
	char a[] = { "abcde" };
	for (int i = 0; a[i] != '\0'; i++)
	{
		printf("%c", a[i]);
	}
}