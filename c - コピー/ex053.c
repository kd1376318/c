#include<stdio.h>
main()
{
	int a = 100, b = 200;
	int* p_a = &a, * p_b = &b;
	int *w;
	printf("é¿çsëO*p_a=%d	*p_b=%d\n", *p_a, *p_b);
	//printf("%p %p\n", &p_a, &p_b);
	w = p_a;
	p_a = p_b;
	p_b = w;

	printf("é¿çså„*p_a=%d	*p_b=%d\n", *p_a, *p_b);
	//printf("%p %p\n", &p_a, &p_b);

}