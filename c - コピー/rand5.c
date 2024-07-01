#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int no;
	srand(time(0));
	for (int i = 1; i <= 100; i++)
	{
		printf("%3d ", no = rand() % 300 + 1);
		if (i % 10 == 0)
		{
			printf("\n");
		}
	}
}