#include<stdio.h>
main()
{
	int co;
	char delta[]="Apple";
	printf("1文字ずつ表示");
	for (co = 0; co < sizeof(delta); co++)
	{
		printf("%c", delta[co]);
	}
	printf("\n文字列で表示");
	printf("\n%s", delta);
}