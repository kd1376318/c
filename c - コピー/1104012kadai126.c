#include<stdio.h>
main()
{
	int data[10] = { 10,9,1,20,45,21,38,45,88 }, * p_data = data;
	int max = 0, min = 999;
	printf("�z��̓��e\ndata[]=");
	while (*p_data)
	{
		if (*p_data > max)
		{
			max = *p_data;
		}
		if (*p_data < min)
		{
			min = *p_data;
		}
		printf("%d,", *p_data++);
	}
	printf("\b \n�ő�l=%d\n�ŏ��l=%d", max, min);
}