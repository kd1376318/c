#include<stdio.h>
main()
{
	char s[999];
	printf("ˆÃ†‰»•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢„");
	scanf("%s", &s);
	printf("•¡‡Ï‚İ•¶š—ñ‚ÍA");
	for (int i = 0; s[i] != '\0'; i++)
	{
		s[i] = s[i] - 0x01;
		printf("%c", s[i]);
	}
}