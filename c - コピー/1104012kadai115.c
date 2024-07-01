#include<stdio.h>
main()
{
	char a[999];
	printf("•¶š—ñ‚ÍH");
	scanf("%s", a);
	for (int i = 0; a[i] != '\0'; i++)
	{
		putchar(a[i]);
		printf("\n");
	}
}