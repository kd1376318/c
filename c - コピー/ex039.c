#include<stdio.h>
main()
{
	int n1, n2, n3;
	char co;
	printf("���������:");
	scanf("%c", &co);
	printf("���������:");
	scanf("%d%d%d", &n1, &n2, &n3);
	switch (co)
	{
		case 0x44:
		case 0x64:
			if (n1 <= n2)
			{
				if (n2 <= n3)
				{
					printf("�ő�l��%d�ł�", n3);
					break;
				}
				printf("�ő�l��%d�ł�", n2);
				break;

			}
			printf("�ő�l��%d�ł�", n1);
			break;
		case 0x53:
		case 0x73:
			if (n1 >= n2)
			{
				if (n2 >= n3)
				{
					printf("�ŏ��l��%d�ł�", n3);
					break;
				}
				printf("�ŏ��l��%d�ł�", n2);
				break;

			}
			printf("�ŏ��l��%d�ł�", n1);

			break;
		case 0x47:
		case 0x67:
			printf("���v��%d�ł�", n1 + n2 + n3);
			break;
		case 0x48:
		case 0x68:
			printf("���ς�%.2f�ł�",(float)(n1+n2+n3)/3);
			break;
		default:
			printf("ERROR");
	}
}