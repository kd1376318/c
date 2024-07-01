#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int no,a;
	printf("1`1000‚Ì’†‚Å“–‚½‚è‚Ì”‚ğ—\‘z‚µ‚Ä‚­‚¾‚³‚¢");
	srand(time(0));
	for (int i = 0; i != 10^10^10; i++, rand());
	a = rand() % 1000 + 1;
	for(int i=0;i!=-1;i++)
	{
		printf("\n“–‚½‚è‚Ì”‚ÍH„");
		scanf("%d", &no);
		if (no < a)
		{
			printf("“–‚½‚è‚Ì”‚æ‚è¬‚³‚¢‚Å‚·");
		}
		if (no > a)
		{
			printf("“–‚½‚è‚Ì”‚æ‚è‘å‚«‚¢‚Å‚·");
		}
		if (no == a)
		{
			printf("³‰ğ!!%d‰ñ‚Å“–‚½‚è‚Ü‚µ‚½", i+1);
			break;
		}

	}
}