//1104012kadai058.c
#include<stdio.h>
main()
{
	char moji;
	for (moji = 32; moji <= 126; moji++)
	{
		printf("%x %c ", (int)moji, moji);
		if ((moji + 9) % 10 == 0)
		{
			printf("\n");
		}
	}
}