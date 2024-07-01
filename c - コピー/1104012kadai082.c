//1104012kadai082.c
#include<stdio.h>
main()
{
	int no = 0, total = 0, co = 0;
	while (no != -999)
	{
		printf("®”(-999‚ÅI—¹)H");
		scanf("%d", &no);
		if (no == -999) break;
		if (no < 0) continue;
		total += no;
		co++;
	}
	printf("‡Œv=%d\n•½‹Ï=%.2f", total, (float)total / co);
}