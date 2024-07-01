#include<stdio.h>
main()
{
	int no;
	no = 20;
	do
	{
		do
		{
			printf("%d ", no);
		} while (no-- % 10 != 1);
		printf("\n");
	} while (no > 1);

}