#include<stdio.h>
main()
{
	char moji;
	printf("���������");
	scanf("%c", &moji);
	if (0x41 <= moji && moji <= 0x5A)
	{
		printf("���̕����́u�啶���v�ł�");
	}
	else
	{
		printf("���̑��̕����ł�");
	}
}