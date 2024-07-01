#include<stdio.h>

enum BitState
{
	Base = 0,//0000 0000’Êí
	Poison = 1 << 0,//0000 0001“Å
	Sleep = 1 << 1,//0000 0010–°‚è
	Paralysis = 1 << 2,//0000 0100–ƒáƒ
	Burn = 1 << 3,//0000 1000‰Î
	AtkUp = 1 << 4,//0001 0000UŒ‚ã¸
	AtkDown = 1 << 5//0010 0000UŒ‚‰º~
};

typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);


main()
{
	UINT Mystate = Base;
	Mystate |= (Poison | Sleep);
	DisplayStatus(Mystate);
	ChangeFlag(&Mystate);
	DisplayStatus(Mystate);
	ClearFlag(&Mystate);
	DisplayStatus(Mystate);
}

void DisplayStatus(UINT s)
{
	printf("****Œ»İ‚Ìó‘Ô****\n");
	if (s & Poison)
	{
		printf("“Å\n");
	}
	if (s & Sleep)
	{
		printf("‡–°\n");
	}
	if (s & Paralysis)
	{
		printf("–ƒáƒ\n");
	}
	if (s & Burn)
	{
		printf("‰Î\n");
	}
	if (s & AtkUp)
	{
		printf("UŒ‚—ÍƒAƒbƒv\n");
	}
	if (s & AtkDown)
	{
		printf("UŒ‚—Íƒ_ƒEƒ“\n");
	}
	if (s == Base)
	{
		printf("’Êíó‘Ô");
	}
	printf("*********************\n");
}

void ChangeFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("‚Ç‚Ìó‘Ô‚É‚µ‚Ü‚·‚©H\n");
		printf("1:“Å 2:‡–° 3:–ƒáƒ 4:‰Î 5:UŒ‚ª 6:UŒ‚«");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		default://1~6‚É‡’v‚µ‚È‚©‚Á‚½‚Ìˆ—
			break;
		}
	}
}

void ClearFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("‚Ç‚Ìó‘Ô‚ğ‰ğœ‚µ‚Ü‚·‚©\n");
		printf("1:“Å 2:‡–° 3:–ƒáƒ 4:‰Î 5:UŒ‚ª 6:UŒ‚«");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a) 
		{
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		default://1~6‚É‡’v‚µ‚È‚©‚Á‚½‚Ìˆ—
			break;
		}
	}
}
