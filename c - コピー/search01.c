#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int s,i,data[] = { 20,30,40,10,50,60,70 };
	printf("探索値sを入力");
	scanf("%d", &s);
	for (int i = 0;i<7; i++)
	{
		if (data[i] == s)
		{
			printf("見つかった");
			break;
		}
	}
	printf("見つからなかった");
}