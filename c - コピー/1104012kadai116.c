#include<stdio.h>
main()
{
	char a[999], b[999];
	int i, j;
	printf("•¶Žš—ñ1?");
	scanf("%s", a);
	printf("•¶Žš—ñ2?");
	scanf("%s", b);
	for (j = 0; a[j] != '\0'; j++);
	for (int i = 0; b[i] != '\0'; i++)
	{
		a[j+i] = b[i];
	}
	printf("%s", a);
}