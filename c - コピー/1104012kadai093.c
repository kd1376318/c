//1104012kadai093.c
#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int c[10];
	printf("”z—ña‚Æ”z—ñb‚Ì‰ÁŽZŒ‹‰Ê‚ð”z—ñc‚ÉŠi”[‚·‚é");
	printf("\n”z—ñ a=");
	for (int no = 0; no < 10; no++)
	{
		printf("%d ", a[no]);
	}
	printf("\n”z—ñ b=");
	for (int no = 0; no < 10; no++)
	{
		printf("%d ", b[no]);
	}
	printf("\n”z—ñ c=");
	for (int no = 0; no < 10; no++)
	{
		printf("%d ", c[no] = a[no]+b[no]);
	}
}