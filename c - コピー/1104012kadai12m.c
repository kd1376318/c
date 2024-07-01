#include<stdio.h>
main()
{
	char str1[128];
	char str2[123];
	char* p_1 = str1, * p_2 = str2;
	printf("•¶Žš—ñ1?");
	scanf("%s", p_1);
	printf("•¶Žš—ñ2?");
	scanf("%s", p_2);
	printf("str1:");
	while (*p_1)
	{
		p_1++;
	}
	while (*p_2)
	{
		*p_1 = *p_2;
		p_2++;
		p_1++;
	}
	printf("%s", str1);
}