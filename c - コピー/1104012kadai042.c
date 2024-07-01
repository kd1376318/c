//1104012kadai042.c
#include<stdio.h>
main()
{
	int no,total;
	no = 0;
	total = 0;
	while (total <= 300)
	{
		no += 1;
		total += no;
		printf("%d+", no);

	}
	printf("\b=%d", total);
}