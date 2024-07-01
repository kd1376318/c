#include<stdio.h>
main()
{
	int sc;
	printf("秒数を入力：");
	scanf("%d", &sc);
	if (sc <= 5000)
	{
		if (0 <= sc)
		{
			printf("%d時間%d分%d秒です", sc / 3600, sc / 60 % 60, sc % 360 % 60);
		}
		else
		{
			printf("マイナスはエラーです");
		}
	}
	else
	{
		printf("ERROR");
	}
}