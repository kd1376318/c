#include<stdio.h>
main()
{
	char c, * p_c = &c;
	printf("1•¶š“ü—ÍH");
	scanf("%c", &c);
	*p_c+=0x01;
	printf("Ÿ‚Ì•¶š‚Í%c", *p_c);
}