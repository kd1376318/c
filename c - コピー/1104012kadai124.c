#include<stdio.h>
main()
{
	char c, * p_c = &c;
	printf("1�������́H");
	scanf("%c", &c);
	*p_c+=0x01;
	printf("���̕�����%c", *p_c);
}