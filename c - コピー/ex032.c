#include<stdio.h>
main()
{
	int no,i;
	i = 0;
	printf("�������āF");
	scanf("%d", &no);
	for (i = 1; i <= 5; i += 1)
	{
		printf("%d ", no * i);
	}
}