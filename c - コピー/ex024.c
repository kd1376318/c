#include<stdio.h>
main()
{
	char moji;
	printf("文字を入力");
	scanf("%c", &moji);
	if (0x41 <= moji && moji <= 0x5A)
	{
		printf("その文字は「大文字」です");
	}
	else
	{
		printf("その他の文字です");
	}
}