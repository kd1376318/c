#include<stdio.h>
main()
{
	int mm;
	printf("月を入力:");
	scanf("%d", &mm);
	if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12)
	{
		printf("最終日は31日です");
	}
	else
	{
		if (mm == 2)
		{
			printf("最終日は28日です");
		}
		else
		{
			printf("最終日は30日です");
		}
	}
}