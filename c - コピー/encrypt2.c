#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[999];
	int i,k[999];
	srand(time(0));
	printf("���������͂��Ă���������");
	scanf("%s", &s);
	printf("�Í���������́A");
	for (i = 0; s[i] != '\0'; i++)
	{
		k[i] = rand() % 5;
		s[i] = s[i] + k[i];
		printf("%c", s[i]);
	}
	printf("\n�Í��L�[�́A");
	for (i = 0; s[i] != '\0'; i++)
	{
		printf("%d", k[i]);
	}
}