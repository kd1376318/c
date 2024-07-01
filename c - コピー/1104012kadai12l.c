#include<stdio.h>
main()
{
	char a[99];
	char* p_a = a;
	int i;
	printf("•¶š—ñ?");
	scanf("%s", p_a);
	for (i = 0; *p_a++; i++);
	printf("•¶š”‚ÍA%d•¶š‚Å‚·", i);
}