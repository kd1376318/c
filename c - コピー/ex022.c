#include<stdio.h>
main()
{
	int yy;
	printf("西暦を入力:");
	scanf("%d", &yy);
	if (yy > 1988)
	{
		printf("平成生まれです");
	}
	else
	{
		printf("昭和生まれです");
	}
}