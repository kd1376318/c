#include<stdio.h>
main()
{
	int no=0, total=0,time=0;
	do
	{
		total += no;
		time++;
		printf("����(-999�ŏI��)�H");
		scanf("%d", &no);
		
	} while (no != -999);
	time--;
	printf("���v=%d\n����=%f", total, (float)total / time);
}