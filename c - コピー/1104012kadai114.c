//1104012kadai114.c
#include<stdio.h>
main()
{
	char mo[999];
	int co;
	printf("文字列は？");
	scanf("%s", &mo);
	printf("文字列:%s", mo);
	for (co = 0; mo[co] != '\0'; co++);
	printf("	文字数=%d", co);
}