#include<stdio.h>
int gokei(int a,int b,int c);
float heikin(int to,int co);
main()
{
	int a, b, c, co, to;
	float av;
	printf("®”‚ğ3‚Â“ü—Í:");
	co = scanf("%d%d%d", &a, &b, &c);
	printf("‡Œv‚Í%dA•½‹Ï‚Í%.2f\n", to = gokei(a, b, c) , heikin(to, co));
}


int gokei(int a, int b,int c)
{
	return a + b + c;;
}

float heikin(int to,int co)
{
	return (float)to / co;;
}