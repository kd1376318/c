#include<stdio.h>
main()
{
	int n1,n2;
	printf("”‚ÍH");
	scanf("%d", &n1);
	do
	{
		n2 = 0;
		do
		{
			printf("*");
			n2 += 1;
		} while (n2 < 5);
		printf("\n");
		n1 -= 1;
	} while (n1 > 0);
}