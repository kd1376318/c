#include<stdio.h>
main()
{
	int a[] = { 11,22,33,44,55,66 };
	int* p_a;
	float b[] = { 11.1,22.2,33.3,44.4 };
	float* p_b;
	int ta = 0,i;
	float tb = 0;
	p_a = a;
	for (i = 0; i < 6; i++)
	{
		ta += *p_a;
		p_a++;
	}
	printf("zña v%d	", ta);
	printf("½Ï%.3f", (float)ta / i);

	p_b = b;
	for (i = 0; i < 4; i++)
	{
		tb += *p_b;
		p_b++;
	}
	printf("\nzñb v%.3f	", tb);
	printf("½Ï%.3f", tb / i);
}