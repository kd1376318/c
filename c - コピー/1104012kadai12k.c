#include<stdio.h>
main()
{
	char a[] = { "mikan to ringo" };
	char* p_a = a;
	printf("‹ó”’‚ğœ‚¢‚½”z—ñ“à—e=");
	while (*p_a)
	{
		if (*p_a == ' ')
		{
			p_a++;

		}
		else
		{
			printf("%c", *p_a++);
		}
		
	}
}