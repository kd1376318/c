#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int n1,n2,n3;
	srand(time(0));
	for (int i = 0; i != 100000; i++,rand());
	printf("%d", n1 = rand() % 9+1);
	for (int i = 0; i != 1000000; i++, rand());
	printf("%d", n2 = rand()%9+1);
	for (int i = 0; i != 10000000; i++, rand());
	printf("%d", n3 = rand()%9+1);
	if (n1 == n2 && n1==n3)
	{
		printf("当たり！！！！！");
	}
}