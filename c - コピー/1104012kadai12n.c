#include<stdio.h>
main()
{
	char* p = "Nippon";
	char* a = p;
	printf("�t���ɕ\������ƁA");
	while (*p)
	{
		p++;
	}
	while (p >= a)
	{
		printf("%c", *p--);
	}
	
}