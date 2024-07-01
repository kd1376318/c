#include<stdio.h>
main()
{
	int yy;
	printf("西暦を入力：");
	scanf("%d", &yy);
	if (yy % 4 == 0)
	{
		if (yy % 100 == 0 && yy % 400 != 0)
		{
			printf("平年です");
		}
		else
		{
			printf("うるう年です");
		}
	}
	else
	{
		printf("平年です");
	}
}

