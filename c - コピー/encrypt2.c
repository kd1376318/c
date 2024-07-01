#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[999];
	int i,k[999];
	srand(time(0));
	printf("文字列を入力してください＞");
	scanf("%s", &s);
	printf("暗号化文字列は、");
	for (i = 0; s[i] != '\0'; i++)
	{
		k[i] = rand() % 5;
		s[i] = s[i] + k[i];
		printf("%c", s[i]);
	}
	printf("\n暗号キーは、");
	for (i = 0; s[i] != '\0'; i++)
	{
		printf("%d", k[i]);
	}
}