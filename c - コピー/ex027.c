#include<stdio.h>
main()
{
	char moji;
	printf("文字を入力");
	scanf("%c", &moji);
	if (0x41 <= moji && moji <= 0x5A)
	{
		printf("変換すると%c",moji+32);
	}
	else if (0x61 <= moji && moji <= 0x7A)
	{
		printf("変換すると%c",moji-32);
	}

	else
	{
		printf("ERROR");
	}
}