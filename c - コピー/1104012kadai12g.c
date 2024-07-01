#include<stdio.h>
main()
{
	int a[5][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };
	int c[5][5], * p_a, * p_c;
	int i = 5,j=0;
	p_a = a[0], p_c = c[0];
	printf("”z—ñc\n");
	while (p_a < &a[4][4])
	{
		p_a++;
	}
	while (p_a > &a[0][0])
	{
		while (p_a > &a[i-1][4])
		{
			*p_c = *p_a;
			printf("%2d ", *p_c++);
			p_a--;
		}
		printf("\n");
		i--;
	}
}