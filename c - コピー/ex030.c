#include<stdio.h>
main()
{
	int no,ca;
	printf("��������:");
	scanf("%d", &no);
	ca = 0;
	while (ca <= 10)
	{
		printf("%d+%d=%d\n", no, ca, no + ca);
		ca += 1;
	}
}