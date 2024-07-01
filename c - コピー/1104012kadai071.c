//1104012kadai071.c
#include<stdio.h>
main()
{
	int n1, n2;
	char co;
	printf("®”1?");
	scanf("%d", &n1);
	printf("®”2?");
	scanf("%d", &n2);
	scanf("%c", &co);
	printf("‰‰Zq?");
	scanf("%c", &co);
	switch (co)
	{
		case 0x2b:
			printf("%d+%d=%d",n1,n2,n1+n2);
			break;
		case 0x2d:
			printf("%d-%d=%d",n1,n2,n1-n2);
			break;
		case 0x2a:
			printf("%d*%d=%d",n1,n2,n1*n2);
			break;
		case 0x2f:
			printf("%d/%d=%d",n1,n2,n1/n2);
			break;
		case 0x25:
			printf("%d/%d=%d",n1,n2,n1/n2);
			break;
		default:
			printf("ERROR");
			break;
	}
}