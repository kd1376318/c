#include<stdio.h>
main()
{
	char s[999];
	printf("���������͂��Ă���������");
	scanf("%s", &s);
	printf("�Í���������́A");
	for (int i = 0; s[i] != '\0'; i++)
	{
		s[i] = s[i] + 0x01;
		printf("%c", s[i]);
	}
}