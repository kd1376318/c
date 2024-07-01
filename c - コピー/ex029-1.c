#include<stdio.h>
main()
{
	int no;
	printf("”‚ğ“ü‚ê‚Ä:");
	scanf("%d", &no);
	while (no != 0)
	{
		printf("*");
		no -= 1;
	}
}