#include<stdio.h>
long int bekijou(int a, int b);
main()
{
	int a, b;
	long int kotae;
	printf("”’l1?");
	scanf("%d", &a);
	printf("”’l2?");
	scanf("%d", &b);
	kotae = bekijou(a, b);
	printf("%d‚Ì%dæ‚ÍA%ld", a, b, kotae);
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