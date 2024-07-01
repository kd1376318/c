//1104012kadai102.c
#include<stdio.h>
main()
{
	int b[5][5] = { {3,6,9,12,15},{18,21,24,27,30 }, { 33,36,39,42,45 }, { 48,51,54,57,60 }, { 63,66,69,72,75 } };
	int c[5][5];
	int li, co;
	printf("”z—ñc‚Ì“à—e");
	for (li = 0; li < 5; li++)
	{
		for (co = 0; co < 5; co++)
		{
			c[li][co] = b[li][co];
			printf("%d ", c[li][co]);
		}
		printf("\n");
	}
}