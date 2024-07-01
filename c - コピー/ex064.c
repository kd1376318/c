#include<stdio.h>
main()
{
	char *p_ride[3] = { "car","bus","shinkansen" };
	char *p;
	int i;
	for (i = 0; i < 3; i++)
	{
		p = p_ride[i];//2ŽŸ”z—ñ‚Ìp_ride‚©‚ç1ŽŸ”z—ñ‚Ã‚ÂŽæ‚èo‚·
		while (*p)
		{
			printf("%c", *p++);
		}
		printf("\n");
		
	}
	
	//printf("%c\n", p_ride);




}