#include<stdio.h>
main()
{
	int ca, n1, n2;
	printf("演算子を入力");
	scanf("%d", &ca);
	if (ca == 1 || ca == 2 || ca == 3 || ca == 4)
	{
		printf("2つの整数を入力");
		scanf("%d %d", &n1, &n2);
		if (ca == 1)
		{
			printf("%d", n1 + n2);
		}
		if (ca == 2)
		{
			printf("%d", n1 - n2);
		}
		if (ca == 3)
		{
			printf("%d", n1 * n2);
		}
		if (ca == 4)
		{
			printf("%dあまり%d", n1 / n2, n1 % n2);
		}
	}
	else
	{
		printf("ERROR");
	}
}