//1104012kadai057.c
#include<stdio.h>
main()
{
	char moji;
	printf("�A���t�@�x�b�g�������H");
	scanf("%c", &moji);
	for (moji-=32; moji < 91; moji++)
	{
		printf("%c ", moji);
	}
}