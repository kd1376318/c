#include<stdio.h>
void error_msg(void);/*戻り値なし引数なし*/
main()
{
	int a, b;
	printf("data1 data2?:");
	scanf("%d%d", &a, &b);
	if (b == 0)
	{
		error_msg();/*関数erro_msgの呼び出し*/
	}
	else
	{
		printf("%d/%d=%d...%d\n", a, b, a / b, a % b);

	}
}

void error_msg(void)
{
	printf("0で割り算はできません");
	return;/*無くても}があればそこで制御元に帰る*/
}