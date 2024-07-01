//1104012kadai037.c
#include<stdio.h>
main()
{
	int no;
	printf("0から100までの整数？");
	scanf("%d", &no);
	if (30 <= no && no < 50)
	{
		printf("その数値の判定結果は「2」です");
	}
	else if (50 <= no && no < 80)
	{
		printf("その数値の判定結果は「3」です");
	}
	else if (80 <= no && no < 90)
	{
		printf("その数値の判定結果は「4」です");
	}
	else if (90 <= no )
	{
		printf("その数値の判定結果は「5」です");
	}
	else
	{
		printf("その数値の判定結果は「1」です");
	}
}