#include<stdio.h>
main()
{
	int no;
	printf("��������:");
	scanf("%d", &no);
	while (no != 0)
	{
		printf("*");
		no -= 1;
	}
}