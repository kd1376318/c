#include<stdio.h>
main()
{
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0, };
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int* p_a = a, * p_b = b, w;
	printf("---���s�O---\n");
	printf("�z��a[]=");
	for (int i = 0; a[i] != 0; i++)
	{
		printf("%d ", *(p_a + i));
	}
	printf("\n�z��b[]=");
	for (int i = 0; b[i] != 0; i++)
	{
		printf("%d ", *(p_b+i));
	}
	printf("\n---���s��---\n");
	for (int i = 0; a[i] != 0; i++)
	{
		w = a[i];
		a[i] = b[i];
		b[i] = w;
	}
	printf("�z��a[]=");
	for (int i = 0; a[i] != 0; i++)
	{
		printf("%d ", *(p_a + i));
	}
	printf("\n�z��b[]=");
	for (int i = 0; b[i] != 0; i++)
	{
		printf("%d ", *(p_b + i));
	}

}