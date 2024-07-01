#include<stdio.h>
main()
{
	char a[] = { "ringo" };
	char b[6];
	char* p_a = a, * p_b = b;
	int i = 0,j;
	printf("”z—ñ“à—e=%s\n", p_a);
	while (*p_a++)
	{
		i++;
	}
	for (j=0;i>0;i--,j++)
	{
		b[j] = a[i];
	}
	printf("‹t‡Œ‹‰Ê=");
	printf("%s", p_b);
}