#include<stdio.h>
main()
{
	char a[99];
	char* p_a = a;
	int i;
	printf("文字列?");
	scanf("%s", p_a);
	for (i = 0; *p_a++; i++);
	printf("文字数は、%d文字です", i);
}