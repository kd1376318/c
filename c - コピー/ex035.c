#include<stdio.h>
main()
{
	int no,total=0;
	do
	{
		printf("”‚ğ“ü‚ê‚Ä:");
		scanf("%d", &no);
		if (no == -999)break;
		total += no;
	} while (no=-999);
	printf("‡Œv=%d", total);
}