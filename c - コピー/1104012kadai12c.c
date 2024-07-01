#include<stdio.h>
main()
{
	int a[5][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };
	int* p_a,i=0;
	p_a = a[0];
	printf("”z—ña\n");
	while (p_a<&a[4][5])
	{
		while(p_a<&a[i][5])
		{
			printf("%2d ", *p_a++);
		}
		printf("\n");
		i++;
	}

}
