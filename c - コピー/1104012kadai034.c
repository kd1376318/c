//1104012kadai034.c
#include<stdio.h>
main()
{
	char moji;
	printf("�A���t�@�x�b�g�H");
	scanf("%c", &moji);
	if (0x41 <= moji && moji <= 0x5A)
	{
		printf("���̕����́u�啶���v�ł�");
	}
	else if (0x61 <= moji && moji <= 0x7A)
	{
		printf("���̕����́u�������v�ł�");
	}
	
	else
	{
		printf("ERROR");
	}
}