#include<stdio.h>
main()
{
	char m1[80], m2[80],m3[80];
	printf("文字列1を入力:");
	scanf("%s", &m1[0]);
	printf("文字列2を入力:");
	scanf("%s", &m2[0]);
	printf("moji1=%s	moji2=%s\n",&m1[0],&m2[0]);
	printf("入れ替えると\n");

	for (int co = 0; m3[co] != '\0'; co++)
	{
		m3[co] = m1[co];
		m1[co] = m2[co];
		m2[co] = m3[co];
	}
	printf("moji1=%s	moji2=%s\n", &m1[0], &m2[0]);
}