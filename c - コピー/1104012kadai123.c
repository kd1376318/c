#include<stdio.h>
main()
{
	double a, b, * p_a = &a, * p_b = &b;
	printf("�����l1�H");
	scanf("%lf",&a);
	printf("�����l2�H");
	scanf("%lf", &b);
	if (*p_a > *p_b)
	{
		printf("�傫����=%f", *p_a);
	}
	else
	{
		printf("�傫����=%f", *p_b);
	}
	

}