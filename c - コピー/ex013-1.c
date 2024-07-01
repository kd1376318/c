#include<stdio.h>
main()
{
	char moji1, moji2;
	moji1 = '5', moji2 = '6';
	printf("%c Å~ %c = %d \n", moji1, moji2, (moji1-0x30) * (moji2-0x30));
}