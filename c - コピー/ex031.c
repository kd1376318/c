#include<stdio.h>
main()
{
	int no;
	for (no = 1;  no <= 10; no ++)
	{
		printf("1����%d�܂ł̘a=%.0f\n", no, no / 2.0 * (2 + (no - 1)));
	}
}