#include<stdio.h>
void display(char m, int n);
main()
{
	char m;
	int n;
	printf("文字？：");
	scanf("%c", &m);
	printf("整数？：");
	scanf("%d", &n);
	display(m, n);
}
void display(char m, int n)
{
	while (n)
	{
		printf("%c", m);
		n--;
	}
}