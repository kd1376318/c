#include<stdio.h>
main()
{
	float n1, n2, n3;
	printf("1つ目の実数:");
	scanf("%f", &n1);
	printf("2つ目の実数:");
	scanf("%f", &n2);
	printf("3つ目の実数:");
	scanf("%f", &n3);
	printf("合計=%f 平均=%f \n", n1 + n2 + n3, (n1 + n2 + n3) / 3);
}