#include<stdio.h>
main()
{
	char a[] = { "GameSoft" };
	int i;
	printf("文字列=");
	for (i = 0; a[i] != '\0'; i++)
	{
		printf("%c", a[i]);
	}
	printf("\n文字数=%d文字", i);
}