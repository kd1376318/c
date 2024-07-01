#include<stdio.h>
main()
{
	int no , no2=0,no3;
	printf("êîÇÕÅH");
	scanf("%d", &no);
	do
	{
		no3 = -1;
		do
		{
			printf("*");
			no3++;
		} while (no3 != no2);
		printf("\n");
		no2++;
	} while (no2!=no);
}