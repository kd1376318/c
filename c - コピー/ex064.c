#include<stdio.h>
main()
{
	char *p_ride[3] = { "car","bus","shinkansen" };
	char *p;
	int i;
	for (i = 0; i < 3; i++)
	{
		p = p_ride[i];//2���z���p_ride����1���z��Â��o��
		while (*p)
		{
			printf("%c", *p++);
		}
		printf("\n");
		
	}
	
	//printf("%c\n", p_ride);




}