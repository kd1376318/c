#include<stdio.h>
main()
{
	int no,up;
	printf("��������:");
	scanf("%d", &no);
	up = 0;
	while (no != up)
	{
		printf("*");
		up += 1;
	}
}