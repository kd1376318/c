//1104012kadai096.c
#include<stdio.h>
main()
{
	int c[10] = {0};
	int co,no=0;
	for (co = 0; co < 10; co++)
	{
		printf("Ž(-999ĹIš)H");
		scanf("%d", &no);
		if (no == -999) break;
		c[co] += no;
	}
	printf("zńc=");
	for (co = 0; c[co] !='\0'; co++)
	{
		printf("%d ", c[co]);
	}
}