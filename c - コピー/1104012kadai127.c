#include<stdio.h>
main()
{
	double to=0,co=0,data[5] = { 10.8,20.3,30.6,40.4,50.5 },*p_data=data;
	int i;
	printf("配列の内容\n配列 data[]=");
	for (i = 0; i < 5; i++)
	{
		to += *p_data;
		printf("%f,", *p_data++);
		
	}
	printf("\b \n合計=%f\n平均=%f", to, to / i);
}