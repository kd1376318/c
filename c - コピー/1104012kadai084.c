//1104012kadai084.c
#include<stdio.h>
main()
{
	int n1, n2;
	while (1)
	{
		printf("®”1(-999‚ÅI—¹)");
		scanf("%d", &n1);
		printf("®”2(-999‚ÅI—¹)");
		scanf("%d", &n2);
		if (n1 == -999 || n2 == -999) break;
		if (n2 == 0) continue;
		printf("%d/%d=%d‚ ‚Ü‚è%d\n", n1, n2, n1 / n2, n1 % n2);
		
	}
}