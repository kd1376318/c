#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[999];
	int i, k[999];
	srand(time(0));
	printf("文字列を入力してください＞");
	scanf("%s", &s);
	for (i = 0; s[i] != '\0'; i++)
	{
		printf("s[%d]の複合化キー＞", i);
		scanf("%d", &k[i]);
	}
	printf("\n複合済み文字列は");
	for (i = 0; s[i] != '\0'; i++)
	{
		printf("%c", s[i] - k[i]);
	}
}