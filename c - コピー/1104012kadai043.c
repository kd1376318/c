//1104012kadai043.c
#include<stdio.h>
main()
{
	int no;
	char moji;
	no = 0;
	moji = 0;
	while (no != -1)
	{
		printf("文字コード(-1で入力終了)?");
		scanf("%d", &no);
		moji = no;
		if (no != -1)
		{
			printf("%c\n", moji);
		}
		
	}
		


}