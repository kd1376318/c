//1104012kadai033.c
#include<stdio.h>
main()
{
	char moji;
	printf("アルファベット？");
	scanf("%c", &moji);
	if (moji > 0x60)
	{
		printf("その文字は「小文字」です");
	}
	else
	{
		printf("その文字は「大文字」です");
	}
}