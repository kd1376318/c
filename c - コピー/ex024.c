#include<stdio.h>
main()
{
	char moji;
	printf("•¶Žš‚ð“ü—Í");
	scanf("%c", &moji);
	if (0x41 <= moji && moji <= 0x5A)
	{
		printf("‚»‚Ì•¶Žš‚Íu‘å•¶Žšv‚Å‚·");
	}
	else
	{
		printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚·");
	}
}