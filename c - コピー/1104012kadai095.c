//1104012kadai095.c
#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int total, co;
	printf("配列a=");
	for (total = 0, co = 0; co < 10; co++)
	{
		total += a[co];
		printf("%d ", a[co]);
	}
	printf("\n合計=%d		平均=%.0f", total, (float)total / co);
	printf("\n配列b=");
	for (total = 0, co = 0; co < 10; co++)
	{
		total += b[co];
		printf("%d ", b[co]);
	}
	printf("\n合計=%d		平均=%.0f", total, (float)total / co);
}