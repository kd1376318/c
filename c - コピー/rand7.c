#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int no,a;
	printf("1〜1000の中で当たりの数を予想してください");
	srand(time(0));
	for (int i = 0; i != 10^10^10; i++, rand());
	a = rand() % 1000 + 1;
	for(int i=0;i!=-1;i++)
	{
		printf("\n当たりの数は？＞");
		scanf("%d", &no);
		if (no < a)
		{
			printf("当たりの数より小さいです");
		}
		if (no > a)
		{
			printf("当たりの数より大きいです");
		}
		if (no == a)
		{
			printf("正解!!%d回で当たりました", i+1);
			break;
		}

	}
}