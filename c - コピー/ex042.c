#include<stdio.h>
main()
{
	int co;
	char delta[]="Apple";
	printf("1•¶Žš‚¸‚Â•\Ž¦");
	for (co = 0; co < sizeof(delta); co++)
	{
		printf("%c", delta[co]);
	}
	printf("\n•¶Žš—ñ‚Å•\Ž¦");
	printf("\n%s", delta);
}