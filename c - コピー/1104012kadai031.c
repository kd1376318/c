//1104012kadai031.c
#include<stdio.h>
main()
{
	float n1, n2;
	printf("2つの実数値？");
	scanf("%f%f", &n1, &n2);
	if (n1 < n2)
	{
		printf("大きい方は=%f\n", n2);
	}
	else
	{
		printf("大きい方は=%f\n", n1);
	}
}