#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[999];
	int i, k[999];
	srand(time(0));
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢„");
	scanf("%s", &s);
	for (i = 0; s[i] != '\0'; i++)
	{
		printf("s[%d]‚Ì•¡‡‰»ƒL[„", i);
		scanf("%d", &k[i]);
	}
	printf("\n•¡‡Ï‚İ•¶š—ñ‚Í");
	for (i = 0; s[i] != '\0'; i++)
	{
		printf("%c", s[i] - k[i]);
	}
}