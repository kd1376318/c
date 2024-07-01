#include<stdio.h>
main()
{
	int no;
	no = 1;
	do
	{
		do
		{
			printf("%d ", no);
		} while (no++ % 10!=0);
		printf("\n");
	} while (no < 20);

}