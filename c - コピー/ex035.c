#include<stdio.h>
main()
{
	int no,total=0;
	do
	{
		printf("��������:");
		scanf("%d", &no);
		if (no == -999)break;
		total += no;
	} while (no=-999);
	printf("���v=%d", total);
}