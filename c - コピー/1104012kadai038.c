//1104012kadai038.c
#include<stdio.h>
main()
{
	char moji;
	printf("1�������́H");
	scanf("%c", &moji);
	if (0x41 <= moji && moji <= 0x5A)
	{
		printf("�ϊ����ʂ�%c", moji + 32);
	}
	else if (0x61 <= moji && moji <= 0x7A)
	{
		printf("�ϊ����ʂ�%c", moji - 32);
	}

	else
	{
		printf("%c",moji);
	}
}