#include<stdio.h>
main()
{
	int c, to,i;
	for (printf("����:"),i = to = 0; scanf("%d", &c) != EOF; printf("����:"), i++, to += c);
	printf("���v=%d		����=%.3f", to, (float)to / i);
}