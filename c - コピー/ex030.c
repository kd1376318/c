#include<stdio.h>
main()
{
	int no,ca;
	printf("数を入れて:");
	scanf("%d", &no);
	ca = 0;
	while (ca <= 10)
	{
		printf("%d+%d=%d\n", no, ca, no + ca);
		ca += 1;
	}
}