//1104012kadai041.c
#include<stdio.h>
main()
{
	float no,total,time;
	total = 0;
	time = 0;
	no = 0;
	printf("®”(-999‚ÅI—¹)?");
	scanf("%f", &no);
	while (no != -999)
	{
		total += no;
		time += 1;
		printf("®”(-999‚ÅI—¹)?");
		scanf("%f", &no);
	}
	printf("‡Œv=%.0f\n•½‹Ï=%.2f", total, total / time);
}