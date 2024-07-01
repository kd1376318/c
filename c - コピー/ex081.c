#include<stdio.h>
int Getmax(int* array,int size);
int Getmin(int* array,int size);
main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	printf("Å‘å’l=%d\nÅ¬’l=%d\n", Getmax(data, 8), Getmin(data, 8));
}
int Getmax(int* array, int size)
{
	int max = 0;
	for (int i = 0; i < size; i++)
	{
		if (*array > max)
		{
			max = *array;
		}
		array++;
	}
	return max;
}
int Getmin(int* array, int size)
{
	int min = 999;
	for (int i = 0; i < size; i++)
	{
		if (*array < min)
		{
			min = *array;
		}
		array++;
	}
	return min;
}