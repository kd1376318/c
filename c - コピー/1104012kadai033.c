//1104012kadai033.c
#include<stdio.h>
main()
{
	char moji;
	printf("�A���t�@�x�b�g�H");
	scanf("%c", &moji);
	if (moji > 0x60)
	{
		printf("���̕����́u�������v�ł�");
	}
	else
	{
		printf("���̕����́u�啶���v�ł�");
	}
}