//1104012kadai036.c
#include<stdio.h>
main()
{
	int n1, n2;
	printf("����1?");
	scanf("%d", &n1);
	printf("����2?");
	scanf("%d", &n2);
	if (n1 > n2)
	{
		printf("%d�̂ق���%d���%d�傫��", n1, n2, n1 - n2);
	}
	else if (n1 < n2)
	{
		printf("%d�̂ق���%d���%d������", n1, n2, n2 - n1);
	}
	else
	{
		printf("%d��%d�͓�����",n1,n2);
	}
}