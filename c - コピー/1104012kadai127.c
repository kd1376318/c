#include<stdio.h>
main()
{
	double to=0,co=0,data[5] = { 10.8,20.3,30.6,40.4,50.5 },*p_data=data;
	int i;
	printf("�z��̓��e\n�z�� data[]=");
	for (i = 0; i < 5; i++)
	{
		to += *p_data;
		printf("%f,", *p_data++);
		
	}
	printf("\b \n���v=%f\n����=%f", to, to / i);
}