#include<stdio.h>
main()
{
	char m1[80], m2[80],m3[80];
	printf("•¶Žš—ñ1‚ð“ü—Í:");
	scanf("%s", &m1[0]);
	printf("•¶Žš—ñ2‚ð“ü—Í:");
	scanf("%s", &m2[0]);
	printf("moji1=%s	moji2=%s\n",&m1[0],&m2[0]);
	printf("“ü‚ê‘Ö‚¦‚é‚Æ\n");

	for (int co = 0; m3[co] != '\0'; co++)
	{
		m3[co] = m1[co];
		m1[co] = m2[co];
		m2[co] = m3[co];
	}
	printf("moji1=%s	moji2=%s\n", &m1[0], &m2[0]);
}