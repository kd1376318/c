//1104012kadai034.c
#include<stdio.h>
main()
{
	char moji;
	printf("アルファベット？");
	scanf("%c", &moji);
	if (0x41 <= moji && moji <= 0x5A)
	{
		printf("その文字は「大文字」です");
	}
	else if (0x61 <= moji && moji <= 0x7A)
	{
		printf("その文字は「小文字」です");
	}
	
	else
	{
		printf("ERROR");
	}
}