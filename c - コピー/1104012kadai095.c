//1104012kadai095.c
#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int total, co;
	printf("�z��a=");
	for (total = 0, co = 0; co < 10; co++)
	{
		total += a[co];
		printf("%d ", a[co]);
	}
	printf("\n���v=%d		����=%.0f", total, (float)total / co);
	printf("\n�z��b=");
	for (total = 0, co = 0; co < 10; co++)
	{
		total += b[co];
		printf("%d ", b[co]);
	}
	printf("\n���v=%d		����=%.0f", total, (float)total / co);
}