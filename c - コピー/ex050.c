#include<stdio.h>
main()
{
	int a = 100,b;
	int *p_a;
	p_a = &a;
	b = *p_a;
	printf("a=%d ", a);
	printf("&a=%d", &a);
	printf("p_a=%d", p_a);
	printf("*p_a=%d", *p_a);
	printf("&p_a=%d", &p_a);
}