//1104012kadai032.c
#include<stdio.h>
main()
{
	int no;
	printf("整数？");
	scanf("%d", &no);
	if (no % 2 == 0)
	{
		printf("その数は「偶数」です");
	}
	else
	{
		printf("その数は「奇数」です");
	}
}