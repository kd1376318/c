#include<stdio.h>
main()
{
	int sc;
	printf("•b”‚ğ“ü—ÍF");
	scanf("%d", &sc);
	if (sc <= 5000)
	{
		printf("%dŠÔ%d•ª%d•b‚Å‚·", sc / 3600, sc / 60 % 60, sc % 360 % 60);
	}
	else
	{
		printf("ERROR");
	}
}