#include<stdio.h>
long int bekijou(int a, int b);
main()
{
	int a, b;
	long int kotae;
	printf("数値1?");
	scanf("%d", &a);
	printf("数値2?");
	scanf("%d", &b);
	kotae = bekijou(a, b);
	printf("%dの%d乗は、%ld", a, b, kotae);
}
long int bekijou(int a, int b)
{
	long int ans=1;
	while (b)
	{
		ans *= a;
		b--;
	}
	return ans;
}