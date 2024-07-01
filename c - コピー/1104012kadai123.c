#include<stdio.h>
main()
{
	double a, b, * p_a = &a, * p_b = &b;
	printf("実数値1？");
	scanf("%lf",&a);
	printf("実数値2？");
	scanf("%lf", &b);
	if (*p_a > *p_b)
	{
		printf("大きい方=%f", *p_a);
	}
	else
	{
		printf("大きい方=%f", *p_b);
	}
	

}