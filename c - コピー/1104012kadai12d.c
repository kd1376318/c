#include<stdio.h>
main()
{
	int b[5][5] = { {3,6,9,12,15},{18,21,24,27,30},{33,36,39,42,45},{48,51,54,57,60},{63,66,69,72,75} };
	int c[5][5], * p_b, * p_c;
	int i=0;
	p_b = b[0], p_c = c[0];
	printf("�z��c\n");
	while (p_b < &b[4][5])
	{
		while (p_b < &b[i][5])
		{
			*p_c = *p_b;
			printf("%2d ", *p_c++);
			p_b++;
		}
		printf("\n");
		i++;
	}

}