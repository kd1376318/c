#include<stdio.h>
main()
{
	int no,i;
	i = 0;
	printf("数を入れて：");
	scanf("%d", &no);
	for (i = 1; i <= 5; i += 1)
	{
		printf("%d ", no * i);
	}
}