#include<stdio.h>
void error_msg(void);/*–ß‚è’l‚È‚µˆø”‚È‚µ*/
main()
{
	int a, b;
	printf("data1 data2?:");
	scanf("%d%d", &a, &b);
	if (b == 0)
	{
		error_msg();/*ŠÖ”erro_msg‚ÌŒÄ‚Ño‚µ*/
	}
	else
	{
		printf("%d/%d=%d...%d\n", a, b, a / b, a % b);

	}
}

void error_msg(void)
{
	printf("0‚ÅŠ„‚èZ‚Í‚Å‚«‚Ü‚¹‚ñ");
	return;/*–³‚­‚Ä‚à}‚ª‚ ‚ê‚Î‚»‚±‚Å§ŒäŒ³‚É‹A‚é*/
}