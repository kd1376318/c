//1104012kadai092.c
#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int c[10];
	printf("配列aからcにコピー\n");
	printf("配列 a=");
	for (int no = 0; no < 10; no++)
	{
		printf("%d ", a[no]);
	}
	printf("\n配列 c=");
	for (int no = 0; no < 10; no++)
	{
		printf("%d ", c[no]=a[no]);
	}

}