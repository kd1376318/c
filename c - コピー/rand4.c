#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int un;
	srand(time(0));
	un = rand() % 5 + 1;
	printf("�����̂��Ȃ��̉^���́A");
	for (int i = 0; i < un; i++)
	{
		printf("�� ");
	}
	printf("�ł��B");
}