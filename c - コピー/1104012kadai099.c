//1104012kadai099
#include<stdio.h>
main()
{
	char mo[999];
	int i;
	printf("回数と文字列を入力");
	scanf("%d %s", &i, &mo);
	while (i>0)
	{
		printf("%s ", mo);
		i--;
	}
}