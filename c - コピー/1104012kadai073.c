//1104012kadai073.c
#include<stdio.h>
main()
{
	int no;
	char mo;
	printf("10進数の整数？");
	scanf("%d", &no);
	scanf("%c",&mo);
	printf("アルファベット(o or h or d)?");
	scanf("%c", &mo);
	switch (mo)
	{
		case 0x6f:
		case 0x4f:
			printf("%o", (int)no);
			break;
		case 0x48:
		case 0x68:
			printf("%x", (int)no);
		default:
			printf("%d", no);
			break;

	}
}