//1104012kadai066.c
#include<stdio.h>
main()
{
	int no, total;
	no = 0;
	total = 0;
	do
	{
		no += 1;
		total += no;
		printf("%d+", no);

	}while (total <= 300);
	printf("\b=%d", total);
}