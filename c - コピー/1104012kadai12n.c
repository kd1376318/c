#include<stdio.h>
main()
{
	char* p = "Nippon";
	char* a = p;
	printf("‹t‡‚É•\Ž¦‚·‚é‚ÆA");
	while (*p)
	{
		p++;
	}
	while (p >= a)
	{
		printf("%c", *p--);
	}
	
}