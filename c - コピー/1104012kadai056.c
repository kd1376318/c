//1104012kadai056.c
#include<stdio.h>
main()
{
	char moji;
	printf("アルファベット小文字？");
	scanf("%c",&moji);
	for (moji; moji < 123; moji++)
	{
		printf("%c ", moji);
	}
}