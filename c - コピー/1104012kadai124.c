#include<stdio.h>
main()
{
	char c, * p_c = &c;
	printf("1文字入力？");
	scanf("%c", &c);
	*p_c+=0x01;
	printf("次の文字は%c", *p_c);
}