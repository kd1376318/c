#include<stdio.h>
main()
{
	int co;
	char delta[]="Apple";
	printf("1�������\��");
	for (co = 0; co < sizeof(delta); co++)
	{
		printf("%c", delta[co]);
	}
	printf("\n������ŕ\��");
	printf("\n%s", delta);
}