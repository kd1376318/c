#include<stdio.h>
main()
{
	int a = 100, b = 200;
	int * p_a = &a, * p_b = &b;
	int w;
	printf("���s�Oa=%d	b=%d\n", a, b);
	//printf("%d %d\n", *p_a, *p_b);
	w = *p_a;
	*p_a = *p_b;
	*p_b = w;

	printf("���s��a=%d	b=%d\n", a, b);
	//printf("%d %d\n", *p_a, *p_b);
}