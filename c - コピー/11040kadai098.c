//11040kadai098.c
#include<stdio.h>
main()
{
	int data[] = {10,5,23,29,2,6,3,1,70,100};
	int max=0, min=999;
	printf("配列 data=");
	for (int co = 0; data[co] !='\0'; co++)
	{
		printf("%d ", data[co]);
	}
	for (int co = 0; data[co] != '\0'; co++)
	{
		if (max < data[co])
		{
			max = data[co];
		}
		if (min > data[co])
		{
			min = data[co];
		}
	}
	printf("\n最大値=%d	最小値=%d", max, min);
}