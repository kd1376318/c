//1104012kadai114.c
#include<stdio.h>
main()
{
	char mo[999];
	int co;
	printf("������́H");
	scanf("%s", &mo);
	printf("������:%s", mo);
	for (co = 0; mo[co] != '\0'; co++);
	printf("	������=%d", co);
}