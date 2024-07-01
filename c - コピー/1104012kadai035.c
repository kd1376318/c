//1104012kadai035.c
#include<stdio.h>
main()
{
	int no;
	printf("整数？");
	scanf("%d", &no);
	if (no < 0)
	{
		printf("入力値は「マイナス」です");
	}
	else if (no > 0)
	{
		printf("入力値は「プラス」です");
	}
	else
	{
		printf("入力値は「0」です");
	}
}