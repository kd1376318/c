#include<stdio.h>
main()
{
	char* p = "peach";
	char data1[10] = "banana";
	char* p_data1;
	char data2[10];
	char* p_data2;
	p_data1 = data1;
	p_data2 = data2;

	p_data1 = p;
	p_data2 = data1;
	printf("data1[]=");
	while (*p_data1)
	{
		putchar(*p_data1++);
	}
	printf("\ndata2[]=");
	while (*p_data2)
	{
		putchar(*p_data2++);
	}
	
}