#include<stdio.h>
main()
{
	int mm;
	printf("Œ‚ğ“ü—Í:");
	scanf("%d", &mm);
	if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12)
	{
		printf("ÅI“ú‚Í31“ú‚Å‚·");
	}
	else
	{
		if (mm == 2)
		{
			printf("ÅI“ú‚Í28“ú‚Å‚·");
		}
		else
		{
			printf("ÅI“ú‚Í30“ú‚Å‚·");
		}
	}
}