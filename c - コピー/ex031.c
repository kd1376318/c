#include<stdio.h>
main()
{
	int no;
	for (no = 1;  no <= 10; no ++)
	{
		printf("1から%dまでの和=%.0f\n", no, no / 2.0 * (2 + (no - 1)));
	}
}