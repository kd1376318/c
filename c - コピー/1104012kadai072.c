//1104012kadai072.c
#include<stdio.h>
main()
{
	char moji;
	printf("アルファベット？");
	scanf("%c", &moji);
	switch (moji)
	{
		case 0x41:
		case 0x61:
			printf("America\nAustralia");
			break;
		case 0x45:
		case 0x65:
			printf("England");
			break;
		case 0x66:
		case 0x46:
			printf("France");
			break;
		case 0x4a:
		case 0x6a:
			printf("Japan");
			break;

		default:
			break;
	}
}