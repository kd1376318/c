#include<stdio.h>
main()
{
	char s[999];
	printf("暗号化文字列を入力してください＞");
	scanf("%s", &s);
	printf("複合済み文字列は、");
	for (int i = 0; s[i] != '\0'; i++)
	{
		s[i] = s[i] - 0x01;
		printf("%c", s[i]);
	}
}