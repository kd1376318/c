#include<stdio.h>
main()
{
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0, };
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int* p_a = a, * p_b = b, w;
	printf("---実行前---\n");
	printf("配列a[]=");
	for (int i = 0; a[i] != 0; i++)
	{
		printf("%d ", *(p_a + i));
	}
	printf("\n配列b[]=");
	for (int i = 0; b[i] != 0; i++)
	{
		printf("%d ", *(p_b+i));
	}
	printf("\n---実行後---\n");
	for (int i = 0; a[i] != 0; i++)
	{
		w = a[i];
		a[i] = b[i];
		b[i] = w;
	}
	printf("配列a[]=");
	for (int i = 0; a[i] != 0; i++)
	{
		printf("%d ", *(p_a + i));
	}
	printf("\n配列b[]=");
	for (int i = 0; b[i] != 0; i++)
	{
		printf("%d ", *(p_b + i));
	}

}