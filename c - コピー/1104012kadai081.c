//1104012kadai081.c
#include<stdio.h>
main()
{
	int no=0,total=0,co=0;
	while (no!=-999)
	{
		printf("����(-999�ŏI��)�H");
		scanf("%d", &no);
		if (no == -999) break;
		total += no;
		co++;
	}
	printf("���v=%d\n����=%.2f", total, (float)total / co);
}