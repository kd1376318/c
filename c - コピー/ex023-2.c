#include<stdio.h>
main()
{
	int yy;
	printf("�������́F");
	scanf("%d", &yy);
	if (yy % 4 == 0)
	{
		if (yy % 100 == 0 && yy % 400 != 0)
		{
			printf("���N�ł�");
		}
		else
		{
			printf("���邤�N�ł�");
		}
	}
	else
	{
		printf("���N�ł�");
	}
}

