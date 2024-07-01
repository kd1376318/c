#include<stdio.h>
main()
{
	int data[] = { 10,5,23,29,2,6,3,1,70,100 };
	int max = 0, min = 999,i;
	for (i = 0; i < 10; i++)
	{
		if (data[i] > max)
		{
			max = data[i];
		}
		if (data[i] < min)
		{
			min = data[i];
		}
	}
	printf("Å‘å’l=%d	Å¬’l=%d", max, min);
}