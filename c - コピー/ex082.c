#include<stdio.h>
#include<string.h>
void up(int *d);
void down(int* d);
main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	int i;
	char str;
	printf("ƒ\[ƒg•ûŒü‚ð“ü—Í:");
	scanf("%s", &str);
	if (strcmp(str,"~‡")>0)
	{
		down(data);
		for (i = 0; i < 8; i++)
		{
			printf("%d ", data[i]);
		}
	}
	if (strcmp(str, "¸‡") > 0)
	{
		up(data);
		for (i = 0; i < 8; i++)
		{
			printf("%d ", data[i]);
		}
	}
}
void up(int *d)
{
	int w;
	while(*d)
	{
		if (strcmp(*d, *++d) > 0)
		{
			d++;
		}
		else
		{
			w = *++d;
			*++d = *d;
			*d = w;
			d++;
		}
	}
	return d;
}
void down(int* d)
{
	int w;
	while (*d)
	{
		if (strcmp(*d, *++d) > 0)
		{
			w = *++d;
			*++d = *d;
			*d = w;
			d++;
		}
		else
		{
			d++;
		}
	}
	return d;
}