#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define	Skil_num 3
#define	Mob_Num 3

typedef struct//skill型構造体
{
	char name[20];//スキル名
	int type;//スキルの種類 0:hp回復 1:atkup 2:
	int use_mp;//使用mp量
	int effect;//スキル効果
}skill;

typedef struct//spec型構造体
{
	char name[20];//名前
	int hp;//ｈｐ
	int atk;//攻撃力
	int def;//防御力
	UNIT state;//状態
}spec;

typedef	struct//chara型構造体
{
	spec sp;//spec型構造体変数
	int maxhp;//最大hp
	int mp;//mp
	skill skl[Skil_num];//skill型構造体配列
}chara;

typedef struct//mob型構造体
{
	spec sp;//spec型構造体
	int rate;//状態異常攻撃発生レート%表記
}mob;

enum BitState
{
	Base = 0,//0000 0000通常
	Poison = 1 << 0,//0000 0001毒
	Sleep = 1 << 1,//0000 0010眠り
	Paralysis = 1 << 2,//0000 0100麻痺
	Burn = 1 << 3,//0000 1000火傷
	AtkUp = 1 << 4,//0001 0000攻撃上昇
	AtkDown = 1 << 5//0010 0000攻撃下降
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
	printf("****現在の状態****\n");
	if (s & Poison)
	{
		printf("毒\n");
	}
	if (s & Sleep)
	{
		printf("睡眠\n");
	}
	if (s & Paralysis)
	{
		printf("麻痺\n");
	}
	if (s & Burn)
	{
		printf("火傷\n");
	}
	if (s & AtkUp)
	{
		printf("攻撃力アップ\n");
	}
	if (s & AtkDown)
	{
		printf("攻撃力ダウン\n");
	}
	if (s == Base)
	{
		printf("通常状態");
	}
	printf("*********************\n");
}

void ChangeFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("どの状態にしますか？\n");
		printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓");
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
		default://1~6に合致しなかった時の処理
			break;
		}
	}
}

void ClearFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("どの状態を解除しますか\n");
		printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓");
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
		default://1~6に合致しなかった時の処理
			break;
		}
	}
}
