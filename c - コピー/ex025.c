#include<stdio.h>
main()
{
	char moji;
	printf("文字を入力");
	scanf("%c", &moji);
	if (0x41 <= moji && moji <= 0x5A||0x61 <= moji && moji <= 0x7A)
	{
		printf("アルファベットです");
	}
	else if (0x30 <= moji && moji <= 0x39)
	{
		printf("数字です");
	}
	else
	{
		printf("その他の文字です");
	}
}