#include<stdio.h>
main()
{
	int data[] = { 10,20,30,40,50,60,70,80,-999 };
	int *p_data = data;
	printf("�|�C���^���Œ�ŕ\��\ndata[]=");
	for (int i = 0; data[i] != -999; i++)
	{
		*p_data = data[i];
		printf("%d,", *p_data);
	}
	printf("\b \n�|�C���^��ω������ĕ\��\ndata[]=");
	while (*p_data != -999)
	{
		printf("%d,", *p_data++);
	}
	printf("\b ");
}