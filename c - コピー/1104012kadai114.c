//1104012kadai114.c
#include<stdio.h>
main()
{
	char mo[999];
	int co;
	printf("•¶š—ñ‚ÍH");
	scanf("%s", &mo);
	printf("•¶š—ñ:%s", mo);
	for (co = 0; mo[co] != '\0'; co++);
	printf("	•¶š”=%d", co);
}