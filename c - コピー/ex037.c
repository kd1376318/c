#include<stdio.h>
main()
{
	char op;
	printf("���Z�q������:");
	scanf("%c", &op);
	switch (op)
	{
		case 0x2b:
			printf("���Z�ł�");
			break;
		case 0x2d:
			printf("���Z�ł�");
			break;
		case 0x2a:
			printf("��Z�ł�");
			break;
		case 0x2f:
			printf("���Z�ł�");
			break;
		case 0x25:
			printf("���܂�ł�");
			break;
		default:
			printf("���̑��ł�");
	}
}