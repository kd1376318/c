#include<stdio.h>
main()
{
	int sc;
	printf("�b������́F");
	scanf("%d", &sc);
	if (sc <= 5000)
	{
		printf("%d����%d��%d�b�ł�", sc / 3600, sc / 60 % 60, sc % 360 % 60);
	}
	else
	{
		printf("ERROR");
	}
}