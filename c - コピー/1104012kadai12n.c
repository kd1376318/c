#include<stdio.h>
main()
{
	char* p = "Nippon";
	char* a = p;
	printf("逆順に表示すると、");
	while (*p)
	{
		p++;
	}
	while (p >= a)
	{
		printf("%c", *p--);
	}
	
}