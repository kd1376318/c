#include<stdio.h>
void display(char m, int n);
main()
{
	char m;
	int n;
	printf("�����H�F");
	scanf("%c", &m);
	printf("�����H�F");
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