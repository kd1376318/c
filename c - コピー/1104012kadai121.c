#include<stdio.h>
main()
{
	int a = 100, * p_a;
	int b = 10, * p_b;
	p_a = &a;
	p_b = &b;
	printf("%d+%d=%d\n", *p_a, *p_b, *p_a + *p_b);
	printf("%d-%d=%d\n", *p_a, *p_b, *p_a - *p_b);
	printf("%d*%d=%d\n", *p_a, *p_b, *p_a * *p_b);
	printf("%d/%d=%d\n", *p_a, *p_b, *p_a / *p_b);
}