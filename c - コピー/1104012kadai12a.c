#include<stdio.h>
main()
{
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0, };
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int* p_a = a, * p_b = b;
	
	printf("---é¿çsëO---\n");
	printf("a[]=");
	for (int i = 0; a[i] != 0; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\nb[]=");
	for (int i = 0; b[i] != 0; i++)
	{
		printf("%d ", b[i]);
	}
	printf("\n---é¿çså„---\n");
	printf("a[]=");
	for (int i = 0; a[i] != 0; i++)
	{
		printf("%d ", a[i]);
		p_a++;
	}
	p_a--;
	printf("\nb[]=");
	for (int i = 0; b[i] != 0; i++)
	{
		p_b = p_a--;
		printf("%d ", *p_b);
	}

}
