//1104012kadai094.c
#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int c[10];
	printf("配列aと配列bを交換すると");

	printf("\n配列 a=");
	for (int no = 0; no < 10; no++)
	{
		c[no] = a[no];
		printf("%d ", a[no]=b[no]);
	}
	printf("\n配列 b=");
	for (int no = 0; no < 10; no++)
	{
		printf("%d ", b[no]=c[no]);
	}
}