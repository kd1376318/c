//1104012kadai038.c
#include<stdio.h>
main()
{
	char moji;
	printf("1文字入力？");
	scanf("%c", &moji);
	if (0x41 <= moji && moji <= 0x5A)
	{
		printf("変換結果は%c", moji + 32);
	}
	else if (0x61 <= moji && moji <= 0x7A)
	{
		printf("変換結果は%c", moji - 32);
	}

	else
	{
		printf("%c",moji);
	}
}