#include<stdio.h>
main()
{
	int no,total=0;
	do
	{
		printf("数を入れて:");
		scanf("%d", &no);
		if (no == -999)break;
		total += no;
	} while (no=-999);
	printf("合計=%d", total);
}