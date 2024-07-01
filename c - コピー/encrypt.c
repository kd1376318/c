#include<stdio.h>
main()
{
	char s[999];
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢„");
	scanf("%s", &s);
	printf("ˆÃ†‰»•¶š—ñ‚ÍA");
	for (int i = 0; s[i] != '\0'; i++)
	{
		s[i] = s[i] + 0x01;
		printf("%c", s[i]);
	}
}