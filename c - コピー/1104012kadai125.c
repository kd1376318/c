#include<stdio.h>
main()
{
	int data[] = { 10,20,30,40,50,60,70,80,-999 };
	int *p_data = data;
	printf("ポインタを固定で表示\ndata[]=");
	for (int i = 0; data[i] != -999; i++)
	{
		*p_data = data[i];
		printf("%d,", *p_data);
	}
	printf("\b \nポインタを変化させて表示\ndata[]=");
	while (*p_data != -999)
	{
		printf("%d,", *p_data++);
	}
	printf("\b ");
}