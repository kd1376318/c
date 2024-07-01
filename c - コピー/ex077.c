#include<stdio.h>
void maxmin(int data[3], int* max, int* min);
main()
{
	int data[3], max=-99999, min=99999;
	printf("®”‚ğ3‚Â“ü—ÍF");
	scanf("%d%d%d", &data[0], &data[1], &data[2]);
	maxmin(data, &max, &min);
	printf("Å‘å’l=%d	Å¬’l=%d", max, min);
}
void maxmin(int data[3], int* max, int* min)
{
	for (int i = 0; i < 3; i++)
	{
		if (data[i] > *max)
		{
			*max = data[i];
		}
		if (data[i] < *min)
		{
			*min = data[i];
		}
	}
	return;
}