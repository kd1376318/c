#include<stdio.h>
main()
{
	char moji;
	printf("���������");
	scanf("%c", &moji);
	if (0x41 <= moji && moji <= 0x5A)
	{
		printf("�ϊ������%c",moji+32);
	}
	else if (0x61 <= moji && moji <= 0x7A)
	{
		printf("�ϊ������%c",moji-32);
	}

	else
	{
		printf("ERROR");
	}
}