#include<stdio.h>
main()
{
	char s[999];
	printf("�Í������������͂��Ă���������");
	scanf("%s", &s);
	printf("�����ςݕ�����́A");
	for (int i = 0; s[i] != '\0'; i++)
	{
		s[i] = s[i] - 0x01;
		printf("%c", s[i]);
	}
}