#include<stdio.h>
main()
{
	int mm;
	printf("�������:");
	scanf("%d", &mm);
	if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12)
	{
		printf("�ŏI����31���ł�");
	}
	else
	{
		if (mm == 2)
		{
			printf("�ŏI����28���ł�");
		}
		else
		{
			printf("�ŏI����30���ł�");
		}
	}
}